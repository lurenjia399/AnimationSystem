#include "Core/SimplePhysicsControlBindHumanBase.h"
#include "PhysicsControlComponent.h"

#if PLATFORM_WINDOWS
#pragma optimize("",off) 
#endif

FSimplePhysicsControlBindHumanBase::FSimplePhysicsControlBindHumanBase()
{
}

void FSimplePhysicsControlBindHumanBase::Init(UPhysicsControlComponent* InComponent, USkeletalMeshComponent* InMesh)
{
	if (InComponent)
	{
		PhysicsControlComponent = InComponent;
		Mesh = InMesh;

		FPhysicsControlNames AllWorldSpaceControls;
		TMap<FName, FPhysicsControlNames> LimbWorldSpaceControls;
		FPhysicsControlNames AllParentSpaceControls;
		TMap<FName, FPhysicsControlNames> LimbParentSpaceControls;
		TMap<FName, FPhysicsControlNames> LimbBodyModifiers;
		FPhysicsControlNames AllBodyModifiers;

		PhysicsControlComponent->CreateControlsAndBodyModifiersFromLimbBones(
			AllWorldSpaceControls, LimbWorldSpaceControls,
			AllParentSpaceControls, LimbParentSpaceControls,
			AllBodyModifiers, LimbBodyModifiers,
			InMesh,
			InitialCharacterControls.LimbSetupData,
			InitialCharacterControls.WorldSpaceControlData,
			InitialCharacterControls.ParentSpaceControlData,
			InitialCharacterControls.BodyModifierData
		);

		InMesh->SetConstraintProfileForAll(InitialConstraintProfile);

		SetBodyModifierForFeet();
		SetBodyModifierForHands();
		CreateSetParentSpaceControlsArm();
		CreateSetWorldSpaceControlsUpperBody();
		FootWorldSpaceControl();
	}
}

void FSimplePhysicsControlBindHumanBase::SetCollisionEnabled(bool bEnabled)
{
	if (Mesh.IsValid())
	{
		if (bEnabled)
		{
			Mesh->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}
		else
		{
			Mesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}

void FSimplePhysicsControlBindHumanBase::SetBodyModifierForFeet()
{
	if (PhysicsControlComponent.IsValid())
	{
		FPhysicsControlNames ControlNames;
		PhysicsControlComponent->AddBodyModifierToSet(ControlNames, TEXT("foot_l"), TEXT("Feet"));
		PhysicsControlComponent->AddBodyModifierToSet(ControlNames, TEXT("foot_r"), TEXT("Feet"));
	}
}

void FSimplePhysicsControlBindHumanBase::SetBodyModifierForHands()
{
	if (PhysicsControlComponent.IsValid())
	{
		FPhysicsControlNames ControlNames;
		PhysicsControlComponent->AddBodyModifierToSet(ControlNames, TEXT("hand_l"), TEXT("Hands"));
		PhysicsControlComponent->AddBodyModifierToSet(ControlNames, TEXT("hand_r"), TEXT("Hands"));
	}
}

void FSimplePhysicsControlBindHumanBase::CreateSetParentSpaceControlsArm()
{
	if (PhysicsControlComponent.IsValid())
	{
		FPhysicsControlNames ControlNames;

		TArray<FName> Names = PhysicsControlComponent->GetControlNamesInSet(TEXT("ParentSpace_ArmLeft"));
		PhysicsControlComponent->AddControlsToSet(ControlNames, Names, TEXT("ParentSpace_Arms"));

		Names = PhysicsControlComponent->GetControlNamesInSet(TEXT("ParentSpace_ArmRight"));
		PhysicsControlComponent->AddControlsToSet(ControlNames, Names, TEXT("ParentSpace_Arms"));
	}
}

void FSimplePhysicsControlBindHumanBase::CreateSetWorldSpaceControlsUpperBody()
{
	if (PhysicsControlComponent.IsValid())
	{
		FPhysicsControlNames ControlNames;

		TArray<FName> Names = PhysicsControlComponent->GetControlNamesInSet(TEXT("WorldSpace_Spine"));
		PhysicsControlComponent->AddControlsToSet(ControlNames, Names, TEXT("WorldSpace_UpperBody"));

		Names = PhysicsControlComponent->GetControlNamesInSet(TEXT("WorldSpace_Head"));
		PhysicsControlComponent->AddControlsToSet(ControlNames, Names, TEXT("WorldSpace_UpperBody"));

		Names = PhysicsControlComponent->GetControlNamesInSet(TEXT("WorldSpace_ArmLeft"));
		PhysicsControlComponent->AddControlsToSet(ControlNames, Names, TEXT("WorldSpace_UpperBody"));

		Names = PhysicsControlComponent->GetControlNamesInSet(TEXT("WorldSpace_ArmRight"));
		PhysicsControlComponent->AddControlsToSet(ControlNames, Names, TEXT("WorldSpace_UpperBody"));
	}
}

void FSimplePhysicsControlBindHumanBase::FootWorldSpaceControl()
{
	if (PhysicsControlComponent.IsValid())
	{
		FPhysicsControlNames ControlNames;
		PhysicsControlComponent->AddControlToSet(ControlNames, TEXT("foot_l"), TEXT("WorldSpace_Feet"));
		PhysicsControlComponent->AddControlToSet(ControlNames, TEXT("foot_r"), TEXT("WorldSpace_Feet"));
	}
}

void FSimplePhysicsControlBindHumanBase::SetLimbGravityMultiplier(FName LimbName, float GravityMultiplier)
{
	if (PhysicsControlComponent.IsValid())
	{
		PhysicsControlComponent->SetBodyModifiersInSetGravityMultiplier(LimbName, GravityMultiplier);
	}
}

void FSimplePhysicsControlBindHumanBase::SetLimbWorldSpaceControlParams(FName LimbName, FPhysicsControlData& InData)
{
	if (PhysicsControlComponent.IsValid())
	{
		PhysicsControlComponent->SetControlDatasInSet(*(FString(TEXT("WorldSpace_")) + LimbName.ToString()), InData);
	}
}

void FSimplePhysicsControlBindHumanBase::SetLimbParentSpaceControlParams(FName LimbName, FPhysicsControlData& InData)
{
	if (PhysicsControlComponent.IsValid())
	{
		PhysicsControlComponent->SetControlDatasInSet(*(FString(TEXT("ParentSpace_")) + LimbName.ToString()), InData);
	}
}

void FSimplePhysicsControlBindHumanBase::SetConstraintProfileOfBranch(FName JointName, FName ProfileName)
{
	if (Mesh.IsValid())
	{
		TArray<FName> SocketNames = Mesh->GetAllSocketNames();
		for (auto& Tmp : SocketNames)
		{
			if (Mesh->BoneIsChildOf(JointName, Tmp))
			{
				Mesh->SetConstraintProfile(Tmp, ProfileName);
			}
		}
	}
}

void FSimplePhysicsControlBindHumanBase::InitPhysicsControlConfig(FName InMeshName,AActor *InCharacterActor)
{
	InitialCharacterControls.SkeletalMeshComponentName = InMeshName;
	InitialCharacterControls.CharacterActor = InCharacterActor;

	//限制
	{
		FPhysicsControlLimbSetupData& LimbData = InitialCharacterControls.LimbSetupData.AddDefaulted_GetRef();
		LimbData.LimbName = TEXT("Head");
		LimbData.StartBone = TEXT("neck_01");
	}

	{
		FPhysicsControlLimbSetupData& LimbData = InitialCharacterControls.LimbSetupData.AddDefaulted_GetRef();
		LimbData.LimbName = TEXT("ArmLeft");
		LimbData.StartBone = TEXT("clavicle_l");
	}

	{
		FPhysicsControlLimbSetupData& LimbData = InitialCharacterControls.LimbSetupData.AddDefaulted_GetRef();
		LimbData.LimbName = TEXT("ArmRight");
		LimbData.StartBone = TEXT("clavicle_r");
	}

	{
		FPhysicsControlLimbSetupData& LimbData = InitialCharacterControls.LimbSetupData.AddDefaulted_GetRef();
		LimbData.LimbName = TEXT("LegLeft");
		LimbData.StartBone = TEXT("thigh_l");
	}

	{
		FPhysicsControlLimbSetupData& LimbData = InitialCharacterControls.LimbSetupData.AddDefaulted_GetRef();
		LimbData.LimbName = TEXT("LegRight");
		LimbData.StartBone = TEXT("thigh_r");
	}

	{
		FPhysicsControlLimbSetupData& LimbData = InitialCharacterControls.LimbSetupData.AddDefaulted_GetRef();
		LimbData.LimbName = TEXT("Spine");
		LimbData.StartBone = TEXT("spine_02");
		LimbData.bIncludeParentBone = true;
	}

	InitialCharacterControls.WorldSpaceControlData.LinearStrength = 3.f;
	InitialCharacterControls.WorldSpaceControlData.AngularStrength = 3.f;
	InitialCharacterControls.WorldSpaceControlData.bEnabled = false;

	InitialCharacterControls.ParentSpaceControlData.AngularStrength = 10.f;
	InitialCharacterControls.ParentSpaceControlData.bEnabled = false;
}

USkeletalMeshComponent* FSimplePhysicsControlBindHumanBase::GetMesh() const
{
	return Mesh.Get();
}

UPhysicsControlComponent* FSimplePhysicsControlBindHumanBase::GetPhysicsControlComponent() const
{
	return PhysicsControlComponent.Get();
}

#if PLATFORM_WINDOWS
#pragma optimize("",on) 
#endif