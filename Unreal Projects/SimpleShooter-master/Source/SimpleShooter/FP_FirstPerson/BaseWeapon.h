// K-B 2020

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "BaseWeapon.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SIMPLESHOOTER_API UBaseWeapon : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UBaseWeapon();

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
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
