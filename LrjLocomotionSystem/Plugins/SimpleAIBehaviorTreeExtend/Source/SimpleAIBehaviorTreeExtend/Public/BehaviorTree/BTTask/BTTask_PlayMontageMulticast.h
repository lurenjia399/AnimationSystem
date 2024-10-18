//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "GameFramework/Character.h"
#include "BTTask_PlayMontageMulticast.generated.h"

class UBehaviorTreeComponent;
class UAnimMontage;

UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTTask_PlayMontageMulticast : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UBTTask_PlayMontageMulticast();

public:
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual EBTNodeResult::Type AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult) override;
	virtual FString GetStaticDescription() const override;

private:
	UFUNCTION()
	void OnMontageEnded(UAnimMontage* MontageAsset, bool bInterrupted);

private:
	// 蒙太奇资源
	UPROPERTY(EditAnywhere, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UAnimMontage> AnimMontageAsset;

	// 播放速率
	UPROPERTY(EditAnywhere, Category = "Animation", meta = (AllowPrivateAccess = "true"))
	float PlayRate = 1.f;
	
protected:
	// 片段名
	UPROPERTY(EditAnywhere, Category = "Animation")
	FName MontageSectionName = NAME_None;

	UPROPERTY()
	TWeakObjectPtr<ACharacter> CharacterPtr;

	UPROPERTY()
	TWeakObjectPtr<UBehaviorTreeComponent> BTCompPtr;
};
