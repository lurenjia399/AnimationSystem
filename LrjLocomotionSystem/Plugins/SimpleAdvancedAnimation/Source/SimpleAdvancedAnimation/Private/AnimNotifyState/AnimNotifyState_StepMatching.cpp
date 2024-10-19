#include "AnimNotifyState/AnimNotifyState_StepMatching.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Interface/ISimpleAdvancedAnimation.h"
#include "Kismet/KismetSystemLibrary.h"

#if PLATFORM_WINDOWS
#pragma optimize("",off) 
#endif

UAnimNotifyState_StepMatching::UAnimNotifyState_StepMatching()
{
	bDebug = false;

	ObjectTypeQuery.Add(EObjectTypeQuery::ObjectTypeQuery1);
	ObjectTypeQuery.Add(EObjectTypeQuery::ObjectTypeQuery2);
}

void UAnimNotifyState_StepMatching::NotifyBegin(
	USkeletalMeshComponent* MeshComp,
	UAnimSequenceBase* Animation, 
	float TotalDuration, 
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyBegin(MeshComp, Animation, TotalDuration, EventReference);

	if (MeshComp->GetOuter() &&
		MeshComp->GetOuter()->GetWorld())
	{
		if (AActor* InCharacter = Cast<AActor>(MeshComp->GetOuter()))
		{
			FVector BoneLocation = MeshComp->GetBoneLocation(BoneName);
			FVector EndLocation = BoneLocation + -InCharacter->GetActorUpVector() * 500.f;

			EDrawDebugTrace::Type DrawDebugType = EDrawDebugTrace::None;
			if (bDebug)
			{
				DrawDebugType = EDrawDebugTrace::ForDuration;

				DrawDebugSphere(InCharacter->GetWorld(), BoneLocation, 5.f, 10.f, FColor::Yellow, false, 10.f);

				DrawDebugSphere(InCharacter->GetWorld(), EndLocation, 5.f, 10.f, FColor::Red, false, 10.f);
			
				//记录初始化位置
				DrawDebugLine(InCharacter->GetWorld(), BoneLocation, EndLocation, FColor::Green, false, 10.f);
			}

			TArray<AActor*>ActorsToIgnore;
			ActorsToIgnore.Add(InCharacter);

			FHitResult HitResult;
			//if (UKismetSystemLibrary::LineTraceSingleForObjects(
			//	InCharacter->GetWorld(),
			//	BoneLocation,
			//	EndLocation,
			//	ObjectTypeQuery,
			//	false,
			//	ActorsToIgnore,
			//	DrawDebugType,
			//	HitResult,
			//	true))
			if (ISimpleAdvancedAnimation* InSimpleAdvancedAnimation = Cast<ISimpleAdvancedAnimation>(MeshComp->GetAnimInstance()))
			{
				//如果有偏移可以在这里添加
				HitResult.Location += BoneLocation + Offset;
				InSimpleAdvancedAnimation->UpdateFixedValue(Index, HitResult);

				if (bDebug)
				{
					DrawDebugType = EDrawDebugTrace::ForDuration;

					DrawDebugSphere(InCharacter->GetWorld(), HitResult.Location, 10.f, 10.f, FColor::Blue, false, 10.f);
				}
			}
		}
	}
}

void UAnimNotifyState_StepMatching::NotifyTick(
	USkeletalMeshComponent* MeshComp,
	UAnimSequenceBase* Animation,
	float FrameDeltaTime, 
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyTick(MeshComp, Animation, FrameDeltaTime, EventReference);
}

void UAnimNotifyState_StepMatching::NotifyEnd(
	USkeletalMeshComponent* MeshComp,
	UAnimSequenceBase* Animation, 
	const FAnimNotifyEventReference& EventReference)
{
	Super::NotifyEnd(MeshComp, Animation, EventReference);

	if (ISimpleAdvancedAnimation* InSimpleAdvancedAnimation = Cast<ISimpleAdvancedAnimation>(MeshComp->GetAnimInstance()))
	{
		InSimpleAdvancedAnimation->EndFixedValue(Index);
	}
}

#if PLATFORM_WINDOWS
#pragma optimize("",on) 
#endif