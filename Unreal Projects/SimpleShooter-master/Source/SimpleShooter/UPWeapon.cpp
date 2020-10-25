// K-B 2020


#include "UPWeapon.h"
#include "Components/SkeletalMeshComponent.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"

	// Sets default values
	AUPWeapon::AUPWeapon()
	{
		// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
		PrimaryActorTick.bCanEverTick = true;

		// Set the default values for variables
		maxTotalAmmo = 100;
		maxClipAmmo = 12;
		totalAmmo = 64;
		clipAmmo = 12;
		reloadTime = 1.0f;
	}

	void AUPWeapon::PullTrigger()
	{
		UGameplayStatics::SpawnEmitterAttached(MuzzleFlash, Mesh, TEXT("MuzzleFlashSocket"));
		UGameplayStatics::SpawnSoundAttached(MuzzleSound, Mesh, TEXT("MuzzleFlashSocket"));

		FHitResult Hit;
		FVector ShotDirection;
		bool bSuccess = GunTrace(Hit, ShotDirection);
		if (bSuccess)
		{
			UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ImpactEffect, Hit.Location, ShotDirection.Rotation());
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

	// Called when the game starts or when spawned
	void AUPWeapon::BeginPlay()
	{
		Super::BeginPlay();

	}

	// Called every frame
	void AUPWeapon::Tick(float DeltaTime)
	{
		Super::Tick(DeltaTime);

	}

	bool AUPWeapon::GunTrace(FHitResult & Hit, FVector & ShotDirection)
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

	AController* AUPWeapon::GetOwnerController() const
	{
		APawn* OwnerPawn = Cast<APawn>(GetOwner());
		if (OwnerPawn == nullptr)
			return nullptr;
		return OwnerPawn->GetController();
	}

