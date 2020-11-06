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

	void OnFire();

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
		USceneComponent* Barrel_refpoint;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

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
