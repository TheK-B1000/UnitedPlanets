// 2020 Social Cube Media


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "AITypes.h"

void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	if (AIBehavior != nullptr)
	{
		RunBehaviorTree(AIBehavior);
	}
}

void AShooterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	// APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	// 
	// if(LineOfSightTo(PlayerPawn))
	// {
	// 	SetFocus(PlayerPawn);
	// 	MoveToActor(PlayerPawn, AcceptanceRadius);
	// }
	// else
	// {
	// 	ClearFocus(EAIFocusPriority::Gameplay);
	// 	StopMovement();
	// }
}
