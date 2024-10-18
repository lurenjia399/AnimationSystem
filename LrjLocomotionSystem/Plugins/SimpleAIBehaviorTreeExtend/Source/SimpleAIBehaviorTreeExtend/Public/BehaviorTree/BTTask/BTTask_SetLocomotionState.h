//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Engine/EngineTypes.h"
#include "SimpleAIBehaviorTreeExtendType.h"
#include "BTTask_SetLocomotionState.generated.h"

UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTTask_SetLocomotionState : public UBTTaskNode
{
	GENERATED_BODY()
	
protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual FString GetStaticDescription() const override;

protected:
	UPROPERTY(EditAnywhere, Category = "Locomotion Type")
	ESAIBTLocomotionState WalkingState = ESAIBTLocomotionState::LS_Walk;
};
