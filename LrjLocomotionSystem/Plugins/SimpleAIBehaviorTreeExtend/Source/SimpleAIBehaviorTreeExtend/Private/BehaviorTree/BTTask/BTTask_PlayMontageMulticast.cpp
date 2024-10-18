//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "BehaviorTree/BTTask/BTTask_PlayMontageMulticast.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "SimpleAIBehaviorTreeExtendLog.h"
#include "Interface/SAIBTCharacterInterface.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType_Object.h"
#include "Animation/AnimMontage.h"
#include "AIController.h"
#include "Components/SkeletalMeshComponent.h"

UBTTask_PlayMontageMulticast::UBTTask_PlayMontageMulticast()
{
	NodeName = "Play Montage Multicast";
	bCreateNodeInstance = true;
	bNotifyTaskFinished = true;

	CharacterPtr = nullptr;
	AnimMontageAsset = nullptr;
}

EBTNodeResult::Type UBTTask_PlayMontageMulticast::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (AnimMontageAsset == nullptr)
	{
		UE_LOG(SimpleAIBehaviorTreeExtendLog, Error, TEXT("Montage Asset is null!"));
		return EBTNodeResult::Type::Failed;
	}

	AAIController* AIController = OwnerComp.GetAIOwner();
	if (AIController == nullptr)
	{
		return EBTNodeResult::Type::Failed;
	}

	if (ISAIBTCharacterInterface* InCharacterInterface = Cast<ISAIBTCharacterInterface>(AIController->GetPawn()))
	{
		CharacterPtr = Cast<ACharacter>(AIController->GetPawn());
		if (!CharacterPtr.IsValid())
		{
			return EBTNodeResult::Type::Failed;
		}
		if (!(CharacterPtr->GetMesh() && CharacterPtr->GetMesh()->GetAnimInstance()))
		{
			return EBTNodeResult::Type::Failed;
		}

		CharacterPtr->GetMesh()->GetAnimInstance()->OnMontageEnded.AddDynamic(this, &UBTTask_PlayMontageMulticast::OnMontageEnded);
		InCharacterInterface->SAIBT_MontagePlayOnMulticast(AnimMontageAsset, PlayRate, 0.f, true, MontageSectionName);

		BTCompPtr = &OwnerComp;

		return EBTNodeResult::Type::InProgress;
	}

	return EBTNodeResult::Type::Failed;
}

EBTNodeResult::Type UBTTask_PlayMontageMulticast::AbortTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	if (CharacterPtr.IsValid())
	{
		if (ISAIBTCharacterInterface *InCharacterInface = Cast<ISAIBTCharacterInterface>(CharacterPtr.Get()))
		{
			InCharacterInface->SAIBT_StopAnimMontageOnMulticast();
		}	
	}

	return EBTNodeResult::Type::Failed;
}

void UBTTask_PlayMontageMulticast::OnTaskFinished(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, EBTNodeResult::Type TaskResult)
{
	if (CharacterPtr.IsValid() &&
		CharacterPtr->GetMesh() && 
		CharacterPtr->GetMesh()->GetAnimInstance())
	{
		CharacterPtr->GetMesh()->GetAnimInstance()->OnMontageEnded.Remove(this, TEXT("OnMontageEnded"));
	}
}

FString UBTTask_PlayMontageMulticast::GetStaticDescription() const
{
	FString MontageName = AnimMontageAsset ? AnimMontageAsset->GetName() : "None";
	return FString::Printf(TEXT("AnimMontageAsset: %s\nPlayRate: %f\nMontageSectionName: %s"), *MontageName, PlayRate, *MontageSectionName.ToString());
}

void UBTTask_PlayMontageMulticast::OnMontageEnded(UAnimMontage* MontageAsset, bool bInterrupted)
{
	if (AnimMontageAsset == MontageAsset && BTCompPtr.IsValid())
	{
		bInterrupted ? FinishLatentTask(*BTCompPtr, EBTNodeResult::Failed) : FinishLatentTask(*BTCompPtr, EBTNodeResult::Succeeded);
	}
}