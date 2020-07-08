// 2020 Social Cube Media


#include "ShooterAIController.h"
#include "Kismet/GameplayStatics.h"
#include "AITypes.h"

void AShooterAIController::BeginPlay()
{
	Super::BeginPlay();

	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	
	SetFocus(PlayerPawn, 2);
	MoveToActor(PlayerPawn, 200);
	
}

void AShooterAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(GetWorld(), 0);
	MoveToActor(PlayerPawn, 200);
}
