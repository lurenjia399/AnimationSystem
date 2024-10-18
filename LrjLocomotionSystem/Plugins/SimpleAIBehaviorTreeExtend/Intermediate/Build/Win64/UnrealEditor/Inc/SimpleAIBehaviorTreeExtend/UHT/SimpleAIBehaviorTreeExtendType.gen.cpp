// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAIBehaviorTreeExtend/Public/SimpleAIBehaviorTreeExtendType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleAIBehaviorTreeExtendType() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection();
SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FMultiStageBossInfo();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FRPCPlaySequenceParameter();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSAIBTAttribute();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSAIBTBattleAttribute();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSAIBTParameter();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSAIBTSkillInfo();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSAIBTThreatAttribute();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSingleBossStageInfo();
SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo();
UPackage* Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend();
// End Cross Module References

// Begin Enum ESimpleTargetDirection
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleTargetDirection;
static UEnum* ESimpleTargetDirection_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimpleTargetDirection.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimpleTargetDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("ESimpleTargetDirection"));
	}
	return Z_Registration_Info_UEnum_ESimpleTargetDirection.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ESimpleTargetDirection>()
{
	return ESimpleTargetDirection_StaticEnum();
}
struct Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Backward.Comment", "//1\n// \xe5\x90\x8e\n" },
		{ "Backward.DisplayName", "Backward" },
		{ "Backward.Name", "ESimpleTargetDirection::Backward" },
		{ "Backward.ToolTip", "1\n \xe5\x90\x8e" },
		{ "BlueprintType", "true" },
		{ "DIRECTION_NONE.DisplayName", "None" },
		{ "DIRECTION_NONE.Name", "ESimpleTargetDirection::DIRECTION_NONE" },
		{ "Forward.Comment", "// \xe5\x89\x8d\n" },
		{ "Forward.DisplayName", "Forward" },
		{ "Forward.Name", "ESimpleTargetDirection::Forward" },
		{ "Forward.ToolTip", "\xe5\x89\x8d" },
		{ "Left.Comment", "//2\n// \xe5\xb7\xa6\n" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "ESimpleTargetDirection::Left" },
		{ "Left.ToolTip", "2\n \xe5\xb7\xa6" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
		{ "Right.Comment", "//3\n// \xe5\x8f\xb3\n" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "ESimpleTargetDirection::Right" },
		{ "Right.ToolTip", "3\n \xe5\x8f\xb3" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimpleTargetDirection::DIRECTION_NONE", (int64)ESimpleTargetDirection::DIRECTION_NONE },
		{ "ESimpleTargetDirection::Forward", (int64)ESimpleTargetDirection::Forward },
		{ "ESimpleTargetDirection::Backward", (int64)ESimpleTargetDirection::Backward },
		{ "ESimpleTargetDirection::Left", (int64)ESimpleTargetDirection::Left },
		{ "ESimpleTargetDirection::Right", (int64)ESimpleTargetDirection::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	"ESimpleTargetDirection",
	"ESimpleTargetDirection",
	Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection()
{
	if (!Z_Registration_Info_UEnum_ESimpleTargetDirection.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleTargetDirection.InnerSingleton, Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESimpleTargetDirection_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimpleTargetDirection.InnerSingleton;
}
// End Enum ESimpleTargetDirection

// Begin Enum EThreatType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EThreatType;
static UEnum* EThreatType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EThreatType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EThreatType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("EThreatType"));
	}
	return Z_Registration_Info_UEnum_EThreatType.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<EThreatType>()
{
	return EThreatType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
		{ "TT_Damage.Comment", "// \xe4\xbc\xa4\xe5\xae\xb3\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "TT_Damage.DisplayName", "Damage" },
		{ "TT_Damage.Name", "EThreatType::TT_Damage" },
		{ "TT_Damage.ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "TT_Distance.Comment", "// \xe8\xb7\x9d\xe7\xa6\xbb\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "TT_Distance.DisplayName", "Distance" },
		{ "TT_Distance.Name", "EThreatType::TT_Distance" },
		{ "TT_Distance.ToolTip", "\xe8\xb7\x9d\xe7\xa6\xbb\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "TT_None.Hidden", "" },
		{ "TT_None.Name", "EThreatType::TT_None" },
		{ "TT_Others.Comment", "// \xe5\x85\xb6\xe4\xbb\x96\xe7\xb1\xbb\xe5\x9e\x8b\n" },
		{ "TT_Others.DisplayName", "Others" },
		{ "TT_Others.Name", "EThreatType::TT_Others" },
		{ "TT_Others.ToolTip", "\xe5\x85\xb6\xe4\xbb\x96\xe7\xb1\xbb\xe5\x9e\x8b" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EThreatType::TT_Damage", (int64)EThreatType::TT_Damage },
		{ "EThreatType::TT_Distance", (int64)EThreatType::TT_Distance },
		{ "EThreatType::TT_Others", (int64)EThreatType::TT_Others },
		{ "EThreatType::TT_None", (int64)EThreatType::TT_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	"EThreatType",
	"EThreatType",
	Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType()
{
	if (!Z_Registration_Info_UEnum_EThreatType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EThreatType.InnerSingleton, Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EThreatType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EThreatType.InnerSingleton;
}
// End Enum EThreatType

// Begin Enum ESAIBTState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESAIBTState;
static UEnum* ESAIBTState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESAIBTState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESAIBTState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("ESAIBTState"));
	}
	return Z_Registration_Info_UEnum_ESAIBTState.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ESAIBTState>()
{
	return ESAIBTState_StaticEnum();
}
struct Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
		{ "MS_Alert.Comment", "// \xe8\xad\xa6\xe6\x83\x95\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "MS_Alert.DisplayName", "Alert" },
		{ "MS_Alert.Name", "ESAIBTState::MS_Alert" },
		{ "MS_Alert.ToolTip", "\xe8\xad\xa6\xe6\x83\x95\xe7\x8a\xb6\xe6\x80\x81" },
		{ "MS_Battle.Comment", "// \xe6\x88\x98\xe6\x96\x97\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "MS_Battle.DisplayName", "Battle" },
		{ "MS_Battle.Name", "ESAIBTState::MS_Battle" },
		{ "MS_Battle.ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe7\x8a\xb6\xe6\x80\x81" },
		{ "MS_Leisure.Comment", "// \xe4\xbc\x91\xe9\x97\xb2\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "MS_Leisure.DisplayName", "Leisure" },
		{ "MS_Leisure.Name", "ESAIBTState::MS_Leisure" },
		{ "MS_Leisure.ToolTip", "\xe4\xbc\x91\xe9\x97\xb2\xe7\x8a\xb6\xe6\x80\x81" },
		{ "MS_None.Hidden", "" },
		{ "MS_None.Name", "ESAIBTState::MS_None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESAIBTState::MS_Leisure", (int64)ESAIBTState::MS_Leisure },
		{ "ESAIBTState::MS_Alert", (int64)ESAIBTState::MS_Alert },
		{ "ESAIBTState::MS_Battle", (int64)ESAIBTState::MS_Battle },
		{ "ESAIBTState::MS_None", (int64)ESAIBTState::MS_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	"ESAIBTState",
	"ESAIBTState",
	Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState()
{
	if (!Z_Registration_Info_UEnum_ESAIBTState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESAIBTState.InnerSingleton, Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESAIBTState.InnerSingleton;
}
// End Enum ESAIBTState

// Begin Enum ESAIBTDistanceType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESAIBTDistanceType;
static UEnum* ESAIBTDistanceType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESAIBTDistanceType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESAIBTDistanceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("ESAIBTDistanceType"));
	}
	return Z_Registration_Info_UEnum_ESAIBTDistanceType.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ESAIBTDistanceType>()
{
	return ESAIBTDistanceType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DT_AttackRange.Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe8\xb7\x9d\xe7\xa6\xbb\n" },
		{ "DT_AttackRange.DisplayName", "AttackRange" },
		{ "DT_AttackRange.Name", "ESAIBTDistanceType::DT_AttackRange" },
		{ "DT_AttackRange.ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe8\xb7\x9d\xe7\xa6\xbb" },
		{ "DT_ChaseRange.Comment", "// \xe8\xbf\xbd\xe5\x87\xbb\xe8\xb7\x9d\xe7\xa6\xbb\n" },
		{ "DT_ChaseRange.DisplayName", "ChaseRange" },
		{ "DT_ChaseRange.Name", "ESAIBTDistanceType::DT_ChaseRange" },
		{ "DT_ChaseRange.ToolTip", "\xe8\xbf\xbd\xe5\x87\xbb\xe8\xb7\x9d\xe7\xa6\xbb" },
		{ "DT_EffectiveRange.Comment", "// \xe6\x9c\x89\xe6\x95\x88\xe8\xb7\x9d\xe7\xa6\xbb\n" },
		{ "DT_EffectiveRange.DisplayName", "EffectiveRange" },
		{ "DT_EffectiveRange.Name", "ESAIBTDistanceType::DT_EffectiveRange" },
		{ "DT_EffectiveRange.ToolTip", "\xe6\x9c\x89\xe6\x95\x88\xe8\xb7\x9d\xe7\xa6\xbb" },
		{ "DT_SightRange.Comment", "// \xe8\xa7\x86\xe9\x87\x8e\xe8\xb7\x9d\xe7\xa6\xbb\n" },
		{ "DT_SightRange.DisplayName", "SightRange" },
		{ "DT_SightRange.Name", "ESAIBTDistanceType::DT_SightRange" },
		{ "DT_SightRange.ToolTip", "\xe8\xa7\x86\xe9\x87\x8e\xe8\xb7\x9d\xe7\xa6\xbb" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESAIBTDistanceType::DT_SightRange", (int64)ESAIBTDistanceType::DT_SightRange },
		{ "ESAIBTDistanceType::DT_AttackRange", (int64)ESAIBTDistanceType::DT_AttackRange },
		{ "ESAIBTDistanceType::DT_EffectiveRange", (int64)ESAIBTDistanceType::DT_EffectiveRange },
		{ "ESAIBTDistanceType::DT_ChaseRange", (int64)ESAIBTDistanceType::DT_ChaseRange },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	"ESAIBTDistanceType",
	"ESAIBTDistanceType",
	Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType()
{
	if (!Z_Registration_Info_UEnum_ESAIBTDistanceType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESAIBTDistanceType.InnerSingleton, Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTDistanceType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESAIBTDistanceType.InnerSingleton;
}
// End Enum ESAIBTDistanceType

// Begin Enum ESAIBTLocomotionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESAIBTLocomotionState;
static UEnum* ESAIBTLocomotionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESAIBTLocomotionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESAIBTLocomotionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("ESAIBTLocomotionState"));
	}
	return Z_Registration_Info_UEnum_ESAIBTLocomotionState.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ESAIBTLocomotionState>()
{
	return ESAIBTLocomotionState_StaticEnum();
}
struct Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "LS_Run.Comment", "// \xe8\xa1\x8c\xe8\xb5\xb0\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "LS_Run.DisplayName", "Run" },
		{ "LS_Run.Name", "ESAIBTLocomotionState::LS_Run" },
		{ "LS_Run.ToolTip", "\xe8\xa1\x8c\xe8\xb5\xb0\xe7\x8a\xb6\xe6\x80\x81" },
		{ "LS_Walk.Comment", "// \xe8\xb7\x91\xe6\xad\xa5\xe7\x8a\xb6\xe6\x80\x81\n" },
		{ "LS_Walk.DisplayName", "Walk" },
		{ "LS_Walk.Name", "ESAIBTLocomotionState::LS_Walk" },
		{ "LS_Walk.ToolTip", "\xe8\xb7\x91\xe6\xad\xa5\xe7\x8a\xb6\xe6\x80\x81" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESAIBTLocomotionState::LS_Run", (int64)ESAIBTLocomotionState::LS_Run },
		{ "ESAIBTLocomotionState::LS_Walk", (int64)ESAIBTLocomotionState::LS_Walk },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	"ESAIBTLocomotionState",
	"ESAIBTLocomotionState",
	Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState()
{
	if (!Z_Registration_Info_UEnum_ESAIBTLocomotionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESAIBTLocomotionState.InnerSingleton, Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ESAIBTLocomotionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESAIBTLocomotionState.InnerSingleton;
}
// End Enum ESAIBTLocomotionState

// Begin Enum EMultiStageBossExecution
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultiStageBossExecution;
static UEnum* EMultiStageBossExecution_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMultiStageBossExecution.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMultiStageBossExecution.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("EMultiStageBossExecution"));
	}
	return Z_Registration_Info_UEnum_EMultiStageBossExecution.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<EMultiStageBossExecution>()
{
	return EMultiStageBossExecution_StaticEnum();
}
struct Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Execution_PlaySequence.Comment", "// \xe6\x92\xad\xe6\x94\xbeSequence\n" },
		{ "Execution_PlaySequence.DisplayName", "Play Sequence" },
		{ "Execution_PlaySequence.Name", "EMultiStageBossExecution::Execution_PlaySequence" },
		{ "Execution_PlaySequence.ToolTip", "\xe6\x92\xad\xe6\x94\xbeSequence" },
		{ "Execution_SpawnBoss.Comment", "// \xe7\x94\x9f\xe6\x88\x90""Boss\n" },
		{ "Execution_SpawnBoss.DisplayName", "Spawn Boss" },
		{ "Execution_SpawnBoss.Name", "EMultiStageBossExecution::Execution_SpawnBoss" },
		{ "Execution_SpawnBoss.ToolTip", "\xe7\x94\x9f\xe6\x88\x90""Boss" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMultiStageBossExecution::Execution_SpawnBoss", (int64)EMultiStageBossExecution::Execution_SpawnBoss },
		{ "EMultiStageBossExecution::Execution_PlaySequence", (int64)EMultiStageBossExecution::Execution_PlaySequence },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	"EMultiStageBossExecution",
	"EMultiStageBossExecution",
	Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution()
{
	if (!Z_Registration_Info_UEnum_EMultiStageBossExecution.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultiStageBossExecution.InnerSingleton, Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMultiStageBossExecution.InnerSingleton;
}
// End Enum EMultiStageBossExecution

// Begin Enum ECharacterType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECharacterType;
static UEnum* ECharacterType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ECharacterType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ECharacterType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("ECharacterType"));
	}
	return Z_Registration_Info_UEnum_ECharacterType.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UEnum* StaticEnum<ECharacterType>()
{
	return ECharacterType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CHARACTER_BOSS.Comment", "//16424~30000\x09//\xe5\xb0\x8f\xe6\x80\xaa\n" },
		{ "CHARACTER_BOSS.DisplayName", "Boss" },
		{ "CHARACTER_BOSS.Name", "ECharacterType::CHARACTER_BOSS" },
		{ "CHARACTER_BOSS.ToolTip", "16424~30000     \xe5\xb0\x8f\xe6\x80\xaa" },
		{ "CHARACTER_MONSTER.Comment", "//8120 ~ 16423 //\xe5\xae\x88\xe5\x8d\xab\xe8\x80\x85\n" },
		{ "CHARACTER_MONSTER.DisplayName", "Monster" },
		{ "CHARACTER_MONSTER.Name", "ECharacterType::CHARACTER_MONSTER" },
		{ "CHARACTER_MONSTER.ToolTip", "8120 ~ 16423 \xe5\xae\x88\xe5\x8d\xab\xe8\x80\x85" },
		{ "CHARACTER_NONE.DisplayName", "None" },
		{ "CHARACTER_NONE.Name", "ECharacterType::CHARACTER_NONE" },
		{ "CHARACTER_NPC_GUARDIAN.Comment", "//4097 ~ 8119 //\xe5\xb1\x85\xe6\xb0\x91\n" },
		{ "CHARACTER_NPC_GUARDIAN.DisplayName", "Guardian" },
		{ "CHARACTER_NPC_GUARDIAN.Name", "ECharacterType::CHARACTER_NPC_GUARDIAN" },
		{ "CHARACTER_NPC_GUARDIAN.ToolTip", "4097 ~ 8119 \xe5\xb1\x85\xe6\xb0\x91" },
		{ "CHARACTER_NPC_RESIDENT.Comment", "//2 ~ 4096 //\xe9\x85\x8d\xe8\xa7\x92\n" },
		{ "CHARACTER_NPC_RESIDENT.DisplayName", "Resident" },
		{ "CHARACTER_NPC_RESIDENT.Name", "ECharacterType::CHARACTER_NPC_RESIDENT" },
		{ "CHARACTER_NPC_RESIDENT.ToolTip", "2 ~ 4096 \xe9\x85\x8d\xe8\xa7\x92" },
		{ "CHARACTER_PARTNER.Comment", "//1 \xe4\xb8\xbb\xe8\xa7\x92\n" },
		{ "CHARACTER_PARTNER.DisplayName", "Partner" },
		{ "CHARACTER_PARTNER.Name", "ECharacterType::CHARACTER_PARTNER" },
		{ "CHARACTER_PARTNER.ToolTip", "1 \xe4\xb8\xbb\xe8\xa7\x92" },
		{ "CHARACTER_PLAYER_MAIN.Comment", "//1 \xe4\xb8\xbb\xe8\xa7\x92\n" },
		{ "CHARACTER_PLAYER_MAIN.DisplayName", "Lead" },
		{ "CHARACTER_PLAYER_MAIN.Name", "ECharacterType::CHARACTER_PLAYER_MAIN" },
		{ "CHARACTER_PLAYER_MAIN.ToolTip", "1 \xe4\xb8\xbb\xe8\xa7\x92" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ECharacterType::CHARACTER_NONE", (int64)ECharacterType::CHARACTER_NONE },
		{ "ECharacterType::CHARACTER_PLAYER_MAIN", (int64)ECharacterType::CHARACTER_PLAYER_MAIN },
		{ "ECharacterType::CHARACTER_PARTNER", (int64)ECharacterType::CHARACTER_PARTNER },
		{ "ECharacterType::CHARACTER_NPC_RESIDENT", (int64)ECharacterType::CHARACTER_NPC_RESIDENT },
		{ "ECharacterType::CHARACTER_NPC_GUARDIAN", (int64)ECharacterType::CHARACTER_NPC_GUARDIAN },
		{ "ECharacterType::CHARACTER_MONSTER", (int64)ECharacterType::CHARACTER_MONSTER },
		{ "ECharacterType::CHARACTER_BOSS", (int64)ECharacterType::CHARACTER_BOSS },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	"ECharacterType",
	"ECharacterType",
	Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType()
{
	if (!Z_Registration_Info_UEnum_ECharacterType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECharacterType.InnerSingleton, Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_ECharacterType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ECharacterType.InnerSingleton;
}
// End Enum ECharacterType

// Begin ScriptStruct FSAIBTBattleAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SAIBTBattleAttribute;
class UScriptStruct* FSAIBTBattleAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTBattleAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SAIBTBattleAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAIBTBattleAttribute, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("SAIBTBattleAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_SAIBTBattleAttribute.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FSAIBTBattleAttribute>()
{
	return FSAIBTBattleAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x88\x98\xe6\x96\x97\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightDistance_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\x86\xe9\x87\x8e\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe9\x87\x8e\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SightHalfAngle_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\x86\xe9\x94\xa5\xe5\x8d\x8a\xe8\xa7\x92\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe9\x94\xa5\xe5\x8d\x8a\xe8\xa7\x92" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardOffset_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMax", "180.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\x86\xe7\x82\xb9\xe5\x90\x91\xe5\x90\x8e\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\x86\xe7\x82\xb9\xe5\x90\x91\xe5\x90\x8e\xe5\x81\x8f\xe7\xa7\xbb\xe9\x87\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseDistance_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xbf\xbd\xe5\x87\xbb\xe8\xb7\x9d\xe7\xa6\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\xbd\xe5\x87\xbb\xe8\xb7\x9d\xe7\xa6\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CheckTargetRange_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\xa3\x80\xe6\xb5\x8b\xe7\x9b\xae\xe6\xa0\x87\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x88\xe5\xb0\x86\xe7\x9b\xae\xe6\xa0\x87\xe5\x8a\xa0\xe5\x85\xa5\xe4\xbb\x87\xe6\x81\xa8\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9b\xae\xe6\xa0\x87\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x88\xe5\xb0\x86\xe7\x9b\xae\xe6\xa0\x87\xe5\x8a\xa0\xe5\x85\xa5\xe4\xbb\x87\xe6\x81\xa8\xe5\x88\x97\xe8\xa1\xa8\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectiveRadius_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x9c\x89\xe6\x95\x88\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x88\xe4\xbb\xa5\xe5\x87\xba\xe7\x94\x9f\xe7\x82\xb9\xe4\xb8\xba\xe4\xb8\xad\xe5\xbf\x83\xe7\x9a\x84\xe5\x9c\x86\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9c\x89\xe6\x95\x88\xe8\x8c\x83\xe5\x9b\xb4\xef\xbc\x88\xe4\xbb\xa5\xe5\x87\xba\xe7\x94\x9f\xe7\x82\xb9\xe4\xb8\xba\xe4\xb8\xad\xe5\xbf\x83\xe7\x9a\x84\xe5\x9c\x86\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolRange_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb7\xa1\xe9\x80\xbb\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb7\xa1\xe9\x80\xbb\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x94\xbb\xe5\x87\xbb\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x94\xbb\xe5\x87\xbb\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToughnessRecoverTime_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9f\xa7\xe6\x80\xa7\xe6\x81\xa2\xe5\xa4\x8d\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9f\xa7\xe6\x80\xa7\xe6\x81\xa2\xe5\xa4\x8d\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SightHalfAngle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardOffset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CheckTargetRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EffectiveRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ToughnessRecoverTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAIBTBattleAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_SightDistance = { "SightDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, SightDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightDistance_MetaData), NewProp_SightDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_SightHalfAngle = { "SightHalfAngle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, SightHalfAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SightHalfAngle_MetaData), NewProp_SightHalfAngle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_BackwardOffset = { "BackwardOffset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, BackwardOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardOffset_MetaData), NewProp_BackwardOffset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_ChaseDistance = { "ChaseDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, ChaseDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseDistance_MetaData), NewProp_ChaseDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_CheckTargetRange = { "CheckTargetRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, CheckTargetRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CheckTargetRange_MetaData), NewProp_CheckTargetRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_EffectiveRadius = { "EffectiveRadius", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, EffectiveRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectiveRadius_MetaData), NewProp_EffectiveRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_PatrolRange = { "PatrolRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, PatrolRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolRange_MetaData), NewProp_PatrolRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, AttackRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackRange_MetaData), NewProp_AttackRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_ToughnessRecoverTime = { "ToughnessRecoverTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTBattleAttribute, ToughnessRecoverTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToughnessRecoverTime_MetaData), NewProp_ToughnessRecoverTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_SightDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_SightHalfAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_BackwardOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_ChaseDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_CheckTargetRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_EffectiveRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_PatrolRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_AttackRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewProp_ToughnessRecoverTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"SAIBTBattleAttribute",
	Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::PropPointers),
	sizeof(FSAIBTBattleAttribute),
	alignof(FSAIBTBattleAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSAIBTBattleAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTBattleAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SAIBTBattleAttribute.InnerSingleton, Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SAIBTBattleAttribute.InnerSingleton;
}
// End ScriptStruct FSAIBTBattleAttribute

// Begin ScriptStruct FSAIBTThreatAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SAIBTThreatAttribute;
class UScriptStruct* FSAIBTThreatAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTThreatAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SAIBTThreatAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAIBTThreatAttribute, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("SAIBTThreatAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_SAIBTThreatAttribute.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FSAIBTThreatAttribute>()
{
	return FSAIBTThreatAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x87\xe6\x81\xa8\xe5\x80\xbc\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x87\xe6\x81\xa8\xe5\x80\xbc\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreatDropRate_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x87\xe6\x81\xa8\xe5\x80\xbc\xe4\xb8\x8b\xe9\x99\x8d\xe9\x80\x9f\xe5\xba\xa6%X/s\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x87\xe6\x81\xa8\xe5\x80\xbc\xe4\xb8\x8b\xe9\x99\x8d\xe9\x80\x9f\xe5\xba\xa6%X/s" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CorrectThreatDropValueTime_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x87\xe6\x81\xa8\xe4\xb8\x8b\xe9\x99\x8d\xe5\x80\xbc\xe4\xbf\xae\xe6\xad\xa3\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x87\xe6\x81\xa8\xe4\xb8\x8b\xe9\x99\x8d\xe5\x80\xbc\xe4\xbf\xae\xe6\xad\xa3\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreatBasicTotal_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x87\xe6\x81\xa8\xe5\x9f\xba\xe7\xa1\x80\xe6\x80\xbb\xe5\x80\xbc\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x87\xe6\x81\xa8\xe5\x9f\xba\xe7\xa1\x80\xe6\x80\xbb\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageThreatRate_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbc\xa4\xe5\xae\xb3\xe4\xbb\x87\xe6\x81\xa8\xe5\x8d\xa0\xe6\xaf\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbc\xa4\xe5\xae\xb3\xe4\xbb\x87\xe6\x81\xa8\xe5\x8d\xa0\xe6\xaf\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceThreatRate_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb7\x9d\xe7\xa6\xbb\xe4\xbb\x87\xe6\x81\xa8\xe5\x8d\xa0\xe6\xaf\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb7\x9d\xe7\xa6\xbb\xe4\xbb\x87\xe6\x81\xa8\xe5\x8d\xa0\xe6\xaf\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForgetTargetTime_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x81\x97\xe5\xbf\x98\xe7\x9b\xae\xe6\xa0\x87\xe6\x97\xb6\xe9\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x81\x97\xe5\xbf\x98\xe7\x9b\xae\xe6\xa0\x87\xe6\x97\xb6\xe9\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThreatDropRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CorrectThreatDropValueTime;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ThreatBasicTotal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageThreatRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceThreatRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForgetTargetTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAIBTThreatAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_ThreatDropRate = { "ThreatDropRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTThreatAttribute, ThreatDropRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreatDropRate_MetaData), NewProp_ThreatDropRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_CorrectThreatDropValueTime = { "CorrectThreatDropValueTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTThreatAttribute, CorrectThreatDropValueTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CorrectThreatDropValueTime_MetaData), NewProp_CorrectThreatDropValueTime_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_ThreatBasicTotal = { "ThreatBasicTotal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTThreatAttribute, ThreatBasicTotal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreatBasicTotal_MetaData), NewProp_ThreatBasicTotal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_DamageThreatRate = { "DamageThreatRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTThreatAttribute, DamageThreatRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageThreatRate_MetaData), NewProp_DamageThreatRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_DistanceThreatRate = { "DistanceThreatRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTThreatAttribute, DistanceThreatRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceThreatRate_MetaData), NewProp_DistanceThreatRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_ForgetTargetTime = { "ForgetTargetTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTThreatAttribute, ForgetTargetTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForgetTargetTime_MetaData), NewProp_ForgetTargetTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_ThreatDropRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_CorrectThreatDropValueTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_ThreatBasicTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_DamageThreatRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_DistanceThreatRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewProp_ForgetTargetTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"SAIBTThreatAttribute",
	Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::PropPointers),
	sizeof(FSAIBTThreatAttribute),
	alignof(FSAIBTThreatAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSAIBTThreatAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTThreatAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SAIBTThreatAttribute.InnerSingleton, Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SAIBTThreatAttribute.InnerSingleton;
}
// End ScriptStruct FSAIBTThreatAttribute

// Begin ScriptStruct FSAIBTLocomotionAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SAIBTLocomotionAttribute;
class UScriptStruct* FSAIBTLocomotionAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTLocomotionAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SAIBTLocomotionAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("SAIBTLocomotionAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_SAIBTLocomotionAttribute.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FSAIBTLocomotionAttribute>()
{
	return FSAIBTLocomotionAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRunningSpeed_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb7\x91\xe6\xad\xa5\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x8b\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb7\x91\xe6\xad\xa5\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x8b\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxWalkingSpeed_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xb5\xb0\xe8\xb7\xaf\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x8b\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe9\x80\x9f\xe5\xba\xa6\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xb5\xb0\xe8\xb7\xaf\xe7\x8a\xb6\xe6\x80\x81\xe4\xb8\x8b\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe9\x80\x9f\xe5\xba\xa6" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxRunningSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxWalkingSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAIBTLocomotionAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::NewProp_MaxRunningSpeed = { "MaxRunningSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTLocomotionAttribute, MaxRunningSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRunningSpeed_MetaData), NewProp_MaxRunningSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::NewProp_MaxWalkingSpeed = { "MaxWalkingSpeed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTLocomotionAttribute, MaxWalkingSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxWalkingSpeed_MetaData), NewProp_MaxWalkingSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::NewProp_MaxRunningSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::NewProp_MaxWalkingSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"SAIBTLocomotionAttribute",
	Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::PropPointers),
	sizeof(FSAIBTLocomotionAttribute),
	alignof(FSAIBTLocomotionAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTLocomotionAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SAIBTLocomotionAttribute.InnerSingleton, Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SAIBTLocomotionAttribute.InnerSingleton;
}
// End ScriptStruct FSAIBTLocomotionAttribute

// Begin ScriptStruct FSAIBTAttribute
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SAIBTAttribute;
class UScriptStruct* FSAIBTAttribute::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTAttribute.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SAIBTAttribute.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAIBTAttribute, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("SAIBTAttribute"));
	}
	return Z_Registration_Info_UScriptStruct_SAIBTAttribute.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FSAIBTAttribute>()
{
	return FSAIBTAttribute::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSAIBTAttribute_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BattleAttribute_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x88\x98\xe6\x96\x97\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x98\xe6\x96\x97\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThreatAttribute_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe4\xbb\x87\xe6\x81\xa8\xe5\x80\xbc\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x87\xe6\x81\xa8\xe5\x80\xbc\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocomotionAttribute_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa7\xbb\xe5\x8a\xa8\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_BattleAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ThreatAttribute;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocomotionAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAIBTAttribute>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::NewProp_BattleAttribute = { "BattleAttribute", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTAttribute, BattleAttribute), Z_Construct_UScriptStruct_FSAIBTBattleAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BattleAttribute_MetaData), NewProp_BattleAttribute_MetaData) }; // 443805610
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::NewProp_ThreatAttribute = { "ThreatAttribute", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTAttribute, ThreatAttribute), Z_Construct_UScriptStruct_FSAIBTThreatAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThreatAttribute_MetaData), NewProp_ThreatAttribute_MetaData) }; // 1900694548
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::NewProp_LocomotionAttribute = { "LocomotionAttribute", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTAttribute, LocomotionAttribute), Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocomotionAttribute_MetaData), NewProp_LocomotionAttribute_MetaData) }; // 2219767533
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::NewProp_BattleAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::NewProp_ThreatAttribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::NewProp_LocomotionAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"SAIBTAttribute",
	Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::PropPointers),
	sizeof(FSAIBTAttribute),
	alignof(FSAIBTAttribute),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSAIBTAttribute()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTAttribute.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SAIBTAttribute.InnerSingleton, Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SAIBTAttribute.InnerSingleton;
}
// End ScriptStruct FSAIBTAttribute

// Begin ScriptStruct FSAIBTSkillInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SAIBTSkillInfo;
class UScriptStruct* FSAIBTSkillInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTSkillInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SAIBTSkillInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAIBTSkillInfo, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("SAIBTSkillInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SAIBTSkillInfo.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FSAIBTSkillInfo>()
{
	return FSAIBTSkillInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillID_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillType_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadOnly)\n//EMMOARPGGameplayAbilityType SkillType;\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadOnly)\nEMMOARPGGameplayAbilityType SkillType;" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_SkillID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SkillType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAIBTSkillInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::NewProp_SkillID = { "SkillID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTSkillInfo, SkillID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillID_MetaData), NewProp_SkillID_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::NewProp_SkillType = { "SkillType", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTSkillInfo, SkillType), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillType_MetaData), NewProp_SkillType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::NewProp_SkillID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::NewProp_SkillType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"SAIBTSkillInfo",
	Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::PropPointers),
	sizeof(FSAIBTSkillInfo),
	alignof(FSAIBTSkillInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSAIBTSkillInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTSkillInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SAIBTSkillInfo.InnerSingleton, Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SAIBTSkillInfo.InnerSingleton;
}
// End ScriptStruct FSAIBTSkillInfo

// Begin ScriptStruct FSingleBossStageInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SingleBossStageInfo;
class UScriptStruct* FSingleBossStageInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SingleBossStageInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SingleBossStageInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSingleBossStageInfo, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("SingleBossStageInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SingleBossStageInfo.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FSingleBossStageInfo>()
{
	return FSingleBossStageInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HpPercent_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa7\xa6\xe5\x8f\x91\xe9\x98\xb6\xe6\xae\xb5\xe8\xa1\x80\xe9\x87\x8f\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa7\xa6\xe5\x8f\x91\xe9\x98\xb6\xe6\xae\xb5\xe8\xa1\x80\xe9\x87\x8f\xe7\x99\xbe\xe5\x88\x86\xe6\xaf\x94" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkillGroup_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x8a\x80\xe8\x83\xbd\xe7\xbb\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x80\xe8\x83\xbd\xe7\xbb\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsNeedClearAbility_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x81\x97\xe5\xbf\x98\xe5\xb7\xb2\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xef\xbc\x88\xe9\x81\x97\xe5\xbf\x98\xe5\x88\x99\xe6\xb8\x85\xe9\x99\xa4\xe6\x89\x80\xe6\x9c\x89\xe5\x8e\x9f\xe6\x9d\xa5\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe9\x9c\x80\xe8\xa6\x81\xe9\x81\x97\xe5\xbf\x98\xe5\xb7\xb2\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xef\xbc\x88\xe9\x81\x97\xe5\xbf\x98\xe5\x88\x99\xe6\xb8\x85\xe9\x99\xa4\xe6\x89\x80\xe6\x9c\x89\xe5\x8e\x9f\xe6\x9d\xa5\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe6\x8a\x80\xe8\x83\xbd\xef\xbc\x89" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StageBehavior_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x98\xb6\xe6\xae\xb5\xe8\xa1\x8c\xe4\xb8\xba\xef\xbc\x88\xe5\x8f\xaf\xe9\x80\x89\xef\xbc\x89\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\xb6\xe6\xae\xb5\xe8\xa1\x8c\xe4\xb8\xba\xef\xbc\x88\xe5\x8f\xaf\xe9\x80\x89\xef\xbc\x89" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HpPercent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SkillGroup_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SkillGroup;
	static void NewProp_IsNeedClearAbility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsNeedClearAbility;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StageBehavior;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSingleBossStageInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_HpPercent = { "HpPercent", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleBossStageInfo, HpPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HpPercent_MetaData), NewProp_HpPercent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_SkillGroup_Inner = { "SkillGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSAIBTSkillInfo, METADATA_PARAMS(0, nullptr) }; // 163409242
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_SkillGroup = { "SkillGroup", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleBossStageInfo, SkillGroup), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkillGroup_MetaData), NewProp_SkillGroup_MetaData) }; // 163409242
void Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_IsNeedClearAbility_SetBit(void* Obj)
{
	((FSingleBossStageInfo*)Obj)->IsNeedClearAbility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_IsNeedClearAbility = { "IsNeedClearAbility", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSingleBossStageInfo), &Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_IsNeedClearAbility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsNeedClearAbility_MetaData), NewProp_IsNeedClearAbility_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_StageBehavior = { "StageBehavior", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSingleBossStageInfo, StageBehavior), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StageBehavior_MetaData), NewProp_StageBehavior_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_HpPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_SkillGroup_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_SkillGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_IsNeedClearAbility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewProp_StageBehavior,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"SingleBossStageInfo",
	Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::PropPointers),
	sizeof(FSingleBossStageInfo),
	alignof(FSingleBossStageInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSingleBossStageInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SingleBossStageInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SingleBossStageInfo.InnerSingleton, Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SingleBossStageInfo.InnerSingleton;
}
// End ScriptStruct FSingleBossStageInfo

// Begin ScriptStruct FSAIBTParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SAIBTParameter;
class UScriptStruct* FSAIBTParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SAIBTParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSAIBTParameter, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("SAIBTParameter"));
	}
	return Z_Registration_Info_UScriptStruct_SAIBTParameter.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FSAIBTParameter>()
{
	return FSAIBTParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSAIBTParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowID_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Boss\xe6\x89\x80\xe5\xb1\x9e\xe8\xa1\xa8\xe7\x9a\x84\xe8\xa1\x8cID\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boss\xe6\x89\x80\xe5\xb1\x9e\xe8\xa1\xa8\xe7\x9a\x84\xe8\xa1\x8cID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossLocation_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Boss\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boss\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossRotation_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Boss\xe6\x9c\x9d\xe5\x90\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boss\xe6\x9c\x9d\xe5\x90\x91" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_RowID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BossLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BossRotation;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSAIBTParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSAIBTParameter_Statics::NewProp_RowID = { "RowID", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTParameter, RowID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowID_MetaData), NewProp_RowID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAIBTParameter_Statics::NewProp_BossLocation = { "BossLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTParameter, BossLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossLocation_MetaData), NewProp_BossLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSAIBTParameter_Statics::NewProp_BossRotation = { "BossRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSAIBTParameter, BossRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossRotation_MetaData), NewProp_BossRotation_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSAIBTParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTParameter_Statics::NewProp_RowID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTParameter_Statics::NewProp_BossLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSAIBTParameter_Statics::NewProp_BossRotation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSAIBTParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"SAIBTParameter",
	Z_Construct_UScriptStruct_FSAIBTParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTParameter_Statics::PropPointers),
	sizeof(FSAIBTParameter),
	alignof(FSAIBTParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSAIBTParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSAIBTParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSAIBTParameter()
{
	if (!Z_Registration_Info_UScriptStruct_SAIBTParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SAIBTParameter.InnerSingleton, Z_Construct_UScriptStruct_FSAIBTParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SAIBTParameter.InnerSingleton;
}
// End ScriptStruct FSAIBTParameter

// Begin ScriptStruct FRPCPlaySequenceParameter
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RPCPlaySequenceParameter;
class UScriptStruct* FRPCPlaySequenceParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RPCPlaySequenceParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RPCPlaySequenceParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRPCPlaySequenceParameter, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("RPCPlaySequenceParameter"));
	}
	return Z_Registration_Info_UScriptStruct_RPCPlaySequenceParameter.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FRPCPlaySequenceParameter>()
{
	return FRPCPlaySequenceParameter::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceAsset_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8a\xa8\xe7\x94\xbb\xe5\xba\x8f\xe5\x88\x97\xe8\xb5\x84\xe6\xba\x90\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb\xe5\xba\x8f\xe5\x88\x97\xe8\xb5\x84\xe6\xba\x90" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastCenter_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb9\xbf\xe6\x92\xad\xe4\xb8\xad\xe5\xbf\x83\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb9\xbf\xe6\x92\xad\xe4\xb8\xad\xe5\xbf\x83" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BroadcastRange_MetaData[] = {
		{ "Category", "SAIBT" },
		{ "ClampMax", "10000000.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\xb9\xbf\xe6\x92\xad\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb9\xbf\xe6\x92\xad\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelSequenceAsset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BroadcastCenter;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BroadcastRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRPCPlaySequenceParameter>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::NewProp_LevelSequenceAsset = { "LevelSequenceAsset", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCPlaySequenceParameter, LevelSequenceAsset), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LevelSequenceAsset_MetaData), NewProp_LevelSequenceAsset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::NewProp_BroadcastCenter = { "BroadcastCenter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCPlaySequenceParameter, BroadcastCenter), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastCenter_MetaData), NewProp_BroadcastCenter_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::NewProp_BroadcastRange = { "BroadcastRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRPCPlaySequenceParameter, BroadcastRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BroadcastRange_MetaData), NewProp_BroadcastRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::NewProp_LevelSequenceAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::NewProp_BroadcastCenter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::NewProp_BroadcastRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"RPCPlaySequenceParameter",
	Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::PropPointers),
	sizeof(FRPCPlaySequenceParameter),
	alignof(FRPCPlaySequenceParameter),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRPCPlaySequenceParameter()
{
	if (!Z_Registration_Info_UScriptStruct_RPCPlaySequenceParameter.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RPCPlaySequenceParameter.InnerSingleton, Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RPCPlaySequenceParameter.InnerSingleton;
}
// End ScriptStruct FRPCPlaySequenceParameter

// Begin ScriptStruct FMultiStageBossInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MultiStageBossInfo;
class UScriptStruct* FMultiStageBossInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MultiStageBossInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MultiStageBossInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMultiStageBossInfo, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("MultiStageBossInfo"));
	}
	return Z_Registration_Info_UScriptStruct_MultiStageBossInfo.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FMultiStageBossInfo>()
{
	return FMultiStageBossInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionType_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe6\x89\xa7\xe8\xa1\x8c\xe6\x93\x8d\xe4\xbd\x9c\xe7\xb1\xbb\xe5\x88\xab\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xa7\xe8\xa1\x8c\xe6\x93\x8d\xe4\xbd\x9c\xe7\xb1\xbb\xe5\x88\xab" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BossInfo_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Boss\xe6\x80\xaa\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "EditCondition", "ExecutionType == EMultiStageBossExecution::Execution_SpawnBoss" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Boss\xe6\x80\xaa\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SequenceInfo_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe5\x8a\xa8\xe7\x94\xbb\xe5\xba\x8f\xe5\x88\x97\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "EditCondition", "ExecutionType == EMultiStageBossExecution::Execution_PlaySequence" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb\xe5\xba\x8f\xe5\x88\x97\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ExecutionType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ExecutionType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BossInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMultiStageBossInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewProp_ExecutionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewProp_ExecutionType = { "ExecutionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiStageBossInfo, ExecutionType), Z_Construct_UEnum_SimpleAIBehaviorTreeExtend_EMultiStageBossExecution, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionType_MetaData), NewProp_ExecutionType_MetaData) }; // 1642092050
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewProp_BossInfo = { "BossInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiStageBossInfo, BossInfo), Z_Construct_UScriptStruct_FSAIBTParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BossInfo_MetaData), NewProp_BossInfo_MetaData) }; // 3723576660
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewProp_SequenceInfo = { "SequenceInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMultiStageBossInfo, SequenceInfo), Z_Construct_UScriptStruct_FRPCPlaySequenceParameter, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SequenceInfo_MetaData), NewProp_SequenceInfo_MetaData) }; // 1094876864
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewProp_ExecutionType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewProp_ExecutionType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewProp_BossInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewProp_SequenceInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"MultiStageBossInfo",
	Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::PropPointers),
	sizeof(FMultiStageBossInfo),
	alignof(FMultiStageBossInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMultiStageBossInfo()
{
	if (!Z_Registration_Info_UScriptStruct_MultiStageBossInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MultiStageBossInfo.InnerSingleton, Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MultiStageBossInfo.InnerSingleton;
}
// End ScriptStruct FMultiStageBossInfo

// Begin ScriptStruct FSpawnSingleAIActorInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpawnSingleAIActorInfo;
class UScriptStruct* FSpawnSingleAIActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnSingleAIActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpawnSingleAIActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo, (UObject*)Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend(), TEXT("SpawnSingleAIActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SpawnSingleAIActorInfo.OuterSingleton;
}
template<> SIMPLEAIBEHAVIORTREEEXTEND_API UScriptStruct* StaticStruct<FSpawnSingleAIActorInfo>()
{
	return FSpawnSingleAIActorInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe8\xa1\xa8\xe6\xa0\xbc\xe8\xa1\x8c\xe5\x90\x8d\xe7\xa7\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xa1\xa8\xe6\xa0\xbc\xe8\xa1\x8c\xe5\x90\x8d\xe7\xa7\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsRandLocationAndRotation_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9a\x8f\xe6\x9c\xba\xe4\xbd\x8d\xe7\xbd\xae\xe4\xb8\x8e\xe6\x9c\x9d\xe5\x90\x91\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9a\x8f\xe6\x9c\xba\xe4\xbd\x8d\xe7\xbd\xae\xe4\xb8\x8e\xe6\x9c\x9d\xe5\x90\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI\xe7\x94\x9f\xe6\x88\x90\xe4\xbd\x8d\xe7\xbd\xae\n" },
#endif
		{ "EditCondition", "IsRandomLocationAndRotation == false" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI\xe7\x94\x9f\xe6\x88\x90\xe4\xbd\x8d\xe7\xbd\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// AI\xe7\x94\x9f\xe6\x88\x90\xe6\x9c\x9d\xe5\x90\x91\n" },
#endif
		{ "EditCondition", "IsRandomLocationAndRotation == false" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "AI\xe7\x94\x9f\xe6\x88\x90\xe6\x9c\x9d\xe5\x90\x91" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocation_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9a\x84\xe4\xb8\xad\xe5\xbf\x83\xe7\x82\xb9\n" },
#endif
		{ "EditCondition", "IsRandomLocationAndRotation == true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4\xe7\x9a\x84\xe4\xb8\xad\xe5\xbf\x83\xe7\x82\xb9" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandRange_MetaData[] = {
		{ "Category", "SAIBT" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4\n" },
#endif
		{ "EditCondition", "IsRandomLocationAndRotation == true" },
		{ "ModuleRelativePath", "Public/SimpleAIBehaviorTreeExtendType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x9a\x8f\xe6\x9c\xba\xe8\x8c\x83\xe5\x9b\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static void NewProp_IsRandLocationAndRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsRandLocationAndRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RandRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnSingleAIActorInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnSingleAIActorInfo, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
void Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_IsRandLocationAndRotation_SetBit(void* Obj)
{
	((FSpawnSingleAIActorInfo*)Obj)->IsRandLocationAndRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_IsRandLocationAndRotation = { "IsRandLocationAndRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSpawnSingleAIActorInfo), &Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_IsRandLocationAndRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsRandLocationAndRotation_MetaData), NewProp_IsRandLocationAndRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_SpawnLocation = { "SpawnLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnSingleAIActorInfo, SpawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation_MetaData), NewProp_SpawnLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_SpawnRotation = { "SpawnRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnSingleAIActorInfo, SpawnRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRotation_MetaData), NewProp_SpawnRotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_CenterLocation = { "CenterLocation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnSingleAIActorInfo, CenterLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CenterLocation_MetaData), NewProp_CenterLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_RandRange = { "RandRange", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSpawnSingleAIActorInfo, RandRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandRange_MetaData), NewProp_RandRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_IsRandLocationAndRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_SpawnLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_SpawnRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_CenterLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewProp_RandRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAIBehaviorTreeExtend,
	nullptr,
	&NewStructOps,
	"SpawnSingleAIActorInfo",
	Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::PropPointers),
	sizeof(FSpawnSingleAIActorInfo),
	alignof(FSpawnSingleAIActorInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SpawnSingleAIActorInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpawnSingleAIActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SpawnSingleAIActorInfo.InnerSingleton;
}
// End ScriptStruct FSpawnSingleAIActorInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESimpleTargetDirection_StaticEnum, TEXT("ESimpleTargetDirection"), &Z_Registration_Info_UEnum_ESimpleTargetDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2242313389U) },
		{ EThreatType_StaticEnum, TEXT("EThreatType"), &Z_Registration_Info_UEnum_EThreatType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1298598116U) },
		{ ESAIBTState_StaticEnum, TEXT("ESAIBTState"), &Z_Registration_Info_UEnum_ESAIBTState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3414903778U) },
		{ ESAIBTDistanceType_StaticEnum, TEXT("ESAIBTDistanceType"), &Z_Registration_Info_UEnum_ESAIBTDistanceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2207982372U) },
		{ ESAIBTLocomotionState_StaticEnum, TEXT("ESAIBTLocomotionState"), &Z_Registration_Info_UEnum_ESAIBTLocomotionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3592019067U) },
		{ EMultiStageBossExecution_StaticEnum, TEXT("EMultiStageBossExecution"), &Z_Registration_Info_UEnum_EMultiStageBossExecution, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1642092050U) },
		{ ECharacterType_StaticEnum, TEXT("ECharacterType"), &Z_Registration_Info_UEnum_ECharacterType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3896733108U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSAIBTBattleAttribute::StaticStruct, Z_Construct_UScriptStruct_FSAIBTBattleAttribute_Statics::NewStructOps, TEXT("SAIBTBattleAttribute"), &Z_Registration_Info_UScriptStruct_SAIBTBattleAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSAIBTBattleAttribute), 443805610U) },
		{ FSAIBTThreatAttribute::StaticStruct, Z_Construct_UScriptStruct_FSAIBTThreatAttribute_Statics::NewStructOps, TEXT("SAIBTThreatAttribute"), &Z_Registration_Info_UScriptStruct_SAIBTThreatAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSAIBTThreatAttribute), 1900694548U) },
		{ FSAIBTLocomotionAttribute::StaticStruct, Z_Construct_UScriptStruct_FSAIBTLocomotionAttribute_Statics::NewStructOps, TEXT("SAIBTLocomotionAttribute"), &Z_Registration_Info_UScriptStruct_SAIBTLocomotionAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSAIBTLocomotionAttribute), 2219767533U) },
		{ FSAIBTAttribute::StaticStruct, Z_Construct_UScriptStruct_FSAIBTAttribute_Statics::NewStructOps, TEXT("SAIBTAttribute"), &Z_Registration_Info_UScriptStruct_SAIBTAttribute, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSAIBTAttribute), 3524633853U) },
		{ FSAIBTSkillInfo::StaticStruct, Z_Construct_UScriptStruct_FSAIBTSkillInfo_Statics::NewStructOps, TEXT("SAIBTSkillInfo"), &Z_Registration_Info_UScriptStruct_SAIBTSkillInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSAIBTSkillInfo), 163409242U) },
		{ FSingleBossStageInfo::StaticStruct, Z_Construct_UScriptStruct_FSingleBossStageInfo_Statics::NewStructOps, TEXT("SingleBossStageInfo"), &Z_Registration_Info_UScriptStruct_SingleBossStageInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSingleBossStageInfo), 1345835025U) },
		{ FSAIBTParameter::StaticStruct, Z_Construct_UScriptStruct_FSAIBTParameter_Statics::NewStructOps, TEXT("SAIBTParameter"), &Z_Registration_Info_UScriptStruct_SAIBTParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSAIBTParameter), 3723576660U) },
		{ FRPCPlaySequenceParameter::StaticStruct, Z_Construct_UScriptStruct_FRPCPlaySequenceParameter_Statics::NewStructOps, TEXT("RPCPlaySequenceParameter"), &Z_Registration_Info_UScriptStruct_RPCPlaySequenceParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRPCPlaySequenceParameter), 1094876864U) },
		{ FMultiStageBossInfo::StaticStruct, Z_Construct_UScriptStruct_FMultiStageBossInfo_Statics::NewStructOps, TEXT("MultiStageBossInfo"), &Z_Registration_Info_UScriptStruct_MultiStageBossInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMultiStageBossInfo), 1878589256U) },
		{ FSpawnSingleAIActorInfo::StaticStruct, Z_Construct_UScriptStruct_FSpawnSingleAIActorInfo_Statics::NewStructOps, TEXT("SpawnSingleAIActorInfo"), &Z_Registration_Info_UScriptStruct_SpawnSingleAIActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpawnSingleAIActorInfo), 4004815512U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_2393919180(TEXT("/Script/SimpleAIBehaviorTreeExtend"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_SimpleAIBehaviorTreeExtendType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
