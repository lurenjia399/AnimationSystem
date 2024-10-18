//Copyright (C) RenZhai.2022.All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "BehaviorTree/BehaviorTree.h"
#include "LevelSequence.h"
#include "SimpleAIBehaviorTreeExtendType.generated.h"

#define ECC_SightCheck ECC_GameTraceChannel2

UENUM(BlueprintType)
enum class ESimpleTargetDirection : uint8
{
	DIRECTION_NONE			UMETA(DisplayName = "None"),
	// 前
	Forward					UMETA(DisplayName = "Forward"),//1
	// 后
	Backward				UMETA(DisplayName = "Backward"),//2
	// 左
	Left					UMETA(DisplayName = "Left"),//3
	// 右
	Right					UMETA(DisplayName = "Right"),//4
};

UENUM(BlueprintType)
enum class EThreatType : uint8
{
	// 伤害类型
	TT_Damage		UMETA(DisplayName = "Damage"),
	// 距离类型
	TT_Distance		UMETA(DisplayName = "Distance"),
	// 其他类型
	TT_Others		UMETA(DisplayName = "Others"),

	TT_None			UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESAIBTState : uint8
{
	// 休闲状态
	MS_Leisure		UMETA(DisplayName = "Leisure"),
	// 警惕状态
	MS_Alert		UMETA(DisplayName = "Alert"),
	// 战斗状态
	MS_Battle		UMETA(DisplayName = "Battle"),

	MS_None			UMETA(Hidden)
};

UENUM(BlueprintType)
enum class ESAIBTDistanceType : uint8
{
	// 视野距离
	DT_SightRange		UMETA(DisplayName = "SightRange"),
	// 攻击距离
	DT_AttackRange		UMETA(DisplayName = "AttackRange"),
	// 有效距离
	DT_EffectiveRange	UMETA(DisplayName = "EffectiveRange"),
	// 追击距离
	DT_ChaseRange		UMETA(DisplayName = "ChaseRange")
};

UENUM(BlueprintType)
enum class ESAIBTLocomotionState : uint8
{
	// 行走状态
	LS_Run			UMETA(DisplayName = "Run"),
	// 跑步状态
	LS_Walk			UMETA(DisplayName = "Walk")
};

UENUM(BlueprintType)
enum class EMultiStageBossExecution : uint8
{
	// 生成Boss
	Execution_SpawnBoss		UMETA(DisplayName = "Spawn Boss"),

	// 播放Sequence
	Execution_PlaySequence	UMETA(DisplayName = "Play Sequence"),
};

UENUM(BlueprintType)
enum class ECharacterType : uint8
{
	CHARACTER_NONE				 UMETA(DisplayName = "None"),			//1 主角
	CHARACTER_PLAYER_MAIN		 UMETA(DisplayName = "Lead"),			//1 主角
	CHARACTER_PARTNER			 UMETA(DisplayName = "Partner"),		//2 ~ 4096 //配角
	CHARACTER_NPC_RESIDENT		 UMETA(DisplayName = "Resident"),		//4097 ~ 8119 //居民
	CHARACTER_NPC_GUARDIAN		 UMETA(DisplayName = "Guardian"),		//8120 ~ 16423 //守卫者
	CHARACTER_MONSTER			 UMETA(DisplayName = "Monster"),		//16424~30000	//小怪
	CHARACTER_BOSS				 UMETA(DisplayName = "Boss"),			//30001			//Boss
};

// 战斗参数
USTRUCT(BlueprintType, Blueprintable)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FSAIBTBattleAttribute
{
	GENERATED_USTRUCT_BODY()

	// 视野距离
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	float SightDistance = 900.f;

	// 视锥半角
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f, ClampMax = 180.f), Category = "SAIBT")
	float SightHalfAngle = 45.f;

	// 视点向后偏移量
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f, ClampMax = 180.f), Category = "SAIBT")
	float BackwardOffset = 300.f;

	// 追击距离
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	float ChaseDistance = 1300.f;

	// 检测目标范围（将目标加入仇恨列表）
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	float CheckTargetRange = 600.f;

	// 有效范围（以出生点为中心的圆）
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	float EffectiveRadius = 3000.f;

	// 巡逻范围
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	float PatrolRange = 1500.f;

	// 攻击范围
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	float AttackRange = 220.f;

	// 韧性恢复时间
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	float ToughnessRecoverTime = 30.f;
};

// 仇恨值参数
USTRUCT(BlueprintType, Blueprintable)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FSAIBTThreatAttribute
{
	GENERATED_USTRUCT_BODY()

	// 仇恨值下降速度%X/s
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f, ClampMax = 1.f), Category = "SAIBT")
	float ThreatDropRate = 0.3f;

	// 仇恨下降值修正时间
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	float CorrectThreatDropValueTime = 3.f;

	// 仇恨基础总值
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	int32 ThreatBasicTotal = 10000;

	// 伤害仇恨占比
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f, ClampMax = 1.f), Category = "SAIBT")
	float DamageThreatRate = 0.7f;

	// 距离仇恨占比
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f, ClampMax = 1.f), Category = "SAIBT")
	float DistanceThreatRate = 0.3f;

	// 遗忘目标时间
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f), Category = "SAIBT")
	float ForgetTargetTime = 3.f;
};

USTRUCT(BlueprintType, Blueprintable)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FSAIBTLocomotionAttribute
{
	GENERATED_USTRUCT_BODY()

	// 跑步状态下的最大速度
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f), Category = "SAIBT")
	float MaxRunningSpeed = 500.f;

	// 走路状态下的最大速度
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f), Category = "SAIBT")
	float MaxWalkingSpeed = 300.f;
};

USTRUCT(BlueprintType, Blueprintable)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FSAIBTAttribute
{
	GENERATED_USTRUCT_BODY()

	// 战斗参数
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	FSAIBTBattleAttribute BattleAttribute;

	// 仇恨值参数
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	FSAIBTThreatAttribute ThreatAttribute;

	// 移动参数
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	FSAIBTLocomotionAttribute LocomotionAttribute;
};

USTRUCT(BlueprintType, Blueprintable)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FSAIBTSkillInfo
{
	GENERATED_USTRUCT_BODY()

	FSAIBTSkillInfo()
		:SkillID(INDEX_NONE)
		,SkillType(0)
	{}

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	int32 SkillID;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly)
	//EMMOARPGGameplayAbilityType SkillType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	uint8 SkillType;
};

USTRUCT(BlueprintType, Blueprintable)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FSingleBossStageInfo
{
	GENERATED_USTRUCT_BODY()

	// 触发阶段血量百分比
	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (ClampMin = 0.f, ClampMax = 1.f), Category = "SAIBT")
	float HpPercent = 0;

	// 技能组
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	TArray<FSAIBTSkillInfo> SkillGroup;

	// 是否需要遗忘已配置的技能（遗忘则清除所有原来配置的技能）
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	bool IsNeedClearAbility = false;

	// 阶段行为（可选）
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SAIBT")
	UBehaviorTree* StageBehavior = nullptr;
};

USTRUCT(BlueprintType, Blueprintable)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FSAIBTParameter
{
	GENERATED_USTRUCT_BODY()

	// Boss所属表的行ID
	UPROPERTY(EditAnywhere, Category = "SAIBT")
	int32 RowID = INDEX_NONE;

	// Boss位置
	UPROPERTY(EditAnywhere, Category = "SAIBT")
	FVector BossLocation;

	// Boss朝向
	UPROPERTY(EditAnywhere, Category = "SAIBT")
	FRotator BossRotation;
};


USTRUCT(BlueprintType, Blueprintable)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FRPCPlaySequenceParameter
{
	GENERATED_USTRUCT_BODY()

	// 动画序列资源
	UPROPERTY(EditAnywhere, Category = "SAIBT")
	TSoftObjectPtr<ULevelSequence> LevelSequenceAsset;

	// 广播中心
	UPROPERTY(EditAnywhere, Category = "SAIBT")
	FVector BroadcastCenter;

	// 广播范围
	UPROPERTY(EditAnywhere, meta = (ClampMax = 10000000.f), Category = "SAIBT")
	float BroadcastRange = 0.f;
};

USTRUCT(BlueprintType)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FMultiStageBossInfo
{
	GENERATED_USTRUCT_BODY()

	// 执行操作类别
	UPROPERTY(EditAnywhere, Category = "SAIBT")
	EMultiStageBossExecution ExecutionType;
	
	// Boss怪参数
	UPROPERTY(EditAnywhere, Category = "SAIBT",meta = (EditCondition = "ExecutionType == EMultiStageBossExecution::Execution_SpawnBoss"))
	FSAIBTParameter BossInfo;

	// 动画序列参数
	UPROPERTY(EditAnywhere, Category = "SAIBT", meta = (EditCondition = "ExecutionType == EMultiStageBossExecution::Execution_PlaySequence"))
	FRPCPlaySequenceParameter SequenceInfo;
};

USTRUCT(BlueprintType)
struct SIMPLEAIBEHAVIORTREEEXTEND_API FSpawnSingleAIActorInfo
{
	GENERATED_USTRUCT_BODY()

	// 表格行名称
	UPROPERTY(EditAnywhere, Category = "SAIBT")
	FName RowName;

	// 随机位置与朝向
	UPROPERTY(EditAnywhere, Category = "SAIBT")
	bool IsRandLocationAndRotation = false;

	// AI生成位置
	UPROPERTY(EditAnywhere, Category = "SAIBT", meta = (EditCondition = "IsRandomLocationAndRotation == false"))
	FVector SpawnLocation;

	// AI生成朝向
	UPROPERTY(EditAnywhere, Category = "SAIBT", meta = (EditCondition = "IsRandomLocationAndRotation == false"))
	FRotator SpawnRotation;

	// 随机范围的中心点
	UPROPERTY(EditAnywhere, Category = "SAIBT", meta = (EditCondition = "IsRandomLocationAndRotation == true"))
	FVector CenterLocation;

	// 随机范围
	UPROPERTY(EditAnywhere, Category = "SAIBT", meta = (EditCondition = "IsRandomLocationAndRotation == true"))
	float RandRange = 0.f;
};