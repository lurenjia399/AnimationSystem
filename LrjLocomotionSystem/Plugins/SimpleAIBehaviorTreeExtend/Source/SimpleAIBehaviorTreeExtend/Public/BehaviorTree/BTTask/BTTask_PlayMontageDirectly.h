//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_PlayMontageMulticast.h"
#include "BTTask_PlayMontageDirectly.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTTask_PlayMontageDirectly : public UBTTask_PlayMontageMulticast
{
	GENERATED_BODY()

public:
	UBTTask_PlayMontageDirectly();

public:
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult) override;
	virtual FString GetStaticDescription() const override;

private:
	// 目标位置
	UPROPERTY(EditAnywhere, Category = "Play Directly", meta = (AllowPrivateAccess = "true"))
	struct FBlackboardKeySelector TargetLocation;
};