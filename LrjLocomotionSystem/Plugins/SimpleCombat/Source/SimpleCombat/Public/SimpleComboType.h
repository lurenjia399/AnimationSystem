//Copyright (C) RenZhai.2022.All Rights Reserved.
#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SimpleComboType.generated.h"

class UAnimMontage;

UENUM(BlueprintType)
enum class ESimpleDrawCGMixingEffectType:uint8
{
	DRAWDEBUGTRACE_NOT_MIXED_OUT					UMETA(DisplayName = "Not Blend Out"),//不混出
	DRAWDEBUGTRACE_MIXED_OUT						UMETA(DisplayName = "Blend Out"),//混出
	DRAWDEBUGTRACE_GRADIENT_MIXED_OUT				UMETA(DisplayName = "Gradient Blend Out"),//渐变式的混出
};

UENUM(BlueprintType)
enum class ESimpleDrawComputerGraphicsType :uint8
{
	DRAWDEBUGTRACE_NONE					UMETA(DisplayName = "None"),
	DRAWDEBUGTRACE_TRACK				UMETA(DisplayName = "Track"),
};

//����Debug���
UENUM(BlueprintType)
enum class ESimpleDrawDebugTrace :uint8
{
	DRAWDEBUGTRACE_NONE					UMETA(DisplayName = "None"),
	DRAWDEBUGTRACE_FORONEFRAME			UMETA(DisplayName = "For One Frame"),
	DRAWDEBUGTRACE_FORDURATION			UMETA(DisplayName = "For Duration"),
	DRAWDEBUGTRACE_PERSISTENT			UMETA(DisplayName = "Persistent"),
};

//ѡ�������γ�
UENUM(BlueprintType)
enum class EHitCollisionType :uint8
{
	HITCOLLISIONTYPE_SHORT_RANGE_ATTACK UMETA(DisplayName = "Short range attack"),		//���̹���

	HITCOLLISIONTYPE_DIRECT_LINE 		UMETA(DisplayName = "Direct Line"),				//���ϰ�ֱ�߹��� �е���
	HITCOLLISIONTYPE_LINE				UMETA(DisplayName = "Line"),					//�Ǹ������ͣ�������ǹ�ӵ� �е�����
	HITCOLLISIONTYPE_RAY_LINE			UMETA(DisplayName = "Ray Line"),				//�Ǹ������ͣ�������ǹ�ӵ� �޵�����
	HITCOLLISIONTYPE_TRACK_LINE			UMETA(DisplayName = "Track Line"),				//�������� �е���
	HITCOLLISIONTYPE_VELOCITY_TRACK		UMETA(DisplayName = "Velocity Track"),			//速度追踪
	HITCOLLISIONTYPE_RANGE_LINE			UMETA(DisplayName = "Range Line"),				//��Χ�˺��������ף�
	HITCOLLISIONTYPE_RANGE				UMETA(DisplayName = "Range"),					//��Χ�˺��������Ա���
	HITCOLLISIONTYPE_CHAIN				UMETA(DisplayName = "Chain"),					//�������ͣ������˺�����;
};

UENUM(BlueprintType)
enum class EItemObjectState : uint8
{
	DRAG_FREE UMETA(DisplayName = "Free"),
	DRAG_BUSY UMETA(DisplayName = "Busy"),
	DRAG_MAX  UMETA(DisplayName = "Max"),
};

USTRUCT(BlueprintType)
struct SIMPLECOMBAT_API FContinuousReleaseSpell
{
	GENERATED_USTRUCT_BODY()

	FContinuousReleaseSpell();

	UPROPERTY(EditDefaultsOnly, Category = ContinuousReleaseSpellName)
	FName StartName;

	UPROPERTY(EditDefaultsOnly, Category = ContinuousReleaseSpellName)
	FName LoopName;

	UPROPERTY(EditDefaultsOnly, Category = ContinuousReleaseSpellName)
	FName EndName;

	class ISimpleComboInterface* Character;

	UPROPERTY()
	UObject* BuffPtr;

public:
	FName GetCurrentState() const { return ContinuousReleaseSpellName; }

public:
	bool IsVaild()const;

	bool IsStart()const;
	bool IsLoop()const;
	bool IsEnd()const;

public:
	void ResetDefaultLoop();
	void ResetLoop(FName NewState = NAME_None);
	void ResetEnd(FName NewState = NAME_None);
	void ResetStart(FName NewState = NAME_None);
	void ResetNewState(FName NewState);

public:
	void Reset();

	void Press();
	void Released();

public:
	void SetNewDefaultLoopName(FName NewState) {DefaultLoopName = NewState;}
	FName GetDefaultLoopName() const { return DefaultLoopName; }

protected:
	UPROPERTY()
	FName ContinuousReleaseSpellName;

	UPROPERTY()
	FName DefaultLoopName;
};

//碰撞参数
USTRUCT(BlueprintType)
struct SIMPLECOMBAT_API FSimpleHitCollisionParam
{
	GENERATED_USTRUCT_BODY()

	FSimpleHitCollisionParam()
		:SimpleCombatCharacter(NULL)
		,HitObjectClass(NULL)
		,bEnableBuffTag(true)
		,HitID(INDEX_NONE)
		,HitCollisionLiftTime(4.f)//存在的生命周期
		,bCustomCaster(false)//是否自定义施法者
		,bEnableClientPrediction(false)
		,bUseCurrentCollidingBodySize(true)
		,BoxExtent(32.f)
		,CapsuleHalfHeight(44.f)
		,SphereRadius(32.f)
		,CapsuleRadius(22.f)
		,BindMesh(nullptr)
		,bBind(false)//将Box绑定在角色身上开火点上
		,SocketName(NAME_None)
	{}

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	AActor* SimpleCombatCharacter;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	UClass* HitObjectClass;

	//ComponentLocation
	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	FVector Location;

	//ComponentRotation
	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	FRotator Rotation;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	FVector RelativeOffsetLocation;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	bool bEnableBuffTag;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	TArray<FName> Buffs;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	TArray<FGameplayTag> BuffTags;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	int32 HitID;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	float HitCollisionLiftTime;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	bool bCustomCaster;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	bool bEnableClientPrediction;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	bool bUseCurrentCollidingBodySize;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	FVector BoxExtent;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	float CapsuleHalfHeight;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	float SphereRadius;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	float CapsuleRadius;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	USceneComponent* BindMesh;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	bool bBind;

	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	FName SocketName;

	//当前GAS 标签
	UPROPERTY(EditDefaultsOnly, Category = HitCollisionParam)
	FGameplayTag GASTag;
};

USTRUCT(BlueprintType)
struct SIMPLECOMBAT_API FSimpleComboCheck
{
	GENERATED_USTRUCT_BODY()

	FSimpleComboCheck();

	UPROPERTY(EditDefaultsOnly, Category = ComboAttack)
	int32 ComboIndex;

	UPROPERTY(EditDefaultsOnly, Category = ComboAttack)
	bool bLongPress;

	UPROPERTY(EditDefaultsOnly, Category = ComboAttack)
	bool bShortPress;

	class ISimpleComboInterface* Character;

	UPROPERTY()
	int32 MaxIndex;

	UPROPERTY()
	FName ComboKey;

	UPROPERTY()
	FGameplayTag ComboGameplayTag;

	UPROPERTY()//即将丢弃
	int32 ComboID;

	void UpdateComboIndex();

	void Press();

	void Released();

	void Reset();

	void Tick(float FrameDeltaTime);

	FSimpleDelegate PressDelegate;
	FSimpleDelegate ReleasedDelegate;
	FSimpleDelegate ResetDelegate;
	FSimpleDelegate UpdateDelegate;

protected:
	float CurrentTime;
};

inline bool operator==(const FSimpleComboCheck &L, const FSimpleComboCheck &R)
{
	return L.ComboKey == R.ComboKey;
}

struct SIMPLECOMBAT_API FInternallyInterpolatedStructureTmpData
{
	FInternallyInterpolatedStructureTmpData()
		:NotifyStateTotalDuration(0.f)
		,CurrentTime(0.f)
	{}

	float NotifyStateTotalDuration = 0.f;
	float CurrentTime = 0.f;

	float GetValue(float InTime)
	{
		CurrentTime += InTime;
		return CurrentTime / NotifyStateTotalDuration;
	}
};

struct SIMPLECOMBAT_API FResetBool
{
	FResetBool()
		:bSet(false)
		, Time(0.f)
	{}

	void Tick(float DeltaTime)
	{
		if (Time > 0.f)
		{
			Time -= DeltaTime;

			Update.ExecuteIfBound();

			if (Time <= 0.f)
			{
				Fun.ExecuteIfBound();
				Time = 0.f;
			}
		}
		else
		{
			bSet = false;
		}
	}

	FResetBool operator=(bool bNewSet)
	{
		bSet = bNewSet;
		return *this;
	}

	FResetBool operator=(float InNewTime)
	{
		Time = InNewTime;
		return *this;
	}

	bool operator*() const
	{
		return bSet;
	}

	explicit operator bool()
	{
		return bSet;
	}

	float GetTime() const { return Time; }

	FSimpleDelegate Fun;
	FSimpleDelegate Update;

protected:
	bool bSet;
	float Time;
};

USTRUCT(BlueprintType)
struct SIMPLECOMBAT_API FSimpleAttachPointInfo
{
	GENERATED_USTRUCT_BODY()

	FSimpleAttachPointInfo();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AttachPoint)
	FVector TargetLocation;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = AttachPoint)
	float Value;

	FSimpleAttachPointInfo operator=(const FSimpleAttachPointInfo &InAttachPoint)
	{
		TargetLocation = InAttachPoint.TargetLocation;
		Value = InAttachPoint.Value;

		return *this;
	}

public:
	void Start();
	void End();

public:
	void Tick(float InTime);

protected:
	bool bUpdate;
};

namespace SimpleComboType
{
	FVector GetCurrentCharacterDirection(ACharacter* InCharacter, const FVector &InDirectionForce);
}