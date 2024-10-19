#include "Hit/Impulse/SimpleSkeletalMeshHitObject.h"
#include "SimpleComboType.h"

FSimpleSkeletalMeshHitObject::FSimpleSkeletalMeshHitObject()
	:State(EItemObjectState::DRAG_FREE)
{
	Impulse = 1000.f;
}

void FSimpleSkeletalMeshHitObject::Tick(float DeltaTime)
{
	Timer.Tick(DeltaTime);
}

void FSimpleSkeletalMeshHitObject::Init(
	USkeletalMeshComponent* InMeshComponent,
	float InTime, 
	const FName& InBoneName, 
	float InImpulse,
	const FVector& InImpactNormal,
	const TArray<FName>& InExcludeBoneName)
{
	if (InMeshComponent && InTime > 0.03f)
	{
		if (!InExcludeBoneName.Contains(InBoneName))
		{
			MeshComponent = InMeshComponent;
			BoneName = InBoneName;
			ImpactNormal = InImpactNormal;
			ExcludeBoneName = InExcludeBoneName;
			Impulse = InImpulse;

			FSimpleTimerDelegate Delegate;
			Delegate.StartDelegate.BindRaw(this, &FSimpleSkeletalMeshHitObject::Start);
			Delegate.OnGoingDelegate.BindRaw(this, &FSimpleSkeletalMeshHitObject::OnGoing);
			Delegate.EndDelegate.BindRaw(this, &FSimpleSkeletalMeshHitObject::End);

			Timer.SubmitCommand(InMeshComponent->GetWorld(), InTime, Delegate);
		}	
	}
}

bool FSimpleSkeletalMeshHitObject::IsFree() const
{
	return State == EItemObjectState::DRAG_FREE;
}

void FSimpleSkeletalMeshHitObject::Start()
{
	if (MeshComponent.IsValid())
	{
		MeshComponent->SetBodySimulatePhysics(BoneName,true);
		
		MeshComponent->SetAllBodiesBelowSimulatePhysics(BoneName, true);
		MeshComponent->SetAllBodiesBelowPhysicsBlendWeight(BoneName, 1.0f);

		//MeshComponent->SetAllBodiesBelowLinearVelocity(BoneName, (ImpactNormal * -1.f) * Impulse);

		MeshComponent->AddImpulseToAllBodiesBelow((ImpactNormal * -1.f) * Impulse, BoneName);

		State = EItemObjectState::DRAG_BUSY;
	}
}

void FSimpleSkeletalMeshHitObject::OnGoing(float InRatio, float DeltaTime)
{
	if (MeshComponent.IsValid())
	{
		MeshComponent->SetAllBodiesBelowPhysicsBlendWeight(BoneName, FMath::Clamp(1.f - InRatio, 0.f, 1.f));
	}
}

void FSimpleSkeletalMeshHitObject::End()
{
	if (MeshComponent.IsValid())
	{
		MeshComponent->SetBodySimulatePhysics(BoneName, false);
		MeshComponent->SetAllBodiesBelowSimulatePhysics(BoneName, false);
		MeshComponent->SetAllBodiesBelowPhysicsBlendWeight(BoneName, 0.0f);
	}

	State = EItemObjectState::DRAG_FREE;
}
