//Copyright (C) RenZhai.2022.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "SimpleComboType.h"
#include "SimpleCombatInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI, Blueprintable, BlueprintType, meta = (CannotImplementInterfaceInBlueprint))
class USimpleComboInterface : public UInterface
{
	GENERATED_BODY()
};

class SIMPLECOMBAT_API ISimpleComboInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	ISimpleComboInterface();

	UFUNCTION(Blueprintable, Category="Combat")
	virtual void AnimSignal(int32 InSignal) {}

	UFUNCTION(Blueprintable, Category = "Combat")
	virtual bool ComboAttack(int32 InKey) { return false; }

	UFUNCTION(Blueprintable, Category = "Combat")
	virtual bool ComboAttackByTag(const FName &InKey) { return false; }

	UFUNCTION(Blueprintable, Category = "Combat")
	virtual bool ComboAttackByGameplayTag(const FGameplayTag& InKey) { return false; }

	UFUNCTION(Blueprintable, Category = "Combat")
	virtual AActor* GetTarget() { return NULL; }

	UFUNCTION(Blueprintable, Category = "Combat")
	virtual float GetCharacterLevel() { return 1; }

	//被抓起
	UFUNCTION(Blueprintable, Category = "Combat")
	virtual void CaughtUP(AActor *InWho) { }

	//被扔掉
	UFUNCTION(Blueprintable, Category = "Combat")
	virtual void Throw(AActor* InWho){}

	//针对更新吸附点准备
	UFUNCTION(Blueprintable, Category = "Combat")
	virtual void Update_AttachPoint(const FSimpleAttachPointInfo &InValue, FName InTag,bool bEnd);

	virtual struct FSimpleComboCheck* GetSimpleComboInfo(int32 InKey) { return NULL; }
	virtual struct FSimpleComboCheck* GetSimpleComboInfo(const FName &InKey) { return NULL; }
	virtual struct FSimpleComboCheck* GetSimpleComboInfo(const FGameplayTag& InKey) { return NULL; }

	virtual struct FContinuousReleaseSpell* GetContinuousReleaseSpell() { return NULL; }

public:
	//需要上层执行tick操作
	void TickDrive(float InNewTime);

public:
	FSimpleAttachPointInfo FindAttachPointInfo(FName InName);

private:
	TMap<FName, FSimpleAttachPointInfo> AttachPointAlpha;
	FRWLock RWLock;
};
