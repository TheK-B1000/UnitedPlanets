// Copyright Epic Games, Inc. All Rights Reserved.

#include "UnitedPlanetsGameMode.h"
#include "UnitedPlanetsHUD.h"
#include "UnitedPlanetsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnitedPlanetsGameMode::AUnitedPlanetsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AUnitedPlanetsHUD::StaticClass();
}

void AUnitedPlanetsGameMode::PawnKilled(APawn* PawnKilled)
{

}
