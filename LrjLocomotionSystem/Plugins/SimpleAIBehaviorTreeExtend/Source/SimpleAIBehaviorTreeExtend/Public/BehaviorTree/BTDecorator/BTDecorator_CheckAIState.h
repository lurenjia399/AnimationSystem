//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "SimpleAIBehaviorTreeExtendType.h"
#include "BTDecorator_CheckAIState.generated.h"

/**
 * 
 */
UCLASS()
class SIMPLEAIBEHAVIORTREEEXTEND_API UBTDecorator_CheckAIState : public UBTDecorator
{
	GENERATED_UCLASS_BODY()
	
protected:
	virtual void OnBecomeRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual void OnCeaseRelevant(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	virtual uint16 GetInstanceMemorySize() const override;
	virtual bool CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const override;
	virtual FString GetStaticDescription() const override;

protected:
	UFUNCTION()
	void OnAIStateChanged(const ASAIBTController* AIControllerPtr);

protected:
	UPROPERTY(EditAnywhere, Category = "AI State")
	ESAIBTState AIState = ESAIBTState::MS_Leisure;
};
