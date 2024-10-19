//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "AnimNotify/AnimNotify_ControlDetach.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "PhysicsEngine/ConstraintInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Interface/ISimplePhysicsControlExtendInterface.h"
#include "Core/SimplePhysicsControlBindHumanBase.h"
#include "Core/SimplePhysicsControlCoreMethods.h"
#include "PhysicsControlComponent.h"

UAnimNotify_ControlDetach::UAnimNotify_ControlDetach()
{
	GrabControlData.LinearStrength = 40.f;
	GrabControlData.AngularStrength = 30.f;
	GrabControlData.AngularDampingRatio = 1.f;
	GrabControlData.bEnabled = true;
	GrabControlData.LinearDampingRatio = 1.f;

	ControlName = TEXT("Name_Grab");
	ChildBoneName = TEXT("hand_l");

	bEndCloseCollision = true;
}

FString UAnimNotify_ControlDetach::GetNotifyName_Implementation() const
{
	return Super::GetNotifyName_Implementation();
}

void UAnimNotify_ControlDetach::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (ACharacter* InCharacter = Cast<ACharacter>(MeshComp->GetOuter()))
	{
		if (ISimplePhysicsControlExtendInterface* InPhysicsControlExtendInterface = Cast<ISimplePhysicsControlExtendInterface>(InCharacter))
		{
			TSharedPtr<FSimplePhysicsControlBindHumanBase> InBindHumanBase = InPhysicsControlExtendInterface->GetPhysicsControlBindHuman();
			if (InBindHumanBase)
			{
				//找到要附加的实例
				TArray<AActor*> AllActors;
				UGameplayStatics::GetAllActorsOfClass(InCharacter->GetWorld(), ActorClass, AllActors);

				for (auto& Tmp : AllActors)
				{
					if (UMeshComponent* InFindComponent = Cast<UMeshComponent>(SimplePhysicsControlCoreMethods::RecursiveSearchComponentsByTag(Tmp->GetRootComponent(), SubTag)))
					{
						if (UPhysicsControlComponent* InPhysicsControlComponent = InBindHumanBase->GetPhysicsControlComponent())
						{
							if (bEndCloseCollision)
							{
								InBindHumanBase->SetCollisionEnabled(false);
							}

							//删除已经有的
							InPhysicsControlComponent->DestroyControl(ControlName);
						}

						break;
					}
				}
			}
		}
	}
}