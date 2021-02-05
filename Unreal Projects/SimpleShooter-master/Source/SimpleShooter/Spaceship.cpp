// United Planets of Galaxies - K-B - 2020

#include "Spaceship.h"
#include "UObject/ConstructorHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Engine/World.h"
#include "Engine/StaticMesh.h"

// Sets default values
ASpaceship::ASpaceship()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Create capsule collider component
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule Collider"));
	RootComponent = CapsuleComp;

	// Create static mesh component
	SpaceshipMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SpaceshipMesh"));
	SpaceshipMesh->SetupAttachment(RootComponent);

	// Create projectile mesh components
	ProjectileSpawnPoint1 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Spawn Point 1"));
	ProjectileSpawnPoint2 = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Spawn Point 2"));

	// Create a spring arm component
	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(SpaceshipMesh); // Attach SpringArm to RootComponent
	SpringArm->TargetArmLength = 2800.0f; // The camera follows at this distance behind the character
	SpringArm->SocketOffset = FVector(0.0f, 0.0f, 500.0f);
	SpringArm->bEnableCameraLag = false; // Do not allow camera to lag
	SpringArm->CameraLagSpeed = 15.0f;

	// Create camera component
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(SpringArm); // Attach the camera
	Camera->bUsePawnControlRotation = false; // Don't rotate camera with controller

	// Set handling parameters 
	Acceleration = 1000.0f;
	TurnSpeed = 50.0f;
	MaxSpeed = 4000.0f;
	CurrentForwardSpeed = 600.0f;
}

// Called every frame
void ASpaceship::Tick(float DeltaTime)
{
	// Creates a FVector that handles the movement of the spaceship
	const FVector LocalMove = FVector(CurrentForwardSpeed * DeltaTime, 0.0f, 0.0f);

	// Move plan forwards (with sweep so we stop when we collide with things)
	AddActorLocalOffset(LocalMove, true);

	// Calculate change in rotation this frame
	FRotator DeltaRotation(0, 0, 0);
	DeltaRotation.Pitch = CurrentPitchSpeed * DeltaTime;
	DeltaRotation.Yaw = CurrentYawSpeed * DeltaTime;
	DeltaRotation.Roll = CurrentRollSpeed * DeltaTime;

	// Rotate plane
	AddActorLocalRotation(DeltaRotation);

	// Call any parent class Tick implementation
	Super::Tick(DeltaTime);
}

void ASpaceship::NotifyHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::NotifyHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);

	// Deflect along the surface when we collide
	FRotator CurrentRotation = GetActorRotation();
	SetActorRotation(FQuat::Slerp(CurrentRotation.Quaternion(), HitNormal.ToOrientationQuat(), 0.025f));
}

// Called to bind functionality to input
void ASpaceship::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	// Check if PlayerInputComponent is valid (not NULL)
	check(PlayerInputComponent);

	// Bind our control axis' to callback functions
	PlayerInputComponent->BindAxis("Thrust", this, &ASpaceship::ThrustInput);
	PlayerInputComponent->BindAxis("TurnUp", this, &ASpaceship::TurnY);
	PlayerInputComponent->BindAxis("TurnRight", this, &ASpaceship::TurnX);
}

void ASpaceship::ThrustInput(float Val)
{
	// Is there any input?
	bool bHasInput = !FMath::IsNearlyEqual(Val, 0.f);
	// If input is not held down, reduce speed
	float CurrentAcc = bHasInput ? (Val * Acceleration) : (-0.5f * Acceleration);
	// Calculate new speed
	float NewForwardSpeed = CurrentForwardSpeed + (GetWorld()->GetDeltaSeconds() * CurrentAcc);
	// Clamp between MinSpeed and MaxSpeed
	CurrentForwardSpeed = FMath::Clamp(NewForwardSpeed, MinSpeed, MaxSpeed);

	// The ship automatically moves forward and when we press the button it shoots the ship forward faster
}

void ASpaceship::AeroBracking(float Val)
{
	// Get the ship to slow down
}

void ASpaceship::TurnY(float Val)
{
	// Target pitch speed is based in input
	float TargetPitchSpeed = (Val * TurnSpeed * -1.f);

	// When steering, we decrease pitch slightly
	TargetPitchSpeed += (FMath::Abs(CurrentYawSpeed) * -0.2f);

	// Smoothly interpolate to target pitch speed
	CurrentPitchSpeed = FMath::FInterpTo(CurrentPitchSpeed, TargetPitchSpeed, GetWorld()->GetDeltaSeconds(), 2.f);
}

void ASpaceship::TurnX(float Val)
{
	// Target yaw speed is based on input
	float TargetYawSpeed = (Val * TurnSpeed);

	// Smoothly interpolate to target yaw speed
	CurrentYawSpeed = FMath::FInterpTo(CurrentYawSpeed, TargetYawSpeed, GetWorld()->GetDeltaSeconds(), 2.f);

	// Is there any left/right input?
	const bool bIsTurning = FMath::Abs(Val) > 0.2f;

	// If turning, yaw value is used to influence roll
	// If not turning, roll to reverse current roll value.
	float TargetRollSpeed = bIsTurning ? (CurrentYawSpeed * 0.5f) : (GetActorRotation().Roll * -2.f);

	// Smoothly interpolate roll speed
	CurrentRollSpeed = FMath::FInterpTo(CurrentRollSpeed, TargetRollSpeed, GetWorld()->GetDeltaSeconds(), 2.f);


}

void ASpaceship::RotateLeft(float Val)
{
	// All distances from center of mass shoud be equal. for eg 100 unit to t he left and right, 100 up / down and 100 forward / back.This way all forces will act in same way.

	// Another tip is : make box(or traingular shape) for physics body.Make sure this mesh is symmetrical.Make it invisible, then attach visible model to it, but model should have no physics.This way you can have assymetrical visible model, all while physics works as intended. Asymmetrical physics model will result in spaceship drifting,

	// To move forward, you apply same force to both red vectors, to turn you apple + force to one of them and -force to another.Same with roll and pitch.

	// Now tricky part, you want stop rolling at 30 deg.You can use math for it ie, calculate force to nullify momentum your ship has, its not trivial.

	// Or you can use angular damping, ie make it quit high just before ship rolls to 30deg(or when player releases button to roll\turn).

}

void ASpaceship::RotateRight(float Val)
{
	// All distances from center of mass shoud be equal. for eg 100 unit to t he left and right, 100 up / down and 100 forward / back.This way all forces will act in same way.

	// Another tip is : make box(or traingular shape) for physics body.Make sure this mesh is symmetrical.Make it invisible, then attach visible model to it, but model should have no physics.This way you can have assymetrical visible model, all while physics works as intended.Asymmetrical physics model will result in spaceship drifting,

	// To move forward, you apply same force to both red vectors, to turn you apple + force to one of them and -force to another.Same with roll and pitch.

	// Now tricky part, you want stop rolling at 30deg.You can use math for it ie, calculate force to nullify momentum your ship has, its not trivial.

	// Or you can use angular damping, ie make it quit high just before ship rolls to 30deg(or when player releases button to roll\turn).
}



