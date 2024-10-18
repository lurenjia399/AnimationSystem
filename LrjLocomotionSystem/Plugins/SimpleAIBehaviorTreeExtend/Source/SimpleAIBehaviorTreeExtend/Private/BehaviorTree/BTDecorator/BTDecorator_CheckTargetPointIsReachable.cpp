//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTDecorator/BTDecorator_CheckTargetPointIsReachable.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "GameFramework/Character.h"
#include "GameFramework/PawnMovementComponent.h"
#include "BehaviorTree/BehaviorTree.h"
#include "NavigationSystem.h"

UBTDecorator_CheckTargetPointIsReachable::UBTDecorator_CheckTargetPointIsReachable()
{
	NodeName = "Check Point Is Reachable";
	bAllowAbortChildNodes = false;
	bAllowAbortLowerPri = false;
}

bool UBTDecorator_CheckTargetPointIsReachable::CalculateRawConditionValue(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) const
{
	if (UBlackboardComponent* BBCompPtr = OwnerComp.GetBlackboardComponent())
	{
		ACharacter* CharacterPtr = Cast<ACharacter>(BBCompPtr->GetValue<UBlackboardKeyType_Object>(CheckTarget.GetSelectedKeyID()));
		if (CharacterPtr && CharacterPtr->GetMovementComponent())
		{
			UWorld* WorldPtr = CharacterPtr->GetWorld();
			if (WorldPtr == nullptr)
			{
				return false;
			}

			FVector CharacterFeetLocation = CharacterPtr->GetMovementComponent()->GetActorFeetLocation();
			FVector DirectionVector = FVector::ZeroVector;
			switch (TargetPointDirection)
			{
			case ESimpleTargetDirection::Left:
				DirectionVector = -CharacterPtr->GetActorRightVector();
				break;
			case ESimpleTargetDirection::Right:
				DirectionVector = CharacterPtr->GetActorRightVector();
				break;
			case ESimpleTargetDirection::Forward:
				DirectionVector = CharacterPtr->GetActorForwardVector();
				break;
			case ESimpleTargetDirection::Backward:
				DirectionVector = -CharacterPtr->GetActorForwardVector();
				break;
			default:
				break;
			}

			if (DirectionVector == FVector::ZeroVector)
			{
				return false;
			}

			// 检测是否有墙体
			FHitResult HitResult;
			FCollisionQueryParams CollisionQueryParams;
			CollisionQueryParams.AddIgnoredActor(CharacterPtr);
			if (WorldPtr->LineTraceSingleByChannel(HitResult, CharacterPtr->GetActorLocation(), CharacterPtr->GetActorLocation() + DirectionVector * TargetPointDistance, ECC_WorldStatic, CollisionQueryParams))
			{
				return false;
			}

			// 检测点是否在寻路范围内
			UNavigationSystemV1* NavSys = Cast<UNavigationSystemV1>(WorldPtr->GetNavigationSystem());
			if (NavSys == nullptr)
			{
				return false;
			}

			FNavLocation NavLocation;
			// 以角色足部上方10cm位置为基准
			return NavSys->ProjectPointToNavigation(CharacterFeetLocation + FVector(0.f, 0.f, 10.f) + DirectionVector * TargetPointDistance, NavLocation);
		}
	}

	return false;
}

void UBTDecorator_CheckTargetPointIsReachable::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	if (UBlackboardData* BBAsset = Asset.GetBlackboardAsset())
	{
		CheckTarget.AddObjectFilter(this, GET_MEMBER_NAME_CHECKED(UBTDecorator_CheckTargetPointIsReachable, CheckTarget), AActor::StaticClass());
		CheckTarget.ResolveSelectedKey(*BBAsset);
	}
}

FString UBTDecorator_CheckTargetPointIsReachable::GetStaticDescription() const
{
	return FString::Printf(TEXT("CheckTarget: %s\nTargetPointDirection: %s\nTargetPointDistance: %f\n"), *CheckTarget.SelectedKeyName.ToString(), 
		*StaticEnum<ESimpleTargetDirection>()->GetNameStringByValue((int64)TargetPointDirection), TargetPointDistance) + Super::GetStaticDescription();
}