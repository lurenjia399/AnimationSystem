//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameplayTagContainer.h"
#include "BTTask_AttackTarget.generated.h"

class UGameplayAbility;

UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTTask_AttackTarget : public UBTTaskNode
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, Category = Blackboard)
	struct FBlackboardKeySelector Blackboard_Actor;

	UPROPERTY(EditAnywhere, Category = Tag)
	FGameplayTag AttackTag;

	UPROPERTY(EditAnywhere, Category = Tag)
	float ClearGASTime;

public:
	UBTTask_AttackTarget();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)override;

	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual void OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult) override;

	/** Notify called after GameplayTask finishes initialization (not active yet) */
	virtual void OnGameplayTaskInitialized(UGameplayTask& Task) {}

	/** Notify called after GameplayTask changes state to Active (initial activation or resuming) */
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) {}

	/** Notify called after GameplayTask changes state from Active (finishing or pausing) */
	virtual void OnGameplayTaskDeactivated(UGameplayTask& Task) {}

protected:
	UFUNCTION()
	void OnAbilityEnded(UGameplayAbility* EndedAbility);
	void OnClearAbilitEnded();

protected:
	UPROPERTY()
	TWeakObjectPtr<UBehaviorTreeComponent> BTComponent;

	UPROPERTY()
	TWeakObjectPtr<UGameplayAbility> ActivatingAbility;

	FTimerHandle GASClearHandle;
};
