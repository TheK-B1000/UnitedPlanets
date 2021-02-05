// K-B 2020

#include "FlyingGameModeBase.h"
#include "Spaceship.h"

AFlyingGameModeBase::AFlyingGameModeBase()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AFlyingGameModeBase::StaticClass();
}
