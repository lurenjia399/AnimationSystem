// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SimpleAIBehaviorTreeExtendType.h"
#include "BTDecorator_CheckTargetPointIsReachable.generated.h"

UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTDecorator_CheckTargetPointIsReachable : public UBTDecorator
{
	GENERATED_BODY()

	UBTDecorator_CheckTargetPointIsReachable();
	
protected:
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual void InitializeFromAsset(UBehaviorTree& Asset) override;
	virtual FString GetStaticDescription() const override;

protected:
	// 待验证的目标
	UPROPERTY(EditAnywhere, Category = "Target Point")
	struct FBlackboardKeySelector CheckTarget;
	// 目标点相对目标的方向
	UPROPERTY(EditAnywhere, Category = "Target Point")
	ESimpleTargetDirection TargetPointDirection = ESimpleTargetDirection::Left;
	// 目标点与目标之间距离
	UPROPERTY(EditAnywhere, Category = "Target Point")
	float TargetPointDistance = 100.f;
};
