//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTDecorator/BTDecorator_ExecuteRate.h"
#include "BehaviorTree/BlackboardComponent.h"

UBTDecorator_ExecuteRate::UBTDecorator_ExecuteRate()
{
	NodeName = "Execute Rate";
	// 不允许进行打断
	bAllowAbortChildNodes = false;
	bAllowAbortLowerPri = false;
}

bool UBTDecorator_ExecuteRate::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	return ExecuteRate > FMath::RandRange(0.f, 1.f);
}

FString UBTDecorator_ExecuteRate::GetStaticDescription() const
{
	return FString::Printf(TEXT("Execute Rate: %f\n"), ExecuteRate) + Super::GetStaticDescription();
}