// K-B 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class UDestructibleComponent;

UCLASS()
class SIMPLESHOOTER_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

	USceneComponent* RootComp;

	UPROPERTY(EditAnywhere)
	FVector Velocity = FVector(100.0f);

	// remove our bullet from screen it has not hit anything
	float BulletExpiry = 0.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
