//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SimpleAIBehaviorTreeExtendType.h"
#include "SAIBTCharacterInterface.generated.h"

class APawn;
class UGameplayAbility;

/*获取角色基础属性，凡是要用到本次AI扩展必须继承当前接口*/
// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class USAIBTCharacterInterface : public UInterface
{
	GENERATED_BODY()
};

class SIMPLEAIBEHAVIORTREEEXTEND_API ISAIBTCharacterInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	//Death or not
	virtual bool IsDie() const = 0;
	virtual bool IsHit() const {return false;}
	virtual bool IsStiff() const { return false; }
	virtual bool IsExecution() const { return false; }

	virtual int32 GetSAIBState() const { return INDEX_NONE; }
	virtual void SetSAIBState(int32 InNewState) {}
	virtual bool IsStopMovement() const { return false; }//停止一切 

	virtual ECharacterType GetCharacterType() const = 0;

	virtual void SAIBT_MontagePlayOnMulticast(UAnimMontage* InNewAnimMontage, float InPlayRate, float InTimeToStartMontageAt, bool bStopAllMontages, FName InStartSectionName) {};
	virtual void SAIBT_StopAnimMontageOnMulticast(){}
	virtual void SAIBT_ActivateGameplayAbilityByGameplayTag(const FGameplayTag& InTag) {}

	virtual bool IsSAIB_Attack(const FGameplayTag& InTag) const { return false; }

	//发现一个目标
	virtual void SAIBT_SetNewTarget(AActor* InTaget){}

	virtual void SAIBT_Attack(int32 Tag){}
	virtual void SAIBT_Attack(FName Tag) {}
	virtual void SAIBT_Attack(AActor *Tag) {}	
	virtual void SAIBT_AttackByGameplayTag(const FGameplayTag& InTag) {}

	//这个方法已经被丢弃 请用 virtual UGameplayAbility* SAIBT_AttackByGameplayTag(...) 需要返回
	//virtual void SAIBT_AttackByGameplayTag(AActor* InTarget, const FGameplayTag& InTag) { return nullptr; }
	virtual UGameplayAbility* SAIBT_AttackByGameplayTag(AActor* InTarget, const FGameplayTag& InTag) { return nullptr; }
};
