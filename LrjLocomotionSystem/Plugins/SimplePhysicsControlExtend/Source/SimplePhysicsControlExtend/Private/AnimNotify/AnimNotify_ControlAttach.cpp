//Copyright (C) RenZhai.2022.All Rights Reserved.

#include "AnimNotify/AnimNotify_ControlAttach.h"
#include "Components/SkeletalMeshComponent.h"
#include "GameFramework/Character.h"
#include "PhysicsEngine/ConstraintInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Interface/ISimplePhysicsControlExtendInterface.h"
#include "Core/SimplePhysicsControlBindHumanBase.h"
#include "Core/SimplePhysicsControlCoreMethods.h"
#include "PhysicsControlComponent.h"

UAnimNotify_ControlAttach::UAnimNotify_ControlAttach()
{
	GrabControlData.LinearStrength = 40.f;
	GrabControlData.AngularStrength = 30.f;
	GrabControlData.AngularDampingRatio = 1.f;
	GrabControlData.bEnabled = true;
	GrabControlData.LinearDampingRatio = 1.f;

	ControlName = TEXT("Name_Grab");
	ChildBoneName = TEXT("hand_l");
}

FString UAnimNotify_ControlAttach::GetNotifyName_Implementation() const
{
	return Super::GetNotifyName_Implementation();
}

void UAnimNotify_ControlAttach::Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation,const FAnimNotifyEventReference& EventReference)
{
	Super::Notify(MeshComp, Animation, EventReference);

	if (ACharacter* InCharacter = Cast<ACharacter>(MeshComp->GetOuter()))
	{
		if (ISimplePhysicsControlExtendInterface *InPhysicsControlExtendInterface = Cast<ISimplePhysicsControlExtendInterface>(InCharacter))
		{
			TSharedPtr<FSimplePhysicsControlBindHumanBase> InBindHumanBase = InPhysicsControlExtendInterface->GetPhysicsControlBindHuman();
			if (InBindHumanBase)
			{
				//找到要附加的实例
				TArray<AActor*> AllActors;
				UGameplayStatics::GetAllActorsOfClass(InCharacter->GetWorld(), ActorClass, AllActors);

				for (auto &Tmp : AllActors)
				{
					if (UMeshComponent* InFindComponent = Cast<UMeshComponent>(SimplePhysicsControlCoreMethods::RecursiveSearchComponentsByTag(Tmp->GetRootComponent(), SubTag)))
					{
						if (UPhysicsControlComponent *InPhysicsControlComponent = InBindHumanBase->GetPhysicsControlComponent())
						{
							InBindHumanBase->SetCollisionEnabled(true);

							FPhysicsControlTarget ControlTarget;
							SimplePhysicsControlCoreMethods::MakeTarget(InFindComponent, ControlTarget);
				
							//删除已经有的
							InPhysicsControlComponent->DestroyControl(ControlName);

							//创建新的
							InPhysicsControlComponent->CreateNamedControl(
								ControlName,
								InFindComponent,
								NAME_None,
								InBindHumanBase->GetMesh(),
								ChildBoneName,
								GrabControlData,
								ControlTarget,
								NAME_None);

							InPhysicsControlComponent->SetBodyModifiersInSetMovementType(ControlName,EPhysicsMovementType::Kinematic);
						}

						break;
					}
				}
			}
		}
	}
}
