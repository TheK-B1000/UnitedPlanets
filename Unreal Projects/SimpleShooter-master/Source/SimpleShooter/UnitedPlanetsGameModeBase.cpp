// K-B 2020

#include "UnitedPlanetsGameModeBase.h"
#include "UnitedPlanetsHUD.h"
#include "UnitedPlanetsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnitedPlanetsGameModeBase::AUnitedPlanetsGameModeBase()
{
	// Set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// Use our custom HUD class
	HUDClass = AUnitedPlanetsHUD::StaticClass();
}
