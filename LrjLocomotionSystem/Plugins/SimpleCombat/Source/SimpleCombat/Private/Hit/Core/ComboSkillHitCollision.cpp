//Copyright (C) RenZhai.2022.All Rights Reserved.
#include "Hit/Core/ComboSkillHitCollision.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "CombatInterface/SimpleCombatInterface.h"
#include "Components/SplineComponent.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "SimpleCombatBPLibrary.h"
#include "CombatInterface/SimpleHitCollisionInterface.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/RotatingMovementComponent.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent.h"
#include "GameplayAbilitySpec.h"

AHitCollision::AHitCollision(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	bTrack = false;

	PrimaryActorTick.bCanEverTick = true;

	HitCollisionRootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("CollisionRootComponent"));
	SetRootComponent(HitCollisionRootComponent);

	RotatingMovementComponent = CreateDefaultSubobject<URotatingMovementComponent>(TEXT("RotatingMovementComponent"));
	RotatingMovementComponent->RotationRate = FRotator::ZeroRotator;
	RotatingMovementComponent->SetComponentTickEnabled(false);

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovement"));

	ProjectileMovement->MaxSpeed = 2000.f;
	ProjectileMovement->InitialSpeed = 1600.f;
	ProjectileMovement->ProjectileGravityScale = 0.f;
	ProjectileMovement->UpdatedComponent = RootComponent;

	InitialLifeSpan = 4.f;
	bNetLoadOnClient = false;
	bReplicates = false;
	bDebugHitLine = false;

	//锟斤拷锟教癸拷锟斤拷
	HitCollisionType = EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK;

	bEnableSweep = false;
	CurrentSplineTime = 0.f;
	bRandomDirection = false;
	TraceDistance = 10000.f;

	TraceTypeQuery = ETraceTypeQuery::TraceTypeQuery1;
	DrawDebugTrace = ESimpleDrawDebugTrace::DRAWDEBUGTRACE_NONE;

	BaseDamage = 100.f;
	MinimumDamage = 10.f;
	DamageInnerRadius = 300.f;
	DamageOuterRadius = 600.f;

	DamageRatio = 1.f;
	bRecordOnlyOnce = true;
	bAutomaticallyDestroy = true;
	bPreInitCollision = false;
}

void AHitCollision::PreInitCollision(AActor* InMyInstigator)
{
	if (bPreInitCollision)
	{
		return;
	}

	if (!InMyInstigator)
	{
		return;
	}

	switch (HitCollisionType)
	{
		case EHitCollisionType::HITCOLLISIONTYPE_TRACK_LINE://锟斤拷锟斤拷锟斤拷锟斤拷
		case EHitCollisionType::HITCOLLISIONTYPE_VELOCITY_TRACK:
		{
			if (ProjectileMovement)
			{
				ProjectileMovement->MaxSpeed = 0.f;
				ProjectileMovement->InitialSpeed = 0.f;
				ProjectileMovement->ProjectileGravityScale = 0.f;
				ProjectileMovement->StopMovementImmediately();
			}	

			break;
		}
		case EHitCollisionType::HITCOLLISIONTYPE_RAY_LINE: //通锟斤拷锟斤拷锟斤拷
		case EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK://锟斤拷锟教癸拷锟斤拷
		{	
			if (ProjectileMovement)
			{
				ProjectileMovement->DestroyComponent();
				ProjectileMovement = NULL;
			}
		
			break;
		}
	}

	switch (HitCollisionType)
	{
		case EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK:
		{
			break;
		}
		case EHitCollisionType::HITCOLLISIONTYPE_DIRECT_LINE://锟斤拷锟较帮拷直锟竭癸拷锟斤拷
			break;
		case EHitCollisionType::HITCOLLISIONTYPE_LINE://锟角革拷锟斤拷锟斤拷锟酵ｏ拷锟斤拷锟斤拷锟斤拷枪锟接碉拷锟斤拷
		{
			if (ProjectileMovement)
			{
				ProjectileMovement->ProjectileGravityScale = 0.f;
			}
			
			break;
		}
		case EHitCollisionType::HITCOLLISIONTYPE_TRACK_LINE://锟斤拷锟斤拷锟斤拷锟斤拷
		{
			FVector TargetLocation = FVector::ZeroVector;
			if (ISimpleComboInterface* InInstigator = Cast<ISimpleComboInterface>(InMyInstigator))
			{
				if (AActor* InTaget = InInstigator->GetTarget())
				{
					TargetLocation = InTaget->GetActorLocation();
				}
			}
			else //锟斤拷锟斤拷锟斤拷锟揭伙拷锟??
			{
				if (InMyInstigator)
				{
					TargetLocation = InMyInstigator->GetActorForwardVector() * 1000.f + InMyInstigator->GetActorLocation();
				}
			}

			Spline = NewObject<USplineComponent>(this, TEXT("SplineInstance"));
			Spline->RegisterComponent();

			Spline->SetLocationAtSplinePoint(0, GetActorLocation(), ESplineCoordinateSpace::Local);

			DistanceVector = TargetLocation - GetActorLocation();
			auto Position = (InMyInstigator->GetActorForwardVector() * (DistanceVector.Size() / 2.f)) + InMyInstigator->GetActorLocation();

			Position.Z = (DistanceVector.Size() *.5f) * 0.5f;
			Position.Y = bRandomDirection ? FMath::RandRange(0.f, (float)Position.Y) : SplineOffset;

			Spline->SetLocationAtSplinePoint(1, Position, ESplineCoordinateSpace::Local);//锟叫碉拷
			Spline->AddSplinePoint(TargetLocation, ESplineCoordinateSpace::Local);//锟秸碉拷

			break;
		}
		case EHitCollisionType::HITCOLLISIONTYPE_RANGE_LINE://锟斤拷围锟剿猴拷锟斤拷锟斤拷锟斤拷锟阶ｏ拷
			break;
		case EHitCollisionType::HITCOLLISIONTYPE_RANGE://锟斤拷围锟剿猴拷锟斤拷锟斤拷锟斤拷锟皆憋拷锟斤拷
			break;
		case EHitCollisionType::HITCOLLISIONTYPE_CHAIN://锟斤拷锟斤拷锟斤拷锟酵ｏ拷锟斤拷锟斤拷锟剿猴拷锟斤拷锟斤拷;
			break;
	}

	bPreInitCollision = true;
}

void AHitCollision::HandleDamage(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (ACharacter *InCharacter = Cast<ACharacter>(OtherActor))
	{
		AttackedTarget.AddUnique(FAttackedTargetTimer(InCharacter));
	}
}

void AHitCollision::ActivateProjectileMovement(float InMaxSpeed,const FVector& InVelocity, bool bActivateGravity, bool bRot)
{
	if (ProjectileMovement)
	{
		ProjectileMovement->MaxSpeed = InMaxSpeed;
		// 设置新的初速度
		ProjectileMovement->Velocity = InVelocity;

		// 确保激活移动组件
		ProjectileMovement->Activate(true);

		ProjectileMovement->ProjectileGravityScale = bActivateGravity ? 1.f : 0.f;

		// 如果需要重新计算移动方向，可以使用ProjectileMovementComponent->SetVelocityInLocalSpace
		// ProjectileMovementComponent->SetVelocityInLocalSpace(NewVelocity);
	}

	if (bRot)
	{
		if (RotatingMovementComponent)
		{
			RotatingMovementComponent->RotationRate = FRotator(90.f);
			RotatingMovementComponent->SetComponentTickEnabled(true);
		}
	}
}

void AHitCollision::ActivateProjectileMovementHoming(AActor* InTarget, float HomingAccelerationMagnitude, bool bRot)
{
	if (InTarget)
	{
		if (ProjectileMovement)
		{
			bTrack = true;

			FVector InCurrentVelocity = (InTarget->GetActorLocation() - GetActorLocation()).GetSafeNormal();

			ActivateProjectileMovement(HomingAccelerationMagnitude, InCurrentVelocity,true,bRot);

			K2_OnActivateProjectileMovementHoming();
		}
	}
}

void AHitCollision::StopTrack(AActor* InTrackTarget)
{
	//如果存在追踪
	if (HitCollisionType == EHitCollisionType::HITCOLLISIONTYPE_VELOCITY_TRACK)
	{
		if (ISimpleComboInterface* InInstigator = Cast<ISimpleComboInterface>(GetInstigator()))
		{
			if (AActor* InTarget = InInstigator->GetTarget())
			{
				if (InTarget == InTrackTarget)
				{
					bTrack = false;
				}
			}
		}
	}
}

void AHitCollision::ReleaseGAS()
{
	if (GASTag.IsValid())
	{
		if (IAbilitySystemInterface* InInstigatorActor = Cast<IAbilitySystemInterface>(GetInstigator<AActor>()))
		{
			if (UAbilitySystemComponent* InAbilitySystemComponent = InInstigatorActor->GetAbilitySystemComponent())
			{
				TArray<FGameplayAbilitySpec*> ActiveAbilities;
				InAbilitySystemComponent->GetActivatableGameplayAbilitySpecsByAllMatchingTags(FGameplayTagContainer(GASTag), ActiveAbilities);

				for (FGameplayAbilitySpec* Spec : ActiveAbilities)
				{
					if (Spec->IsActive())
					{
						UGameplayAbility* InPrimaryAbilityInstance = nullptr;

						switch (Spec->Ability->GetInstancingPolicy())
						{
						case EGameplayAbilityInstancingPolicy::InstancedPerActor:
						{
							UGameplayAbility* PrimaryAbility = Spec->GetPrimaryInstance();
							if (PrimaryAbility)
							{
								InPrimaryAbilityInstance = PrimaryAbility;
							}

							break;
						}
						case EGameplayAbilityInstancingPolicy::InstancedPerExecution:
						{
							if (Spec->Ability->GetReplicationPolicy() == EGameplayAbilityReplicationPolicy::ReplicateYes)
							{
								if (Spec->ReplicatedInstances.Num() > 0)
								{
									InPrimaryAbilityInstance = Spec->ReplicatedInstances[Spec->ReplicatedInstances.Num() - 1];
								}
							}
							else
							{
								if (Spec->NonReplicatedInstances.Num() > 0)
								{
									InPrimaryAbilityInstance = Spec->NonReplicatedInstances[Spec->NonReplicatedInstances.Num() - 1];
								}
							}
							break;
						}
						case EGameplayAbilityInstancingPolicy::NonInstanced:
						{
							// 技能通过CDO执行
							InPrimaryAbilityInstance = Spec->Ability;

							break;
						}
						}

						if (InPrimaryAbilityInstance->AbilityTags.First() == GASTag)
						{
							InPrimaryAbilityInstance->CancelAbility(
								InPrimaryAbilityInstance->GetCurrentAbilitySpecHandle(),
								InPrimaryAbilityInstance->GetCurrentActorInfo(),
								InPrimaryAbilityInstance->GetCurrentActivationInfoRef(),
								true);

							UE_LOG(LogTemp, Log, TEXT("CancelAbility Ability: %s"), *Spec->Ability->GetName());
							
							break;
						}
						else
						{
							UE_LOG(LogTemp, Log, TEXT("Active Ability: %s"), *Spec->Ability->GetName());
						}
					}
				}
			}
		}
	}
}

void AHitCollision::ShowHitResultDebug(const FHitResult& SweepResult)
{
#if ENABLE_DRAW_DEBUG
	float DebugHitResultLifeTime = 10.f;
	float DebugHitResultThickness = 4.f;
	//Normal
	{
		FVector EndLocation = SweepResult.ImpactPoint + SweepResult.Normal * 10.f;
		DrawDebugDirectionalArrow(
			GetWorld(),
			SweepResult.ImpactPoint,
			EndLocation,
			3.f,
			FColor::Blue,false, 
			DebugHitResultLifeTime, 
			DebugHitResultThickness);
	}

	//ImpactNormal
	{
		FVector EndLocation = SweepResult.ImpactPoint + SweepResult.ImpactNormal * 10.f;
		DrawDebugDirectionalArrow(
			GetWorld(),
			SweepResult.ImpactPoint,
			EndLocation,
			3.f,
			FColor::Yellow, false,
			DebugHitResultLifeTime,
			DebugHitResultThickness);
	}

	//ImpactNormal
	if(SweepResult.Component.IsValid())
	{
		FVector EndLocation = SweepResult.Component->GetComponentLocation() + SweepResult.Component->GetForwardVector() * 10.f;
		DrawDebugDirectionalArrow(
			GetWorld(),
			SweepResult.Component->GetComponentLocation(),
			EndLocation,
			3.f,
			FColor::Red, false,
			DebugHitResultLifeTime,
			DebugHitResultThickness);
	}

	//位锟斤拷
	{
		DrawDebugPoint(
			GetWorld(),
			SweepResult.Location,10.f, FColor::Cyan,false, DebugHitResultLifeTime);
	}

	//ImpactPoint
	{
		DrawDebugPoint(
			GetWorld(),
			SweepResult.ImpactPoint, 10.f, FColor::Green, false,DebugHitResultLifeTime);
	}

	//锟斤拷锟斤拷锟街凤拷锟斤拷
	{
		DrawDebugString(
			GetWorld(),
			SweepResult.ImpactPoint,
			SweepResult.BoneName.ToString(), 
			NULL,
			FColor::White,		
			DebugHitResultLifeTime,
			false,
			2.f);
	}

	{
		DrawDebugString(
			GetWorld(),
			SweepResult.Location,
			SweepResult.MyBoneName.ToString(),
			NULL,
			FColor::Red,
			DebugHitResultLifeTime,
			false,
			2.f);
	}
#endif
}

void AHitCollision::InitCustomIgnoreActors()
{
	CustomIgnoreActors.AddUnique(this);
	if (GetInstigator())
	{
		CustomIgnoreActors.AddUnique(GetInstigator());
	}

	if (GetScapegoatActor())
	{
		CustomIgnoreActors.AddUnique(GetScapegoatActor());
	}
}

void AHitCollision::ClearCustomIgnoreActors()
{
	CustomIgnoreActors.Empty();
}

void AHitCollision::AddIgnoreActors(AActor* InNewActor)
{
	CustomIgnoreActors.AddUnique(InNewActor);
}

void AHitCollision::RemoveIgnoreActors(AActor* InNewActor)
{
	CustomIgnoreActors.Remove(InNewActor);
}

void AHitCollision::CheckAutomaticallyDestroy()
{
	if (bAutomaticallyDestroy)
	{
		Destroy();
	}
}

UPrimitiveComponent* AHitCollision::GetHitDamage()
{
	return NULL;
}

void AHitCollision::SetHitDamageRelativePosition(const FVector& InNewPostion)
{
	if (UPrimitiveComponent* InHitComponent = GetHitDamage())
	{
		InHitComponent->SetRelativeLocation(InNewPostion);
	}
}

void AHitCollision::K2_SetBuffsByName(const TArray<FName>& InBuffs)
{
	Buffs = InBuffs;
}

void AHitCollision::K2_SetBuffsByTag(const TArray<FGameplayTag>& InBuffs)
{
	BuffTags = InBuffs;
}

void AHitCollision::SetIgnoreActors(AActor* InActor)
{
	CustomIgnoreActors.Add(InActor);
}

bool AHitCollision::IsExitIgnoredActor(AActor* InActor) const
{
	if (!InActor->IsA(AHitCollision::StaticClass()))
	{
		for (auto& Tmp : CustomIgnoreActors)
		{
			if (Tmp.IsValid())
			{
				if (Tmp == InActor)
				{
					return true;
				}
			}
		}
	}
	else
	{
		return true;
	}

	return false;
}

void AHitCollision::Collision(bool bCollision)
{
	if (UPrimitiveComponent* InHitComponent = GetHitDamage())
	{
		if (bCollision)
		{
			InHitComponent->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
		}
		else
		{
			InHitComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		}
	}
}

bool AHitCollision::IsExist(ACharacter* InNewTaget) const
{
	if (InNewTaget)
	{
		for (auto& Tmp : AttackedTarget)
		{
			if (Tmp.AttackedTarget.IsValid())
			{
				if (Tmp.AttackedTarget == InNewTaget)
				{
					return true;
				}
			}
		}
	}
	
	return false;
}

void AHitCollision::GetIgnoreTraceActor(TArray<AActor*>& OutActorsToIgnore)
{
	for (auto &Tmp : CustomIgnoreActors)
	{
		if (Tmp.IsValid())
		{
			OutActorsToIgnore.AddUnique(Tmp.Get());
		}
	}
}

void AHitCollision::EndHandleDamage_Inner(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor, 
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	OnHandleDamageEnd.ExecuteIfBound(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
}

void AHitCollision::StartHandleDamage_Inner(
	UPrimitiveComponent* OverlappedComponent,
	AActor* OtherActor,
	UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, 
	bool bFromSweep, 
	const FHitResult& SweepResult)
{
	OnPreHandleDamageStart.ExecuteIfBound(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	HandleDamage(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
	
	OnPostHandleDamageStart.ExecuteIfBound(OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);

	if (bFromSweep && bDebugHitLine)
	{
		ShowHitResultDebug(SweepResult);
	}
}

// Called when the game starts or when spawned
void AHitCollision::BeginPlay()
{
	InitCustomIgnoreActors();

	if (UPrimitiveComponent *InHitComponent = GetHitDamage())
	{
		InHitComponent->SetHiddenInGame(true);
		bool bBindHandleDamage = true;

		switch (HitCollisionType)
		{
			case EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK:
				break;
			case EHitCollisionType::HITCOLLISIONTYPE_DIRECT_LINE:
				break;
			case EHitCollisionType::HITCOLLISIONTYPE_VELOCITY_TRACK:
				break;
			case EHitCollisionType::HITCOLLISIONTYPE_LINE:
				break;
			case EHitCollisionType::HITCOLLISIONTYPE_RAY_LINE:
			{
				//锟斤拷始锟斤拷锟竭硷拷锟??
				FVector StartTraceLocation = GetActorLocation();

				FHitResult OutHitResult;

				FVector EndTraceLocation = StartTraceLocation + GetActorForwardVector() * TraceDistance;
				
				TArray<AActor*> ActorsToIgnore;
				GetIgnoreTraceActor(ActorsToIgnore);

				if (UKismetSystemLibrary::LineTraceSingle(
					GetWorld(),
					StartTraceLocation,
					EndTraceLocation,
					TraceTypeQuery,
					false,
					ActorsToIgnore,
					(EDrawDebugTrace::Type)DrawDebugTrace,
					OutHitResult, true))
				{
					HandleDamage(
						InHitComponent,
						OutHitResult.GetActor(),
						OutHitResult.GetComponent(),
						OutHitResult.FaceIndex,
						true,
						OutHitResult);
				}
				bBindHandleDamage = false;

				Destroy();

				break;
			}	
			case EHitCollisionType::HITCOLLISIONTYPE_TRACK_LINE:
				break;
			case EHitCollisionType::HITCOLLISIONTYPE_RANGE_LINE:
			{
				/*ProjectileMovement->StopMovementImmediately();
				
				ProjectileMovement->ProjectileGravityScale = 1.f;
				
				FVector TargetFormOwnerVector = TargetCharacter->GetActorLocation() - GetActorLocation();
				
				float InTime = (TargetFormOwnerVector.Size() / ProjectileMovement->InitialSpeed);
				float Y = ProjectileMovement->GetGravityZ() * InTime;
				float X = ProjectileMovement->InitialSpeed * InTime;
				float V = FMath::Sqrt(X * X + Y * Y);
				
				float CosRadian = FMath::Acos(TargetFormOwnerVector.Size() / V * (InTime * (PI * 0.1f)));
				FRotator Rot = GetActorRotation();
				Rot.Pitch = CosRadian * (180 / PI);
				SetActorRotation(Rot);
				
				ProjectileMovement->SetVelocityInLocalSpace(FVector(1.0f, 0.f, 0.f) * ProjectileMovement->InitialSpeed);*/
				break;
			}
			case EHitCollisionType::HITCOLLISIONTYPE_RANGE:
			{
				if (ProjectileMovement)
				{
					ProjectileMovement->StopMovementImmediately();
				}

				InHitComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);

				RadialDamage();

				bBindHandleDamage = false;

				Destroy();
								
				break;
			}
			case EHitCollisionType::HITCOLLISIONTYPE_CHAIN:
			{
				//ProjectileMovement->StopMovementImmediately();
				//InHitComponent->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				//
				//UGameplayStatics::SpawnEmitterAttached(OpenFireParticle, GetInstigator()->GetRootComponent(),NAME_None,GetInstigator()->GetActorLocation());
				//UGameplayStatics::SpawnEmitterAttached(DamgageParticle, GetInstigator()->GetRootComponent(), NAME_None,GetInstigator()->GetActorLocation());
				//
				//GetWorld()->GetTimerManager().SetTimer(ChainAttackHandle, this, &AHitCollision::ChainAttack, 0.1f);
				//
				//SubmissionSkillRequest();
				break;
			}
		}
		
		if (bBindHandleDamage)
		{
			InHitComponent->OnComponentBeginOverlap.AddDynamic(this, &AHitCollision::StartHandleDamage_Inner);
			InHitComponent->OnComponentEndOverlap.AddDynamic(this, &AHitCollision::EndHandleDamage_Inner);
		}
	}

	Super::BeginPlay();
}

// Called every frame
void AHitCollision::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	switch (HitCollisionType)
	{
		case EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK:

			if(GetActorEnableCollision())
			{
				FVector Pos  = HitCollisionRootComponent->GetComponentLocation();

				if(MoveLengths.Num() > 10)
					MoveLengths.RemoveAt(0);

				MoveLengths.Add((Pos-LastPos).Length());

				LastPos = Pos;
			}

			break;
		case EHitCollisionType::HITCOLLISIONTYPE_DIRECT_LINE:
			break;
		case EHitCollisionType::HITCOLLISIONTYPE_LINE:
			break;
		case EHitCollisionType::HITCOLLISIONTYPE_TRACK_LINE:
		{			
			if (Spline)
			{
				CurrentSplineTime += DeltaTime;
					
				float Distance = Spline->GetSplineLength() * CurrentSplineTime /(DistanceVector.Size() / 1000.f);
				FVector Loction = Spline->GetWorldLocationAtDistanceAlongSpline(Distance);
				FRotator Rotator = Spline->GetRotationAtDistanceAlongSpline(Distance, ESplineCoordinateSpace::Local);
					
				SetActorLocationAndRotation(Loction, Rotator);

				if (ISimpleComboInterface* InInstigator = Cast<ISimpleComboInterface>(GetInstigator()))
				{
					if (AActor *InTarget = InInstigator->GetTarget())
					{
						float MyDistance = FVector::Distance(InTarget->GetActorLocation(),GetActorLocation());
						if (MyDistance < 50.f)
						{
							Destroyed();
						}
					}
				}
			}			
			break;
		}
		case EHitCollisionType::HITCOLLISIONTYPE_RANGE_LINE:
			break;
		case EHitCollisionType::HITCOLLISIONTYPE_RANGE:
			break;
		case EHitCollisionType::HITCOLLISIONTYPE_CHAIN:
			break;
		case EHitCollisionType::HITCOLLISIONTYPE_VELOCITY_TRACK:
		{
			//速度追踪
			if (bTrack)
			{
				if (ISimpleComboInterface* InInstigator = Cast<ISimpleComboInterface>(GetInstigator()))
				{
					if (AActor* InTarget = InInstigator->GetTarget())
					{
						FVector InCurrentVelocity = (InTarget->GetActorLocation() - GetActorLocation()).GetSafeNormal();

						if (ProjectileMovement)
						{
							ProjectileMovement->Velocity = ProjectileMovement->MaxSpeed * InCurrentVelocity;
						}
					}
				}
			}

			break;
		}
	}

	if (!bRecordOnlyOnce)
	{
		//锟斤拷锟斤拷时锟斤拷
		for (auto &Tmp : AttackedTarget)
		{
			if (Tmp.AttackedTarget.IsValid())
			{
				Tmp.Time -= DeltaTime;
				if (Tmp.Time <= 0.f)
				{
					Tmp.AttackedTarget = NULL;
				}
			}
		}

		//锟狡筹拷锟秸的讹拷锟斤拷
		AttackedTarget.Remove(FAttackedTargetTimer(NULL));
	}

	//锟狡筹拷锟皆讹拷锟斤拷锟斤拷锟叫空的讹拷锟斤拷
	CustomIgnoreActors.Remove(NULL);
}

void AHitCollision::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);

	ReleaseGAS();

	UnregisteredHitCollision();
}

void AHitCollision::RadialDamage()
{
	FVector StartTraceLocation = GetActorLocation();

	TArray<AActor*> ActorsToIgnore;
	GetIgnoreTraceActor(ActorsToIgnore);

	TArray<FHitResult> OutHits;

	if (UKismetSystemLibrary::SphereTraceMulti(
		GetWorld(),
		StartTraceLocation,
		StartTraceLocation,
		DamageOuterRadius,
		ETraceTypeQuery::TraceTypeQuery1,
		false,
		ActorsToIgnore,
		(EDrawDebugTrace::Type)DrawDebugTrace, 
		OutHits,
		true))
	{
		for (auto &Tmp : OutHits)
		{
			float Distance = FVector::Distance(GetActorLocation(), Tmp.Location);

			if (Distance <= DamageOuterRadius)
			{
				if (Distance > DamageInnerRadius && Distance <= DamageOuterRadius)
				{
					DamageRatio = (1.f - (Distance - DamageInnerRadius) / (DamageOuterRadius - DamageInnerRadius));
				}
			}
			else
			{
				DamageRatio = 0.f;
			}
			
			HandleDamage(
				Cast<UPrimitiveComponent>(this),
				Tmp.GetActor(),
				Tmp.GetComponent(),
				Tmp.FaceIndex,
				true,
				Tmp);
		}
	}
}

void AHitCollision::InitHitCollision(AActor* InParentActor)
{
	if (!InParentActor)
	{
		InParentActor = GetAttachParentActor();
	}

	if (InParentActor)
	{
		//锟襟定达拷锟斤拷
		InitHitBindEvent(InParentActor);

		SetScapegoatActor(InParentActor);
		PreInitCollision(InParentActor);
		SetActorEnableCollision(false);
	}

	AddIgnoreActors(InParentActor);
}

bool AHitCollision::IsLocallyInputControlled() const
{
	if (AActor *MyInstigator = GetInstigator<AActor>())
	{
		if (!IsNetMode(ENetMode::NM_DedicatedServer))
		{
			if (IsNetMode(ENetMode::NM_Standalone))
			{
				//不考虑分屏的情况
				if (MyInstigator == GetWorld()->GetFirstPlayerController()->GetPawn())
				{
					return true;
				}
			}
			else if (MyInstigator->IsNetMode(ENetMode::NM_ListenServer))
			{
				if (MyInstigator == GetWorld()->GetFirstPlayerController()->GetPawn())
				{
					return true;
				}
			}
			else if (MyInstigator->IsNetMode(ENetMode::NM_Client))
			{
				if (MyInstigator->GetLocalRole() == ENetRole::ROLE_AutonomousProxy)
				{
					return true;
				}
			}
		}
	}

	return false;
}

void AHitCollision::InitHitBindEvent(AActor* InParentActor)
{
	if (!InParentActor)
	{
		InParentActor = GetAttachParentActor();
	}

	if (InParentActor)
	{
		if (ISimpleHitCollisionInterface* InHitCollisionInterface = Cast<ISimpleHitCollisionInterface>(InParentActor))
		{
			OnPreHandleDamageStart.BindRaw(InHitCollisionInterface, &ISimpleHitCollisionInterface::OnPreStartHandleDamage);
			OnPostHandleDamageStart.BindRaw(InHitCollisionInterface, &ISimpleHitCollisionInterface::OnPostStartHandleDamage);
			OnHandleDamageEnd.BindRaw(InHitCollisionInterface, &ISimpleHitCollisionInterface::OnEndHandleDamage);
		}
	}
}

void AHitCollision::UnregisteredHitCollision()
{
	SetInstigator(NULL);
	ClearCustomIgnoreActors();

	AttackedTarget.Empty();

	SetActorEnableCollision(false);
}

void AHitCollision::RegisterHitCollision(AActor* InActor)
{
	SetInstigator(USimpleCombatBPLibrary::GetCaster(InActor));
	InitCustomIgnoreActors();

	SetActorEnableCollision(true);
}

FAttackedTargetTimer::FAttackedTargetTimer()
	:Time(0.5f)
{}

FAttackedTargetTimer::FAttackedTargetTimer(ACharacter* InNewCharacter)
:Time(0.5f)
{
	AttackedTarget = InNewCharacter;
}


float AHitCollision::GetMoveSpeed(int32 NumFrame)
{
	int32 Num = NumFrame <= MoveLengths.Num() ? NumFrame : MoveLengths.Num();
	float Lengths=0;
	for(int32 i=0; i<Num; i++)
	{
		Lengths += MoveLengths[i];
	}
	return Lengths/Num;
}