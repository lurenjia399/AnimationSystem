//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTService/Core/BTService_Base.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Float.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Vector.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Bool.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Int.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController/SAIBTController.h"
#include "Interface/SAIBTCharacterInterface.h"

UBTService_Base::UBTService_Base()
{
	SearchScope = 1024.f;
}

void UBTService_Base::TickNode(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);

	if (BlackBoardKey_Target.SelectedKeyType == UBlackboardKeyType_Object::StaticClass() &&
		BlackBoardKey_Distance.SelectedKeyType == UBlackboardKeyType_Float::StaticClass() &&
		BlackBoardKey_Location.SelectedKeyType == UBlackboardKeyType_Vector::StaticClass() &&
		BlackBoardKey_Death.SelectedKeyType == UBlackboardKeyType_Bool::StaticClass() && 
		BlackBoardKey_Hit.SelectedKeyType == UBlackboardKeyType_Bool::StaticClass() && 
		BlackBoardKey_State.SelectedKeyType == UBlackboardKeyType_Int::StaticClass() &&
		BlackBoardKey_bStiff.SelectedKeyType == UBlackboardKeyType_Bool::StaticClass() &&
		BlackBoardKey_bExecution.SelectedKeyType == UBlackboardKeyType_Bool::StaticClass() && 
		BlackBoardKey_StopMovement.SelectedKeyType == UBlackboardKeyType_Bool::StaticClass())
	{
		if (ASAIBTController* OwnerController = Cast<ASAIBTController>(OwnerComp.GetOwner()))
		{
			if (ISAIBTCharacterInterface* OwnerCharacter = Cast<ISAIBTCharacterInterface>(OwnerController->GetPawn()))
			{
				if (UBlackboardComponent* MyBlackBoard = OwnerComp.GetBlackboardComponent())
				{
					MyBlackBoard->SetValueAsBool(BlackBoardKey_Hit.SelectedKeyName, OwnerCharacter->IsHit());
					MyBlackBoard->SetValueAsBool(BlackBoardKey_bStiff.SelectedKeyName, OwnerCharacter->IsStiff());
					MyBlackBoard->SetValueAsBool(BlackBoardKey_bExecution.SelectedKeyName, OwnerCharacter->IsExecution());
					MyBlackBoard->SetValueAsInt(BlackBoardKey_State.SelectedKeyName, OwnerCharacter->GetSAIBState());
					MyBlackBoard->SetValueAsBool(BlackBoardKey_StopMovement.SelectedKeyName, OwnerCharacter->IsStopMovement());

					MyBlackBoard->SetValueAsBool(BlackBoardKey_Death.SelectedKeyName, OwnerCharacter->IsDie());
					if (OwnerCharacter->IsDie()) //判断自己死亡
					{
						//MyBlackBoard->SetValueAsBool(BlackBoardKey_Turn.SelectedKeyName,false);
						OwnerCharacter->SAIBT_SetNewTarget(nullptr);

						MyBlackBoard->SetValueAsFloat(BlackBoardKey_Distance.SelectedKeyName, 9999999.f);
						MyBlackBoard->SetValueAsVector(BlackBoardKey_Location.SelectedKeyName, OwnerController->GetPawn()->GetActorLocation());
						return;
					}

					//记录角色是否正在旋转
					//MyBlackBoard->SetValueAsBool(BlackBoardKey_Turn.SelectedKeyName, OwnerCharacter->IsSAIBT_Turn());

					AActor* InActorTaget = Cast<AActor>(MyBlackBoard->GetValueAsObject(BlackBoardKey_Target.SelectedKeyName));
					
					ISAIBTCharacterInterface* InTarget = Cast<ISAIBTCharacterInterface>(InActorTaget);
					if (InTarget && !InTarget->IsDie())//判断目标是否死亡 如果目标死亡
					{
						//距离判断
						float Distance = FVector::Dist(InActorTaget->GetActorLocation(), OwnerController->GetPawn()->GetActorLocation());

						//回家的效果
						if (Distance <= SearchScope)
						{
							MyBlackBoard->SetValueAsFloat(BlackBoardKey_Distance.SelectedKeyName, Distance);
							MyBlackBoard->SetValueAsVector(BlackBoardKey_Location.SelectedKeyName, InActorTaget->GetActorLocation());
						}
						else
						{
							MyBlackBoard->SetValueAsObject(BlackBoardKey_Target.SelectedKeyName, NULL);
						}
					}
					else
					{
						InActorTaget = OwnerController->FindTarget(SearchScope);
						if (InActorTaget)
						{
							float Distance = FVector::Dist(InActorTaget->GetActorLocation(), OwnerController->GetPawn()->GetActorLocation());
							MyBlackBoard->SetValueAsFloat(BlackBoardKey_Distance.SelectedKeyName, Distance);						
						}
						else
						{
							MyBlackBoard->SetValueAsFloat(BlackBoardKey_Distance.SelectedKeyName, 9999999.f);
							MyBlackBoard->SetValueAsVector(BlackBoardKey_Location.SelectedKeyName, OwnerController->GetPawn()->GetActorLocation());
						}

						MyBlackBoard->SetValueAsObject(BlackBoardKey_Target.SelectedKeyName, InActorTaget);
					}

					OwnerCharacter->SAIBT_SetNewTarget(InActorTaget);
				}
			}
		}
	}
}

void UBTService_Base::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	if (UBlackboardData* BBAsset = GetBlackboardAsset())
	{
		BlackBoardKey_Target.ResolveSelectedKey(*BBAsset);
		BlackBoardKey_Distance.ResolveSelectedKey(*BBAsset);
		BlackBoardKey_Location.ResolveSelectedKey(*BBAsset);
		BlackBoardKey_Death.ResolveSelectedKey(*BBAsset);
		BlackBoardKey_Hit.ResolveSelectedKey(*BBAsset);
		BlackBoardKey_State.ResolveSelectedKey(*BBAsset);
		BlackBoardKey_bStiff.ResolveSelectedKey(*BBAsset);
		BlackBoardKey_bExecution.ResolveSelectedKey(*BBAsset);
		BlackBoardKey_StopMovement.ResolveSelectedKey(*BBAsset);
	}
}
