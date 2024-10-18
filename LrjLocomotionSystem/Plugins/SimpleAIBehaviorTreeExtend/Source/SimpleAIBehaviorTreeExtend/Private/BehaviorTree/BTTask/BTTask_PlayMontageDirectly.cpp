//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTTask/BTTask_PlayMontageDirectly.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SimpleAIBehaviorTreeExtendLog.h"

UBTTask_PlayMontageDirectly::UBTTask_PlayMontageDirectly()
{
	NodeName = "Play Montage Directly";
}

void UBTTask_PlayMontageDirectly::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	if (UBlackboardData* BBAsset = GetBlackboardAsset())
	{
		TargetLocation.AddVectorFilter(this, GET_MEMBER_NAME_CHECKED(UBTTask_PlayMontageDirectly, TargetLocation));
		TargetLocation.ResolveSelectedKey(*BBAsset);
	}
}

EBTNodeResult::Type UBTTask_PlayMontageDirectly::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	UBlackboardComponent* BBPtr = OwnerComp.GetBlackboardComponent();
	if (BBPtr == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	FVector SelectedLocation = BBPtr->GetValue<UBlackboardKeyType_Vector>(TargetLocation.GetSelectedKeyID());
	if (SelectedLocation == FVector::ZeroVector)
	{
		return EBTNodeResult::Failed;
	}

	// 计算角度
	AActor* SelfActor = Cast<AActor>(BBPtr->GetValueAsObject(TEXT("SelfActor")));
	if (SelfActor == nullptr)
	{
		return EBTNodeResult::Failed;
	}

	FVector TargetDirection = SelectedLocation - SelfActor->GetActorLocation();
	double DotValue = FVector2D::DotProduct(FVector2D(TargetDirection.X, TargetDirection.Y), FVector2D(SelfActor->GetActorForwardVector().X, SelfActor->GetActorForwardVector().Y));
	float DirectionDegrees = FMath::RadiansToDegrees(FMath::Acos(DotValue / TargetDirection.Size2D()));
	
	// 判断左右方向
	float CrossProductValue = FVector2D::CrossProduct(FVector2D(TargetDirection.X, TargetDirection.Y), FVector2D(SelfActor->GetActorForwardVector().X, SelfActor->GetActorForwardVector().Y));
	CrossProductValue = CrossProductValue >= 0.f ? 1.f : -1.f;
	DirectionDegrees *= CrossProductValue;

	UE_LOG(SimpleAIBehaviorTreeExtendLog, Log, TEXT("DireactionDegrees: %.2f"), DirectionDegrees);
	
	if (DirectionDegrees >= -30.f && DirectionDegrees < 30.f)
	{
		MontageSectionName = TEXT("Forward");
	}
	else if (DirectionDegrees >= 30.f && DirectionDegrees < 60.f)
	{
		MontageSectionName = TEXT("RightForward");
	}
	else if (DirectionDegrees >= 60.f && DirectionDegrees < 120.f)
	{
		MontageSectionName = TEXT("Right");
	}
	else if (DirectionDegrees >= 120.f && DirectionDegrees <= 150.f)
	{
		MontageSectionName = TEXT("RightBackward");
	}
	else if (DirectionDegrees >= 150.f && DirectionDegrees < 180.f || DirectionDegrees >= -180.f && DirectionDegrees < -150.f)
	{
		MontageSectionName = TEXT("Backward");
	}
	else if (DirectionDegrees >= -150.f && DirectionDegrees < -120.f)
	{
		MontageSectionName = TEXT("LeftBackward");
	}
	else if (DirectionDegrees >= -120.f && DirectionDegrees < -60.f)
	{
		MontageSectionName = TEXT("Left");
	}
	else if (DirectionDegrees >= -60.f && DirectionDegrees < -30.f)
	{
		MontageSectionName = TEXT("LeftForward");
	}

	UE_LOG(SimpleAIBehaviorTreeExtendLog, Log, TEXT("MontageSectionName: %s"), *MontageSectionName.ToString());
	return Super::ExecuteTask(OwnerComp, NodeMemory);
}

void UBTTask_PlayMontageDirectly::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	if (UBlackboardComponent* BBPtr = OwnerComp.GetBlackboardComponent())
	{
		BBPtr->SetValue<UBlackboardKeyType_Vector>(TargetLocation.GetSelectedKeyID(), FVector::ZeroVector);
	}
	Super::OnTaskFinished(OwnerComp, NodeMemory, TaskResult);
}

FString UBTTask_PlayMontageDirectly::GetStaticDescription() const
{
	return FString::Printf(TEXT("TargetLocation: %s\n"), *TargetLocation.SelectedKeyName.ToString()) + Super::GetStaticDescription();
}