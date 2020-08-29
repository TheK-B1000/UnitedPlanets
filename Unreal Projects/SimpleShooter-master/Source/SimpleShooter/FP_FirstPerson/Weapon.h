// K-B 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

UCLASS()
class SIMPLESHOOTER_API AWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

	void PullTrigger();

	// The total amount of ammo that can be carried for the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	int maxTotalAmmo;

	// The total amount of ammo that can be in weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	int maxClipAmmo;

	// The total amount of ammo being carried for the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	int totalAmmo;

	// The total amount of ammo in the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	int clipAmmo;

	// The time it takes to reload the weapon
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Weapon)
	int reloadTime;

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
	USkeletalMeshComponent* Mesh;

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
