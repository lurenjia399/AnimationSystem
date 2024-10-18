// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_ActivateGameplayAbility.generated.h"

UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTTask_ActivateGameplayAbility : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_ActivateGameplayAbility();

protected:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult) override;
	virtual FString GetStaticDescription() const override;

protected:
	UFUNCTION()
	void OnAbilityEnded(UGameplayAbility* EndedAbility);

protected:
	// 触发技能的Tag，慎用Non Instanced技能的Tag，可能会出现问题
	UPROPERTY(EditAnywhere, Category = "Gameplay Ability")
	FGameplayTagContainer SkillTag;

	// 正在执行的GA Spec
	struct FGameplayAbilitySpec* ActivatingSpec;

	// 正在执行的GA
	UGameplayAbility* ActivatingAbility;
	UBehaviorTreeComponent* BTComponent;
};
