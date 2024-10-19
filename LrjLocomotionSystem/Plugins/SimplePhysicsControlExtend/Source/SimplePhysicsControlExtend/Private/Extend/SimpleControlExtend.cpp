#include "Extend/SimpleControlExtend.h"
#include "PhysicsControlComponent.h"

FSimpleControlExtend::FSimpleControlExtend()
{
	bUserWorldContorl = true;
}

void FSimpleControlExtend::Init(UPhysicsControlComponent* InComponent, USkeletalMeshComponent* InMesh)
{
	Super::Init(InComponent,InMesh);

	if (PhysicsControlComponent.IsValid())
	{
		if (bUserWorldContorl)
		{
			PhysicsControlComponent->SetControlsInSetEnabled(TEXT("WorldSpace"), true);
			PhysicsControlComponent->SetControlsInSetEnabled(TEXT("ParentSpace"), false);
			PhysicsControlComponent->SetBodyModifiersInSetGravityMultiplier(TEXT("All"), 0.f);
			PhysicsControlComponent->SetBodyModifiersInSetMovementType(TEXT("Feet"), EPhysicsMovementType::Kinematic);

		}
		else
		{
			PhysicsControlComponent->SetControlsInSetEnabled(TEXT("WorldSpace"), false);
			PhysicsControlComponent->SetControlsInSetEnabled(TEXT("ParentSpace"), true);
			PhysicsControlComponent->SetBodyModifiersInSetGravityMultiplier(TEXT("All"), 1.0f);
			PhysicsControlComponent->SetBodyModifiersInSetMovementType(TEXT("Feet"), EPhysicsMovementType::Simulated);
		}
	}
}

void FSimpleControlExtend::InitPhysicsControlConfig(FName InMeshName, AActor* InCharacterActor)
{
	Super::InitPhysicsControlConfig(InMeshName, InCharacterActor);

}

void FSimpleControlExtend::SetBodyModifierGravityMultiplier(FName BodyName, float InValue)
{
	if (PhysicsControlComponent.IsValid())
	{
		PhysicsControlComponent->SetBodyModifierGravityMultiplier(BodyName, InValue);
	}
}
