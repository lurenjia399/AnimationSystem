// Fill out your copyright notice in the Description page of Project Settings.


#include "LrjLocomotionSystem/Character/Core/AzureCharacterBase.h"
#include "SimpleDataRegistryManage.h"
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
	
	CharacterType = ECharacterType::CHARACTER_NONE;
	DataTableIndex = INDEX_NONE;
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

void AAzureCharacterBase::HandleDamage(float DamageAmount, const FGameplayTagContainer& DamageTags,
                                       AAzureCharacterBase* ActtackerPawn, AActor* ActtackerActor)
{
}

void AAzureCharacterBase::HandleHealth(AAzureCharacterBase* ActtackerPawn, AActor* ActtackerActor,
	const FGameplayTagContainer& InTags, float HealthAmount, bool bPlayHit)
{
}
