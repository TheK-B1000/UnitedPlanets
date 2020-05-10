// Social Cube Media 2020

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class UNITEDPLANETS_API IInteractInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void OnInteract(AActor* Caller);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void StartFocus();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Interaction")
	void EndFocus();

};