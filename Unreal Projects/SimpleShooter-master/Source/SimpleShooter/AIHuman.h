// K-B 2020

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "NavMesh/RecastNavMesh.h"
#include "AIHuman.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AAIHuman : public AAIController, public IAI
{
	GENERATED_BODY()

public:
	FVector TargetLocation;
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AI")
	void GoToLocation(FVector* TargetLocation);
};
