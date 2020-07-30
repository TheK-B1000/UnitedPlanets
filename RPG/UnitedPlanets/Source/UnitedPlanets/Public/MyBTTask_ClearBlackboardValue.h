// 2020 Social Cube Media

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "MyBTTask_ClearBlackboardValue.generated.h"

/**
 * 
 */
UCLASS()
class UNITEDPLANETS_API UMyBTTask_ClearBlackboardValue : public UBTTask_BlackboardBase
{
	GENERATED_BODY()
	
public:
	UMyBTTask_ClearBlackboardValue();
};
