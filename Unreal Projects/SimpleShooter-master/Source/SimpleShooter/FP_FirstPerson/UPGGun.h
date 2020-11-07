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

	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimMontage* FireAnimation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		class UAnimInstance* AnimInstance;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	/** Fires a projectile */
	void OnFire();

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
