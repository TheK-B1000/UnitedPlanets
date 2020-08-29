// K-B 2020


#include "BaseWeapon.h"

// Sets default values for this component's properties
UBaseWeapon::UBaseWeapon()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// Set the default values for variables
	maxTotalAmmo = 100;
	maxClipAmmo = 12;
	totalAmmo = 64;
	clipAmmo = 12;
	reloadTime = 1.0f;
}


// Called when the game starts
void UBaseWeapon::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UBaseWeapon::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

