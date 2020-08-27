// K-B 2020


#include "AIHuman.h"

void AAIHuman::GoToLocation(FVector* TargetLocation)
{
	FVector TargetLocation;
	TargetLocation = ARecastNavMesh::GetRandomReachablePointInRadius();
}
