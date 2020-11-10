// K-B 2020


#include "UPGGun.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FP_FirstPersonCharacter.h"
#include "GameFramework/PlayerController.h"
#include "Projectile.h"
#include "Animation/AnimInstance.h"
#include "DrawDebugHelpers.h"

#define COLLISION_UPGGun		ECC_GameTraceChannel1

// Sets default values
AUPGGun::AUPGGun()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	GunMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	GunMesh->SetupAttachment(Root);

	// Create a barrel_refpoint scene component
	Barrel_refpoint = CreateDefaultSubobject<USceneComponent>(TEXT("Barrel_refpoint"));
	Barrel_refpoint->SetupAttachment(GunMesh);

	// Set UPGGun damage and range
	WeaponRange = 5000.0f;
	WeaponDamage = 500000.0f;
}

void AUPGGun::OnFire()
{
	UE_LOG(LogTemp, Warning, TEXT("On Fire Pressed!"));
	UWorld* const World = GetWorld();
	// try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		UE_LOG(LogTemp, Warning, TEXT("Projectile Shot!"));
		// try and play the emitter if specified
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, GunMesh, TEXT("MuzzleFlashSocket"));
		// try and play the sound if specified
		UGameplayStatics::SpawnSoundAttached(MuzzleSound, GunMesh, TEXT("MuzzleFlashSocket"));

		 AFP_FirstPersonCharacter* const Character = Cast<AFP_FirstPersonCharacter>(this);

		// reference to spawn the projectile
		const FRotator SpawnRotation = Barrel_refpoint->GetComponentRotation();
		const FVector SpawnLocation = Barrel_refpoint->GetComponentLocation();

		if (World != nullptr)
		{
			// spawn the projectile at the muzzle
			UE_LOG(LogTemp, Warning, TEXT("Projectile Spawned!"));
			AProjectile* Projectile = World->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);

			auto multiplier = 5000.0f; // tamper with amount for desired results
			FVector NewVelocity = SpawnRotation.Vector() * multiplier;
			Projectile->Velocity = FVector(NewVelocity);
			FHitResult Hit;
			FVector ShootDir = FVector::ZeroVector;
			FVector StartTrace = FVector::ZeroVector;
			bool bSuccess = GunTrace(Hit, ShootDir);

			if (bSuccess)
			{
				// Now send a trace from the end of our gun to see if we should hit anything
				if (Character)
				{ 
					// spawn the projectile at the barrel ref point
					World->SpawnActor<AProjectile>(ProjectileClass, SpawnLocation, SpawnRotation);
					// try and play the emitter if specified
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShootDir.Rotation());
					// try and play the sound if specified
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);

					// TODO - do I need this trace if it is built in the projectile class??
					// Calculate endpoint of trace
					const FVector EndTrace = StartTrace + ShootDir * WeaponRange;

					// Calculate the direction of fire and the start location for trace
					FRotator CamRot;
					ShootDir = CamRot.Vector();

					// Adjust trace so there is nothing blocking the ray between the camera and the pawn, and calculate distance from adjusted start
					StartTrace = StartTrace + ShootDir * ((GetActorLocation() - StartTrace) | ShootDir);

					// Check for impact
					const FHitResult Impact = WeaponTrace(StartTrace, EndTrace);

					// Deal with impact
					AActor* DamagedActor = Impact.GetActor();
					UPrimitiveComponent* DamagedComponent = Impact.GetComponent();

					// If we hit an actor, with a component that is simulating physics, apply an impulse
					if ((DamagedActor != NULL) && (DamagedActor != this) && (DamagedComponent != NULL) && DamagedComponent->IsSimulatingPhysics())
					{
						DamagedComponent->AddImpulseAtLocation(ShootDir * WeaponDamage, Impact.Location);
						FPointDamageEvent DamageEvent(Damage, Hit, ShootDir, nullptr);
						AController* OwnerController = GetOwnerController();
						DamagedActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
					}		
				}	
			}
		}
	}
}

// Called when the game starts or when spawned
void AUPGGun::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AUPGGun::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

bool AUPGGun::GunTrace(FHitResult& Hit, FVector& ShotDirection)
{
	AController* OwnerController = GetOwnerController();
	if (OwnerController == nullptr)
		return false;

	FVector Location;
	FRotator Rotation;
	OwnerController->GetPlayerViewPoint(Location, Rotation);
	ShotDirection = -Rotation.Vector();

	FVector End = Location + Rotation.Vector() * MaxRange;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);
	Params.AddIgnoredActor(GetOwner());
	return GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel1, Params);
}

AController* AUPGGun::GetOwnerController() const
{
	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn == nullptr)
		return nullptr;
	return OwnerPawn->GetController();
}

FHitResult AUPGGun::WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const
{
	// Perform trace to retrieve hit info
	FCollisionQueryParams TraceParams(SCENE_QUERY_STAT(UPGGunTrace), true, GetInstigator());
	TraceParams.bReturnPhysicalMaterial = true;

	FHitResult Hit(ForceInit);
	GetWorld()->LineTraceSingleByChannel(Hit, StartTrace, EndTrace, COLLISION_UPGGun, TraceParams);

	return Hit;
}

