// K-B 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UPGGun.generated.h"

UCLASS()
class SIMPLESHOOTER_API AUPGGun : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUPGGun();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
		bool isFiring = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
		int AmmoCurrent = 15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
		int AmmoMax = 100;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
		int ClipSize = 15;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
		float FireRate = 0.15f;

	/** Barrel Reference Point */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gun)
		USceneComponent* Barrel_refpoint;\

	// TODO - determine which sound design I should keep
	/** Sound to play each time we fire - different way of doing it */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class USoundBase* FireSound;

	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category = Projectile)
		TSubclassOf<class AProjectile> ProjectileClass;

	/* This is when calculating the trace to determine what the weapon has hit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float WeaponRange;

	/* This is multiplied by the direction vector when the weapon trace hits something to apply velocity to the component that is hit */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		float WeaponDamage;

	/** Fires a projectile */
	void OnFire();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/*
	 * Performs a trace between two points
	 *
	 * @param	StartTrace	Trace starting point
	 * @param	EndTrac		Trace end point
	 * @returns FHitResult returns a struct containing trace result - who/what the trace hit etc.
	 */
	FHitResult WeaponTrace(const FVector& StartTrace, const FVector& EndTrace) const;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(VisibleAnywhere)
		USceneComponent* Root;

	UPROPERTY(VisibleAnywhere)
		USkeletalMeshComponent* GunMesh;

	UPROPERTY(EditAnywhere)
		UParticleSystem* MuzzleFlash;

	UPROPERTY(EditAnywhere)
		USoundBase* MuzzleSound;

	UPROPERTY(EditAnywhere)
		UParticleSystem* ImpactEffect;

	UPROPERTY(EditAnywhere)
		USoundBase* ImpactSound;

	UPROPERTY(EditAnywhere)
		float MaxRange = 1000;

	UPROPERTY(EditAnywhere)
		float Damage = 10;

	bool GunTrace(FHitResult& Hit, FVector& ShotDirection);

	AController* GetOwnerController() const;
};
