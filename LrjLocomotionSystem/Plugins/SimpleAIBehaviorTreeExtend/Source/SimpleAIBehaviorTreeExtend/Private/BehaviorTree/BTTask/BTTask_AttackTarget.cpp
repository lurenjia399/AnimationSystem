//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTTask/BTTask_AttackTarget.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "AIController/SAIBTController.h"
#include "Interface/SAIBTCharacterInterface.h"

UBTTask_AttackTarget::UBTTask_AttackTarget()
{
	ClearGASTime = 5.f;
}

EBTNodeResult::Type UBTTask_AttackTarget::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);

	BTComponent = &OwnerComp;

	if (UBlackboardComponent* MyBlackBoard = OwnerComp.GetBlackboardComponent())
	{
		if (ASAIBTController* AIConrollerBase = Cast<ASAIBTController>(OwnerComp.GetOwner()))
		{
			if (AActor *InTagetActor = Cast<AActor>(MyBlackBoard->GetValueAsObject(
				Blackboard_Actor.SelectedKeyName)))
			{
				if (!AIConrollerBase->IsAttack(AttackTag))
				{
					if (UGameplayAbility* PrimaryAbility = AIConrollerBase->Attack(InTagetActor, AttackTag))
					{
						ActivatingAbility = PrimaryAbility;

						PrimaryAbility->OnGameplayAbilityEnded.AddUObject(this, &UBTTask_AttackTarget::OnAbilityEnded);

						//Ϊ�˷�ֹGASû�м�ʱ����
						AIConrollerBase->GetWorld()->GetTimerManager().SetTimer(GASClearHandle,this,&UBTTask_AttackTarget::OnClearAbilitEnded,ClearGASTime);
					}
				}

				return EBTNodeResult::InProgress;
			}
		}
	}

	return EBTNodeResult::Failed;
}

void UBTTask_AttackTarget::InitializeFromAsset(UBehaviorTree& Asset)
{
	Super::InitializeFromAsset(Asset);

	if (UBlackboardData* BBAsset = GetBlackboardAsset())
	{
		Blackboard_Actor.ResolveSelectedKey(*BBAsset);
	}
}

void UBTTask_AttackTarget::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	ActivatingAbility = nullptr;
	BTComponent = nullptr;
}

void UBTTask_AttackTarget::OnAbilityEnded(UGameplayAbility* EndedAbility)
{
	if (IsValid(this))
	{
		if (BTComponent.IsValid())
		{
			if (EndedAbility)
			{
				if (ActivatingAbility == EndedAbility)
				{
					FinishLatentTask(*BTComponent.Get(), EBTNodeResult::Succeeded);

					return;
				}
			}

			FinishLatentTask(*BTComponent.Get(), EBTNodeResult::Failed);

			//��ɴ����ȶ�
			GetWorld()->GetTimerManager().ClearTimer(GASClearHandle);
		}
	}
}

void UBTTask_AttackTarget::OnClearAbilitEnded()
{
	GetWorld()->GetTimerManager().ClearTimer(GASClearHandle);

	if (BTComponent.IsValid())
	{
		FinishLatentTask(*BTComponent.Get(), EBTNodeResult::Failed);
	}
}