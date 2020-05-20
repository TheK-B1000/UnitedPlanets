 // Social Cube Media 2020


#include "GunActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/Controller.h"
#include "UObject/UObjectGlobals.h"

#define OUT

// Sets default values
AGunActor::AGunActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);

	Mesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Mesh"));
	Mesh->SetupAttachment(Root);


}

void AGunActor::PullTrigger()
{
	//UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));

	FVector  Location;
	FRotator  Rotation;

	APawn* OwnerPawn = Cast<APawn>(GetOwner());
	if (OwnerPawn != nullptr) return;
	AController* OwnerController = OwnerPawn->GetController();
	if (OwnerController != nullptr) return;
	OwnerController->GetPlayerViewPoint
	(
		OUT Location,
		OUT Rotation
	);

	FVector End = Location + Rotation.Vector() * MaxRange;

	// TODO: LineTrace
	FHitResult Hit;
	bool bSuccess = GetWorld()->LineTraceSingleByChannel(Hit, Location, End, ECollisionChannel::ECC_GameTraceChannel1);

	if (bSuccess)
	{
		FVector ShotDirection = -Rotation.Vector();
		DrawDebugPoint(GetWorld(), Hit.Location, 20, FColor::Red, true);

		AActor* HitActor = Hit.GetActor();
		if (HitActor != nullptr)
		{
			FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
			Hit.GetActor()->TakeDamage(Damage, DamageEvent, OwnerController, this);
		}
		//UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), , Hit.Location(), ShotDirection.Rotation());
	}
	
}

// Called when the game starts or when spawned
void AGunActor::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AGunActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

