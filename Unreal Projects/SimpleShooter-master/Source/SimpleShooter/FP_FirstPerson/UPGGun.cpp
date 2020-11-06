// K-B 2020


#include "UPGGun.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "FP_FirstPersonCharacter.h"
#include "DrawDebugHelpers.h"


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

}

void AUPGGun::OnFire()
{
	/* try and fire a projectile
	if (ProjectileClass != nullptr)
	{
		// try and play the emitter if specified
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, GunMesh, TEXT("MuzzleFlashSocket"));
		// try and play the sound if specified
		UGameplayStatics::SpawnSoundAttached(MuzzleSound, GunMesh, TEXT("MuzzleFlashSocket"));

		const FRotator SpwanRotation = GetControlRotation();
		const FVector SpawnLocation = ((Barrel_refpoint != nullptr) ? Barrel_refpoint->GetComponentLocation());

		// I need to setup the gun to shoot bullets but right now it is using line tracing. This works but not what I want.
		UWorld* const World = GetWorld();
		if (World != nullptr)
		{
			FHitResult Hit;
			FVector ShotDirection;
			bool bSuccess = GunTrace(Hit, ShotDirection);
		
			if (bSuccess)
				{
					// spawn the projectile at the barrel ref point
					World->SpawnActor<ABallProjectile>(ProjectileClass, SpawnLocation, SpawnRotation)
					// try and play the emitter if specified
					UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
					// try and play the sound if specified
					UGameplayStatics::PlaySoundAtLocation(GetWorld(), ImpactSound, Hit.Location);

					AActor* HitActor = Hit.GetActor();
					if (HitActor != nullptr)
					{
						FPointDamageEvent DamageEvent(Damage, Hit, ShotDirection, nullptr);
						AController* OwnerController = GetOwnerController();
						HitActor->TakeDamage(Damage, DamageEvent, OwnerController, this);
					}
				}
		}

	
		
	}*/
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



