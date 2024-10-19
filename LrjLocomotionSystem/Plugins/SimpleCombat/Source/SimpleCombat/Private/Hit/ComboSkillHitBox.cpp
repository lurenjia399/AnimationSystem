//Copyright (C) RenZhai.2022.All Rights Reserved.
#include "Hit/ComboSkillHitBox.h"
#include "Components/BoxComponent.h"
#include "Kismet/KismetSystemLibrary.h"

AHitBoxCollision::AHitBoxCollision(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	HitDamage = CreateDefaultSubobject<UBoxComponent>(TEXT("HitDamage"));
	HitDamage->SetupAttachment(RootComponent);

	HitDamage->SetGenerateOverlapEvents(true);
	HitDamage->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Overlap);
}

UPrimitiveComponent* AHitBoxCollision::GetHitDamage()
{
	return HitDamage;
}

// Called when the game starts or when spawned
void AHitBoxCollision::BeginPlay()
{
	Super::BeginPlay();

}

FVector AHitBoxCollision::GetExtent() const
{
	if (HitDamage)
	{
		return HitDamage->GetScaledBoxExtent();
	}

	return Super::GetExtent();
}

// Called every frame
void AHitBoxCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AHitBoxCollision::SetBoxExtent(const FVector& InNewBoxExtent)
{
	HitDamage->SetBoxExtent(InNewBoxExtent);
}

void AHitBoxCollision::StartHandleDamage_Inner(
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

				if (AActor *InOwnerActor = HitDamage->GetOwner())
				{
					FVector InActorScale = InOwnerActor->GetActorScale();
					FVector ScaleRatio = InActorScale.GetSafeNormal();

					FVector BoxScaledBoxExtent = HitDamage->GetScaledBoxExtent();
					FVector BoxScaledBoxExtentRatio = BoxScaledBoxExtent.GetSafeNormal();

					FBox BoxBound = HitDamage->GetNavigationBounds();;
					FVector BoxMin = BoxBound.Min;
					FVector BoxMax = BoxBound.Max;

					//开始Box射线检测
					const FVector StartTraceLocation = BoxMin;
					const FVector EndTraceLocation = BoxMax;

					const FVector HalfSize = BoxScaledBoxExtent * ScaleRatio;

					const FRotator Orientation = GetActorRotation();

					TArray<AActor*> ActorsToIgnore;
					GetIgnoreTraceActor(ActorsToIgnore);

					if (UKismetSystemLibrary::BoxTraceSingle(
						GetWorld(),
						StartTraceLocation,
						EndTraceLocation,
						HalfSize,
						Orientation,
						TraceTypeQuery,
						false,
						ActorsToIgnore,
						(EDrawDebugTrace::Type)DrawDebugTrace,
						OutHitResult, true))
					{
						bFromSweep = true;
					}
				}
			}
		}
	}

	Super::StartHandleDamage_Inner(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, bFromSweep ? OutHitResult : SweepResult);
}