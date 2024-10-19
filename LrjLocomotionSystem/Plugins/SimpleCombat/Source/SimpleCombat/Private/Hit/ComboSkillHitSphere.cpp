//Copyright (C) RenZhai.2022.All Rights Reserved.
#include "Hit/ComboSkillHitSphere.h"
#include "Components/SphereComponent.h"
#include "Kismet/KismetSystemLibrary.h"

AHitSphereCollision::AHitSphereCollision(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	HitDamage = CreateDefaultSubobject<USphereComponent>(TEXT("HitDamage"));
	HitDamage->SetupAttachment(RootComponent);
}

UPrimitiveComponent* AHitSphereCollision::GetHitDamage()
{
	return HitDamage;
}

// Called when the game starts or when spawned
void AHitSphereCollision::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void AHitSphereCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHitSphereCollision::SetRadius(const float& InRadius)
{
	HitDamage->SetSphereRadius(InRadius);
}

void AHitSphereCollision::StartHandleDamage_Inner(
	UPrimitiveComponent* OverlappedComponent, 
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	FHitResult OutHitResult;

	if (!bFromSweep)
	{
		if (bEnableSweep)
		{
			if (!IsExitIgnoredActor(OtherActor))
			{
				OutHitResult = SweepResult;

				//¿ªÊ¼BoxÉäÏß¼ì²â
				const FVector StartTraceLocation = HitDamage->Bounds.GetSphere().Center;
				const FVector EndTraceLocation = StartTraceLocation;
				const float Radius = HitDamage->Bounds.SphereRadius;

				TArray<AActor*> ActorsToIgnore;
				GetIgnoreTraceActor(ActorsToIgnore);

				if (UKismetSystemLibrary::SphereTraceSingle(
					GetWorld(),
					StartTraceLocation,
					EndTraceLocation,
					Radius,
					TraceTypeQuery,
					false,
					ActorsToIgnore,
					(EDrawDebugTrace::Type)DrawDebugTrace, 
					OutHitResult, 
					true))
				{
					bFromSweep = true;
				}
			}
		}
	}

	Super::StartHandleDamage_Inner(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, bFromSweep ? OutHitResult : SweepResult);
}

FVector AHitSphereCollision::GetExtent() const
{
	if (HitDamage)
	{
		return FVector(HitDamage->GetScaledSphereRadius());
	}

	return Super::GetExtent();
}