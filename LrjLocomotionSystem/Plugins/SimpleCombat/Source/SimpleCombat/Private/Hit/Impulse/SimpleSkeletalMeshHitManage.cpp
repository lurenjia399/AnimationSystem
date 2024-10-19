#include "Hit/Impulse/SimpleSkeletalMeshHitManage.h"

void FSimpleSkeletalMeshHitManage::Tick(float DeltaTime)
{
	for (auto& Tmp : HitObjects)
	{
		if (!Tmp.IsFree())
		{
			Tmp.Tick(DeltaTime);
		}	
	}
}

void FSimpleSkeletalMeshHitManage::SubmitCommand(
	USkeletalMeshComponent* InMeshComponent, 
	float InTime, 
	const FName& InBoneName,
	float InImpulse,
	const FVector& InImpactNormal, 
	const TArray<FName>& InExcludeBoneName)
{
	for (auto& Tmp : HitObjects)
	{
		if (Tmp.IsFree())
		{
			Tmp.Init(InMeshComponent, InTime, InBoneName, InImpulse, InImpactNormal, InExcludeBoneName);

			return;
		}
	}

	HitObjects.AddDefaulted_GetRef().Init(InMeshComponent, InTime, InBoneName, InImpulse,InImpactNormal,InExcludeBoneName);
}
