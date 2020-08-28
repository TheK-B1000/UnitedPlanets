// K-B 2020

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "AI.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UAI : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class SIMPLESHOOTER_API IAI
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "AI")
	void GoToLocation(FVector TargetLocation);
};
