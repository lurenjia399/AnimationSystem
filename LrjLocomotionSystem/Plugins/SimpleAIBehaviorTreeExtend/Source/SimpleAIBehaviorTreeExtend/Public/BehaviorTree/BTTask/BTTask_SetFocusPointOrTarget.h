//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetFocusPointOrTarget.generated.h"

UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTTask_SetFocusPointOrTarget : public UBTTaskNode
{
	GENERATED_BODY()

	UBTTask_SetFocusPointOrTarget();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual FString GetStaticDescription() const override;

private:
	// 是否清除Focus
	UPROPERTY(EditAnywhere, Category = "Focus Params", meta = (AllowPrivateAccess = "true"))
	bool IsClearFocusTarget = false;

	// 目标是否为Actor
	UPROPERTY(EditAnywhere, Category = "Focus Params", meta = (AllowPrivateAccess = "true", EditCondition = "IsClearFocusTarget == false"))
	bool IsFocusActor = false;
	
	// 朝向的Actor
	UPROPERTY(EditAnywhere, Category = "Focus Params", meta = (AllowPrivateAccess = "true", EditCondition = "IsClearFocusTarget == false && IsFocusActor == true"))
	struct FBlackboardKeySelector FocusActor;
	
	// 朝向的位置
	UPROPERTY(EditAnywhere, Category = "Focus Params", meta = (AllowPrivateAccess = "true", EditCondition = "IsClearFocusTarget == false && IsFocusActor == false"))
	struct FBlackboardKeySelector FocusLocation;
};
