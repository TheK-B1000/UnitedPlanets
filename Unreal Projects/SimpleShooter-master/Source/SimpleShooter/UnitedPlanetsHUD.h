// K-B 2020

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UnitedPlanetsHUD.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLESHOOTER_API AUnitedPlanetsHUD : public AHUD
	{
		GENERATED_BODY()

	public:
		AUnitedPlanetsHUD();

		/** Primary draw call for the HUD */
		virtual void DrawHUD() override;

	private:
		/** Crosshair asset pointer */
		class UTexture2D* CrosshairTex;

	};

