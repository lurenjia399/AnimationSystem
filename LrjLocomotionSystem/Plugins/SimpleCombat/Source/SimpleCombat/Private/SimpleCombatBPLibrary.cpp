//Copyright (C) RenZhai.2022.All Rights Reserved.
#include "SimpleCombatBPLibrary.h"
#include "SimpleCombat.h"
#include "Manage/ComboCountManage.h"
#include "Actor/ResidualShadowActor.h"
#include "Components/SkeletalMeshComponent.h"
#include "CombatInterface/SimpleCombatInterface.h"
#include "CombatInterface/SimpleAttackInterface.h"
#include "Hit/Core/ComboSkillHitCollision.h"
#include "Engine/Engine.h"
#include "Hit/ComboSkillHitBox.h"
#include "Hit/ComboSkillHitCapsule.h"
#include "Hit/ComboSkillHitCustom.h"
#include "Hit/ComboSkillHitSphere.h"

#if PLATFORM_WINDOWS
#pragma optimize("",off) 
#endif

USimpleCombatBPLibrary::USimpleCombatBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void USimpleCombatBPLibrary::ComboPlay(UObject* WorldContextObject, TSubclassOf<UUI_ComboCount> InClass)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FComboCountManage::Get()->Play(World, InClass);
	}
}

void USimpleCombatBPLibrary::ComboTextDestroy()
{
	FComboCountManage::Destroy();
}

AResidualShadowActor* USimpleCombatBPLibrary::SpawnResidualShadow(
	UObject* WorldContextObject,
	TSubclassOf<AResidualShadowActor>ResidualShadowActorClass,
	USkeletalMeshComponent* InComponentToCopy,
	float InZOffset,
	const FVector& Location, const FRotator& InRot, float InLiftTime)
{
	if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
	{
		FActorSpawnParameters SpawnParameters;
		SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

		FVector NewLocation = FVector(Location.X, Location.Y, Location.Z + InZOffset);
		FRotator NewRot = FRotator(InRot.Pitch, InRot.Yaw - 90.f, InRot.Roll);

		if (AResidualShadowActor* InRS = World->SpawnActor<AResidualShadowActor>(
			ResidualShadowActorClass,NewLocation,NewRot, SpawnParameters))
		{
			InRS->SetLifeSpan(InLiftTime);
			InRS->UpdateResidualShadow(InComponentToCopy);

			return InRS;
		}
	}

	return NULL;
}

float USimpleCombatBPLibrary::PlayMontage(
	USkeletalMeshComponent* InMesh,
	UAnimMontage* InAnimMontage, 
	float InPlayRate, FName StartSectionName)
{
	UAnimInstance* AnimInstance = (InMesh) ? InMesh->GetAnimInstance() : nullptr;
	if (InAnimMontage && AnimInstance)
	{
		float const Duration = AnimInstance->Montage_Play(InAnimMontage, InPlayRate);

		if (Duration > 0.f)
		{
			// Start at a given Section.
			if (StartSectionName != NAME_None)
			{
				AnimInstance->Montage_JumpToSection(StartSectionName, InAnimMontage);
			}

			return Duration;
		}
	}

	return 0.f;
}

APawn* USimpleCombatBPLibrary::GetCaster(AActor* InCharacter)
{
	if (ISimpleAttackInterface* InAttach = Cast<ISimpleAttackInterface>(InCharacter))
	{
		if (APawn *InPawn = InAttach->GetCaster())
		{
			return InPawn;
		}
	}

	return Cast<APawn>(InCharacter);
}

AHitCollision* USimpleCombatBPLibrary::SpawnSimpleCollision(
	AActor* InSimpleCombatCharacter,
	UClass* HitObjectClass,
	const FVector& InLocation,
	const FRotator& InRotation,
	FGameplayTag GASTag,
	int32 HitID,
	float HitCollisionLiftTime)
{
	FSimpleHitCollisionParam InParam;
	InParam.SimpleCombatCharacter = InSimpleCombatCharacter;
	InParam.HitObjectClass = HitObjectClass;
	InParam.Location = InLocation;
	InParam.Rotation = InRotation;
	InParam.HitID = HitID;
	InParam.HitCollisionLiftTime = HitCollisionLiftTime;
	InParam.bEnableBuffTag = false;
	InParam.GASTag = GASTag;

	return SpawnCollision(InParam);
}

AHitCollision* USimpleCombatBPLibrary::SpawnSimpleCollisionByTags(
	AActor* InSimpleCombatCharacter,
	UClass* HitObjectClass,
	const FVector& InLocation,
	const FRotator& InRotation,
	const TArray<FGameplayTag>& BuffTags,
	FGameplayTag GASTag,
	int32 HitID,
	float HitCollisionLiftTime)
{
	FSimpleHitCollisionParam InParam;
	InParam.SimpleCombatCharacter = InSimpleCombatCharacter;
	InParam.HitObjectClass = HitObjectClass;
	InParam.Location = InLocation;
	InParam.Rotation = InRotation;
	InParam.BuffTags = BuffTags;
	InParam.HitID = HitID;
	InParam.HitCollisionLiftTime = HitCollisionLiftTime;
	InParam.GASTag = GASTag;

	return SpawnCollision(InParam);
}

AHitCollision* USimpleCombatBPLibrary::SpawnCollision(const FSimpleHitCollisionParam& InParam)
{
	if (InParam.SimpleCombatCharacter && InParam.HitObjectClass)
	{
		bool bEnableAttack = false;
		bool bAllowAttack = true;
		bool bEnableOnlyLocalAttack = false;

		if (ISimpleAttackInterface* InAttackInterface = Cast<ISimpleAttackInterface>(InParam.SimpleCombatCharacter))
		{
			bAllowAttack = InAttackInterface->IsAllowAttack();
			bEnableOnlyLocalAttack = InAttackInterface->IsEnableOnlyLocalAttack();

			InAttackInterface->PreLaunchAttack();
		}

		if (!bEnableAttack)
		{
			bEnableAttack = bEnableOnlyLocalAttack;//优先级最高 
		}

		if (!bEnableAttack)
		{
			bEnableAttack = (InParam.bEnableClientPrediction ||
				InParam.SimpleCombatCharacter->GetWorld()->IsNetMode(ENetMode::NM_DedicatedServer) ||
				InParam.SimpleCombatCharacter->GetWorld()->IsNetMode(ENetMode::NM_ListenServer) ||
				InParam.SimpleCombatCharacter->GetWorld()->IsNetMode(ENetMode::NM_Standalone));
		}

		if (InParam.SimpleCombatCharacter->GetWorld())
		{
			if (bEnableAttack)
			{
				FTransform Transform((InParam.Rotation).Quaternion(), InParam.Location);

				//大小按照绑定模型的大小
				if (InParam.BindMesh)
				{
					Transform.SetScale3D(InParam.BindMesh->GetComponentScale());
				}

				if (bAllowAttack)
				{
					if (AHitCollision* HitCollision = InParam.SimpleCombatCharacter->GetWorld()->SpawnActorDeferred<AHitCollision>(
						InParam.HitObjectClass,
						Transform,
						NULL,
						InParam.bCustomCaster ? USimpleCombatBPLibrary::GetCaster(InParam.SimpleCombatCharacter) : Cast<APawn>(InParam.SimpleCombatCharacter),
						ESpawnActorCollisionHandlingMethod::AlwaysSpawn))
					{
						HitCollision->SetGASTag(InParam.GASTag);

						HitCollision->SetScapegoatActor(InParam.SimpleCombatCharacter);
						HitCollision->PreInitCollision(InParam.SimpleCombatCharacter);

						//注册
						HitCollision->SetHitID(InParam.HitID);
						if (InParam.bEnableBuffTag)
						{
							HitCollision->SetBuffs(InParam.BuffTags);
						}
						else
						{
							HitCollision->SetBuffs(InParam.Buffs);
						}

						//HitCollision->Collision(true);

						//碰撞方面
						if (HitCollision->GetHitDamage())
						{
							FVector RelativeLocation = HitCollision->GetHitDamage()->GetRelativeLocation();

							HitCollision->SetLifeSpan(InParam.HitCollisionLiftTime);
							HitCollision->SetHitDamageRelativePosition(RelativeLocation + InParam.RelativeOffsetLocation);

							if (InParam.bUseCurrentCollidingBodySize)
							{
								if (AHitBoxCollision* InBox = Cast<AHitBoxCollision>(HitCollision))
								{
									InBox->SetBoxExtent(InParam.BoxExtent);
								}
								else if (AHitCapsuleCollision* InCapsule = Cast<AHitCapsuleCollision>(HitCollision))
								{
									InCapsule->SetCapsuleHalfHeight(InParam.CapsuleHalfHeight);
									InCapsule->SetCapsuleRadius(InParam.CapsuleRadius);
								}
								else if (AHitSphereCollision* InSphere = Cast<AHitSphereCollision>(HitCollision))
								{
									InSphere->SetRadius(InParam.SphereRadius);
								}
								else if (AHitCustiomCollision* InCustiom = Cast<AHitCustiomCollision>(HitCollision))
								{

								}
							}
						}

						//结束延迟生成
						HitCollision->FinishSpawning(Transform);
						//HitCollision->SetActorRotation(ComponentRotation + RotationOffset);
						// 
						//必须保证对象生成后再附加，否则附加会失败
						if (InParam.bBind)
						{
							HitCollision->AttachToComponent(InParam.BindMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, InParam.SocketName);
						}

						if (ISimpleAttackInterface* SimpleAttackInterface = Cast<ISimpleAttackInterface>(InParam.SimpleCombatCharacter))
						{
							SimpleAttackInterface->LaunchAttack(HitCollision);

							SimpleAttackInterface->PostLaunchAttack(HitCollision);
						}

						HitCollision->InitHitBindEvent();
						HitCollision->RegisterHitCollision(InParam.SimpleCombatCharacter);

						return HitCollision;
					}
				}
			}
		}
	}

	return nullptr;
}
#if PLATFORM_WINDOWS
#pragma optimize("",on) 
#endif