// Fill out your copyright notice in the Description page of Project Settings.

#include "BehaviorTree/BTTask/BTTask_ActivateGameplayAbility.h"
#include "AIController/SAIBTController.h"
#include "Interface/SAIBTCharacterInterface.h"
#include "SimpleAIBehaviorTreeExtendLog.h"
#include "AbilitySystemComponent.h"

#define GET_AICHARACTER_GAMEPLAYABILITYCOMPONENT() \
ASAIBTController* AIControllerPtr = Cast<ASAIBTController>(OwnerComp.GetAIOwner()); \
if (AIControllerPtr == nullptr) \
{ \
	UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("AI Controller is invalid!")); \
	return EBTNodeResult::Failed; \
} \
ISAIBTCharacterInterface* AICharacterPtr = Cast<ISAIBTCharacterInterface>(AIControllerPtr->GetPawn()); \
if (AICharacterPtr == nullptr) \
{	\
	UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("AI Character is invalid!")); \
	return EBTNodeResult::Failed; \
} \
UAbilitySystemComponent* ASCPtr = AIControllerPtr->GetPawn()->FindComponentByClass<UAbilitySystemComponent>(); \
if (ASCPtr == nullptr) \
{	\
	UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("Ability System Component is invalid!")); \
	return EBTNodeResult::Failed; \
}

UBTTask_ActivateGameplayAbility::UBTTask_ActivateGameplayAbility()
{
	// 由于GA的OnGameplayAbilityEnded事件无参数，无法获取到NodeMemory，因此只能实例化
	bCreateNodeInstance = true;
	NodeName = "Activate Gameplay Ability";
}

EBTNodeResult::Type UBTTask_ActivateGameplayAbility::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	GET_AICHARACTER_GAMEPLAYABILITYCOMPONENT();

	// Task默认只支持第一个与Tag匹配的技能
	TArray<FGameplayAbilitySpec*> AbilitiesToActivate;
	ASCPtr->GetActivatableGameplayAbilitySpecsByAllMatchingTags(SkillTag, AbilitiesToActivate);

	if (AbilitiesToActivate.Num() <= 0)
	{
		UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("None GA matches Skill Tag"));
		return EBTNodeResult::Failed;
	}

	if (ASCPtr->TryActivateAbility(AbilitiesToActivate[0]->Handle))
	{
		//通知 已经激活GA
		AICharacterPtr->SAIBT_ActivateGameplayAbilityByGameplayTag(SkillTag.First());

		ActivatingSpec = AbilitiesToActivate[0];

		// 根据Spec与Ability CDO获取此次技能执行的GA Instance
		switch (ActivatingSpec->Ability->GetInstancingPolicy())
		{
		case EGameplayAbilityInstancingPolicy::InstancedPerActor:
		{
			UGameplayAbility* PrimaryAbility = ActivatingSpec->GetPrimaryInstance();
			if (PrimaryAbility)
			{
				PrimaryAbility->OnGameplayAbilityEnded.AddUObject(this, &UBTTask_ActivateGameplayAbility::OnAbilityEnded);
				ActivatingAbility = PrimaryAbility;
			}
			else
			{
				UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("Cannot get InstancedPerActor GA Instance!"));
				return EBTNodeResult::Failed;
			}
			break;
		}
		case EGameplayAbilityInstancingPolicy::InstancedPerExecution:
		{
			if (ActivatingSpec->Ability->GetReplicationPolicy() == EGameplayAbilityReplicationPolicy::ReplicateYes)
			{
				if (ActivatingSpec->ReplicatedInstances.Num() > 0)
				{
					UGameplayAbility* CurActivateAbility = ActivatingSpec->ReplicatedInstances[ActivatingSpec->ReplicatedInstances.Num() - 1];
					if (CurActivateAbility)
					{
						CurActivateAbility->OnGameplayAbilityEnded.AddUObject(this, &UBTTask_ActivateGameplayAbility::OnAbilityEnded);
						ActivatingAbility = CurActivateAbility;
					}
					else
					{
						UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("Cannot get InstancedPerExecution ReplicateYes GA Instance!"));
						return EBTNodeResult::Failed;
					}
				}
				else
				{
					UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("Cannot get InstancedPerExecution ReplicateYes GA Instance!"));
					return EBTNodeResult::Failed;
				}
			}
			else
			{
				if (ActivatingSpec->NonReplicatedInstances.Num() > 0)
				{
					UGameplayAbility* CurActivateAbility = ActivatingSpec->NonReplicatedInstances[ActivatingSpec->NonReplicatedInstances.Num() - 1];
					if (CurActivateAbility)
					{
						CurActivateAbility->OnGameplayAbilityEnded.AddUObject(this, &UBTTask_ActivateGameplayAbility::OnAbilityEnded);
						ActivatingAbility = CurActivateAbility;
					}
					else
					{
						UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("Cannot get InstancedPerExecution ReplicateNo GA Instance!"));
						return EBTNodeResult::Failed;
					}
				}
				else
				{
					UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("Cannot get InstancedPerExecution ReplicateNo GA Instance!"));
					return EBTNodeResult::Failed;
				}
			}
			break;
		}
		case EGameplayAbilityInstancingPolicy::NonInstanced:
		{
			// 技能通过CDO执行
			ActivatingAbility = ActivatingSpec->Ability;
			ActivatingAbility->OnGameplayAbilityEnded.AddUObject(this, &UBTTask_ActivateGameplayAbility::OnAbilityEnded);
			break;
		}
		}
		BTComponent = &OwnerComp;
		return EBTNodeResult::InProgress;
	}
	else
	{
		UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("Try Activate GA Failed"));
		return EBTNodeResult::Failed;
	}
}

EBTNodeResult::Type UBTTask_ActivateGameplayAbility::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	GET_AICHARACTER_GAMEPLAYABILITYCOMPONENT();
	if (ActivatingSpec)
	{
		ASCPtr->CancelAbilityHandle(ActivatingSpec->Handle);
	}
	return EBTNodeResult::Failed;
}

void UBTTask_ActivateGameplayAbility::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	ActivatingSpec = nullptr;
	ActivatingAbility = nullptr;
	BTComponent = nullptr;
}

FString UBTTask_ActivateGameplayAbility::GetStaticDescription() const
{
	return "Skill Tag: " + SkillTag.ToString() + '\n' + Super::GetStaticDescription();
}

void UBTTask_ActivateGameplayAbility::OnAbilityEnded(UGameplayAbility* EndedAbility)
{
	if (EndedAbility && ActivatingAbility == EndedAbility && BTComponent)
	{
		FinishLatentTask(*BTComponent, EBTNodeResult::Succeeded);
	}
}