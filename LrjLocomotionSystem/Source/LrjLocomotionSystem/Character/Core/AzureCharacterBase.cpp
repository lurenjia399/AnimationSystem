// Fill out your copyright notice in the Description page of Project Settings.


#include "LrjLocomotionSystem/Character/Core/AzureCharacterBase.h"
#include "SimpleDataRegistryManage.h"
#include "../../../../../../UnrealEngine/Engine/Plugins/Experimental/Animation/MotionTrajectory/Source/MotionTrajectory/Public/CharacterTrajectoryComponent.h"
#include "LrjLocomotionSystem/DataRegistry/DataRegistryName.h"


AAzureCharacterBase::AAzureCharacterBase()
{
	AnimBPMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("USkeletalMeshComponent"));
	AnimBPMesh->SetupAttachment(GetMesh());
	
	GetMesh()->SetCollisionEnabled(ECollisionEnabled::Type::NoCollision);
	GetMesh()->SetVisibility(false);
	GetMesh()->SetHiddenInGame(true);
	GetMesh()->VisibilityBasedAnimTickOption = EVisibilityBasedAnimTickOption::AlwaysTickPoseAndRefreshBones;
	
	AttributeSet = CreateDefaultSubobject<UAzureAttributeSet>(TEXT("UAzureAttributeSet"));
	AbilitySystemComponent = CreateDefaultSubobject<USimpleAbilitySystemComponent>(TEXT("USimpleAbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);

	FightComponent = CreateDefaultSubobject<UFightComponent>(TEXT("FightComponent"));
	FightComponent->SetIsReplicated(true);

	CharacterTrajectory = CreateDefaultSubobject<UCharacterTrajectoryComponent>(TEXT("UCharacterTrajectoryComponent"));
	
	CharacterType = ECharacterType::CHARACTER_NONE;
	DataTableIndex = INDEX_NONE;

	BeHurtID = INDEX_NONE;
	AccumulatedHurts = 0;
	MaxAccumulatedHurts = 1;
}

void AAzureCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	// 属性注册
	AttributeSet->RegistrationProperties(GetAttributeTable());
	TArray<UAttributeSet*> AttributeArray;
	AttributeArray.Add(AttributeSet);
	AbilitySystemComponent->SetSpawnedAttributes(AttributeArray);

	// 技能注册
	if (const FCharacterSkillTable* CharacterSkillTable = GetSkillTable())
	{
		FightComponent->AddGameplayAbility(CharacterSkillTable->LeftMouseSkill);
		FightComponent->AddGameplayAbility(CharacterSkillTable->RightMouseSkill);

		if (IsValid(CharacterSkillTable->LeftMouseSkill))
		{
			if(UGameplayAbility* Ability = Cast<UGameplayAbility>(CharacterSkillTable->LeftMouseSkill.GetDefaultObject()))
            {
            	FightComponent->RegisterComboAttack(Ability->AbilityTags.First());
            }
		}
		if(IsValid(CharacterSkillTable->RightMouseSkill))
		{
			if(UGameplayAbility* Ability = Cast<UGameplayAbility>(CharacterSkillTable->RightMouseSkill.GetDefaultObject()))
			{
				FightComponent->RegisterComboAttack(Ability->AbilityTags.First());
			}
		}
	}

	// 动画
	AnimBPMesh->AddTickPrerequisiteComponent(GetMesh());
}

void AAzureCharacterBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);

	bHit.Tick(DeltaSeconds);
}


const FCharacterAttributeTable* AAzureCharacterBase::GetAttributeTable() const
{
	return FSimpleDataRegistryManage::Get()->FindCached<FCharacterAttributeTable>(DataRegistryName::DR_CharacterAttribute, DataTableIndex);
}

const FCharacterSkillTable* AAzureCharacterBase::GetSkillTable() const
{
	return FSimpleDataRegistryManage::Get()->FindCached<FCharacterSkillTable>(DataRegistryName::DR_CharacterSkill, DataTableIndex);
}

const FCharacterStyleTable* AAzureCharacterBase::GetStyleTable() const
{
	return FSimpleDataRegistryManage::Get()->FindCached<FCharacterStyleTable>(DataRegistryName::DR_CharacterStyle, DataTableIndex);
}

bool AAzureCharacterBase::IsDie() const
{
	if (IsValid(AttributeSet))
	{
		return AttributeSet->Health.GetCurrentValue() <= 0.f;
	}
	return false;
}

bool AAzureCharacterBase::IsHit() const
{
	return *bHit;
}

ECharacterType AAzureCharacterBase::GetCharacterType() const
{
	return CharacterType;
}
void AAzureCharacterBase::SAIBT_Attack(FName Tag)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("SAIBT_AttackByName"));
}

void AAzureCharacterBase::SAIBT_Attack(int32 Tag)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("SAIBT_AttackByTag"));
}

void AAzureCharacterBase::SAIBT_Attack(AActor* Tag)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Red, TEXT("SAIBT_AttackByUObject"));
}

void AAzureCharacterBase::SAIBT_AttackByGameplayTag(const FGameplayTag& InTag)
{
	ComboAttackByGameplayTag(InTag);
}

UAbilitySystemComponent* AAzureCharacterBase::GetAbilitySystemComponent() const
{
	if(IsValid(AbilitySystemComponent))
	{
		return AbilitySystemComponent;
	}

	return nullptr;
}

FSimpleComboCheck* AAzureCharacterBase::GetSimpleComboInfo(const FGameplayTag& InKey)
{
	return FightComponent->GetSimpleComboInfo(InKey);
}

bool AAzureCharacterBase::ComboAttackByGameplayTag(const FGameplayTag& InKey)
{
	return FightComponent->ExecuteGameplayAbility(InKey);
}

UCharacterTrajectoryComponent* AAzureCharacterBase::GetCharacterTrajectoryComponent() const
{
	return CharacterTrajectory;
}

void AAzureCharacterBase::HandleDamage(float DamageAmount, const FGameplayTagContainer& DamageTags,
                                       AAzureCharacterBase* ActtackerPawn, AActor* ActtackerActor)
{
	if(const FCharacterStyleTable* InStyleTable = GetStyleTable())
	{
		if(IsDie())
		{
			if(!InStyleTable->DeathAnim.IsEmpty())
			{
				int32 AnimIndex = FMath::RandRange(0, InStyleTable->DeathAnim.Num() - 1);
				int32 AnimSectionNum = InStyleTable->DeathAnim[AnimIndex]->CompositeSections.Num();
				int32 CurrentSectionsIndex = FMath::RandRange(0, AnimSectionNum - 1);

				PlayAnimMontage(InStyleTable->DeathAnim[AnimIndex], 1, *FString::FromInt(CurrentSectionsIndex));
			}
		}
		else
		{
			bHit = true;
			AccumulatedHurts ++;
			if(AccumulatedHurts >= MaxAccumulatedHurts)
			{
				AccumulatedHurts = 0;
				if(!InStyleTable->BeHurtAnim.IsEmpty())
				{
					int32 AnimIndex = FMath::RandRange(0, InStyleTable->BeHurtAnim.Num() - 1);
					if(BeHurtID != INDEX_NONE)
					{
						// 受击蒙太奇播放时长
						bHit = PlayAnimMontage(InStyleTable->BeHurtAnim[AnimIndex], 1, *FString::FromInt(BeHurtID));
					}
				}
			}
			else
			{
				bHit = 4.0f;
				PlayBoneImpulse(ActtackerPawn, ActtackerActor);
			}
		}
	}
}

void AAzureCharacterBase::HandleHealth(AAzureCharacterBase* ActtackerPawn, AActor* ActtackerActor,
	const FGameplayTagContainer& InTags, float HealthAmount, bool bPlayHit)
{
}

bool AAzureCharacterBase::PlayBoneImpulse(AAzureCharacterBase* InstigatorPawn, AActor* DamageCauser)
{
	return false;
}
