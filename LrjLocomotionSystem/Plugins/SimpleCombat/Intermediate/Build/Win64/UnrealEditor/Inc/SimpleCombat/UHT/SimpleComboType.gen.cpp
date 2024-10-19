// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/SimpleComboType.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleComboType() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_EHitCollisionType();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_EItemObjectState();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FContinuousReleaseSpell();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleAttachPointInfo();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleComboCheck();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitCollisionParam();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Enum ESimpleDrawCGMixingEffectType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleDrawCGMixingEffectType;
static UEnum* ESimpleDrawCGMixingEffectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimpleDrawCGMixingEffectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimpleDrawCGMixingEffectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("ESimpleDrawCGMixingEffectType"));
	}
	return Z_Registration_Info_UEnum_ESimpleDrawCGMixingEffectType.OuterSingleton;
}
template<> SIMPLECOMBAT_API UEnum* StaticEnum<ESimpleDrawCGMixingEffectType>()
{
	return ESimpleDrawCGMixingEffectType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DRAWDEBUGTRACE_GRADIENT_MIXED_OUT.Comment", "//\xe6\xb7\xb7\xe5\x87\xba\n" },
		{ "DRAWDEBUGTRACE_GRADIENT_MIXED_OUT.DisplayName", "Gradient Blend Out" },
		{ "DRAWDEBUGTRACE_GRADIENT_MIXED_OUT.Name", "ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_GRADIENT_MIXED_OUT" },
		{ "DRAWDEBUGTRACE_GRADIENT_MIXED_OUT.ToolTip", "\xe6\xb7\xb7\xe5\x87\xba" },
		{ "DRAWDEBUGTRACE_MIXED_OUT.Comment", "//\xe4\xb8\x8d\xe6\xb7\xb7\xe5\x87\xba\n" },
		{ "DRAWDEBUGTRACE_MIXED_OUT.DisplayName", "Blend Out" },
		{ "DRAWDEBUGTRACE_MIXED_OUT.Name", "ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_MIXED_OUT" },
		{ "DRAWDEBUGTRACE_MIXED_OUT.ToolTip", "\xe4\xb8\x8d\xe6\xb7\xb7\xe5\x87\xba" },
		{ "DRAWDEBUGTRACE_NOT_MIXED_OUT.DisplayName", "Not Blend Out" },
		{ "DRAWDEBUGTRACE_NOT_MIXED_OUT.Name", "ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_NOT_MIXED_OUT" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_NOT_MIXED_OUT", (int64)ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_NOT_MIXED_OUT },
		{ "ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_MIXED_OUT", (int64)ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_MIXED_OUT },
		{ "ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_GRADIENT_MIXED_OUT", (int64)ESimpleDrawCGMixingEffectType::DRAWDEBUGTRACE_GRADIENT_MIXED_OUT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	"ESimpleDrawCGMixingEffectType",
	"ESimpleDrawCGMixingEffectType",
	Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType()
{
	if (!Z_Registration_Info_UEnum_ESimpleDrawCGMixingEffectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleDrawCGMixingEffectType.InnerSingleton, Z_Construct_UEnum_SimpleCombat_ESimpleDrawCGMixingEffectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimpleDrawCGMixingEffectType.InnerSingleton;
}
// End Enum ESimpleDrawCGMixingEffectType

// Begin Enum ESimpleDrawComputerGraphicsType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleDrawComputerGraphicsType;
static UEnum* ESimpleDrawComputerGraphicsType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimpleDrawComputerGraphicsType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimpleDrawComputerGraphicsType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("ESimpleDrawComputerGraphicsType"));
	}
	return Z_Registration_Info_UEnum_ESimpleDrawComputerGraphicsType.OuterSingleton;
}
template<> SIMPLECOMBAT_API UEnum* StaticEnum<ESimpleDrawComputerGraphicsType>()
{
	return ESimpleDrawComputerGraphicsType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DRAWDEBUGTRACE_NONE.DisplayName", "None" },
		{ "DRAWDEBUGTRACE_NONE.Name", "ESimpleDrawComputerGraphicsType::DRAWDEBUGTRACE_NONE" },
		{ "DRAWDEBUGTRACE_TRACK.DisplayName", "Track" },
		{ "DRAWDEBUGTRACE_TRACK.Name", "ESimpleDrawComputerGraphicsType::DRAWDEBUGTRACE_TRACK" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimpleDrawComputerGraphicsType::DRAWDEBUGTRACE_NONE", (int64)ESimpleDrawComputerGraphicsType::DRAWDEBUGTRACE_NONE },
		{ "ESimpleDrawComputerGraphicsType::DRAWDEBUGTRACE_TRACK", (int64)ESimpleDrawComputerGraphicsType::DRAWDEBUGTRACE_TRACK },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	"ESimpleDrawComputerGraphicsType",
	"ESimpleDrawComputerGraphicsType",
	Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType()
{
	if (!Z_Registration_Info_UEnum_ESimpleDrawComputerGraphicsType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleDrawComputerGraphicsType.InnerSingleton, Z_Construct_UEnum_SimpleCombat_ESimpleDrawComputerGraphicsType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimpleDrawComputerGraphicsType.InnerSingleton;
}
// End Enum ESimpleDrawComputerGraphicsType

// Begin Enum ESimpleDrawDebugTrace
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESimpleDrawDebugTrace;
static UEnum* ESimpleDrawDebugTrace_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESimpleDrawDebugTrace.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESimpleDrawDebugTrace.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("ESimpleDrawDebugTrace"));
	}
	return Z_Registration_Info_UEnum_ESimpleDrawDebugTrace.OuterSingleton;
}
template<> SIMPLECOMBAT_API UEnum* StaticEnum<ESimpleDrawDebugTrace>()
{
	return ESimpleDrawDebugTrace_StaticEnum();
}
struct Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""Debug\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "DRAWDEBUGTRACE_FORDURATION.DisplayName", "For Duration" },
		{ "DRAWDEBUGTRACE_FORDURATION.Name", "ESimpleDrawDebugTrace::DRAWDEBUGTRACE_FORDURATION" },
		{ "DRAWDEBUGTRACE_FORONEFRAME.DisplayName", "For One Frame" },
		{ "DRAWDEBUGTRACE_FORONEFRAME.Name", "ESimpleDrawDebugTrace::DRAWDEBUGTRACE_FORONEFRAME" },
		{ "DRAWDEBUGTRACE_NONE.DisplayName", "None" },
		{ "DRAWDEBUGTRACE_NONE.Name", "ESimpleDrawDebugTrace::DRAWDEBUGTRACE_NONE" },
		{ "DRAWDEBUGTRACE_PERSISTENT.DisplayName", "Persistent" },
		{ "DRAWDEBUGTRACE_PERSISTENT.Name", "ESimpleDrawDebugTrace::DRAWDEBUGTRACE_PERSISTENT" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd""Debug\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESimpleDrawDebugTrace::DRAWDEBUGTRACE_NONE", (int64)ESimpleDrawDebugTrace::DRAWDEBUGTRACE_NONE },
		{ "ESimpleDrawDebugTrace::DRAWDEBUGTRACE_FORONEFRAME", (int64)ESimpleDrawDebugTrace::DRAWDEBUGTRACE_FORONEFRAME },
		{ "ESimpleDrawDebugTrace::DRAWDEBUGTRACE_FORDURATION", (int64)ESimpleDrawDebugTrace::DRAWDEBUGTRACE_FORDURATION },
		{ "ESimpleDrawDebugTrace::DRAWDEBUGTRACE_PERSISTENT", (int64)ESimpleDrawDebugTrace::DRAWDEBUGTRACE_PERSISTENT },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	"ESimpleDrawDebugTrace",
	"ESimpleDrawDebugTrace",
	Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace()
{
	if (!Z_Registration_Info_UEnum_ESimpleDrawDebugTrace.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESimpleDrawDebugTrace.InnerSingleton, Z_Construct_UEnum_SimpleCombat_ESimpleDrawDebugTrace_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESimpleDrawDebugTrace.InnerSingleton;
}
// End Enum ESimpleDrawDebugTrace

// Begin Enum EHitCollisionType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitCollisionType;
static UEnum* EHitCollisionType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EHitCollisionType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EHitCollisionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleCombat_EHitCollisionType, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("EHitCollisionType"));
	}
	return Z_Registration_Info_UEnum_EHitCollisionType.OuterSingleton;
}
template<> SIMPLECOMBAT_API UEnum* StaticEnum<EHitCollisionType>()
{
	return EHitCollisionType_StaticEnum();
}
struct Z_Construct_UEnum_SimpleCombat_EHitCollisionType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xd1\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb3\xef\xbf\xbd\n" },
#endif
		{ "HITCOLLISIONTYPE_CHAIN.Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "HITCOLLISIONTYPE_CHAIN.DisplayName", "Chain" },
		{ "HITCOLLISIONTYPE_CHAIN.Name", "EHitCollisionType::HITCOLLISIONTYPE_CHAIN" },
		{ "HITCOLLISIONTYPE_CHAIN.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "HITCOLLISIONTYPE_DIRECT_LINE.Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "HITCOLLISIONTYPE_DIRECT_LINE.DisplayName", "Direct Line" },
		{ "HITCOLLISIONTYPE_DIRECT_LINE.Name", "EHitCollisionType::HITCOLLISIONTYPE_DIRECT_LINE" },
		{ "HITCOLLISIONTYPE_DIRECT_LINE.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "HITCOLLISIONTYPE_LINE.Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xdf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "HITCOLLISIONTYPE_LINE.DisplayName", "Line" },
		{ "HITCOLLISIONTYPE_LINE.Name", "EHitCollisionType::HITCOLLISIONTYPE_LINE" },
		{ "HITCOLLISIONTYPE_LINE.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xdf\xb9\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "HITCOLLISIONTYPE_RANGE.Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa3\xef\xbf\xbd\n" },
		{ "HITCOLLISIONTYPE_RANGE.DisplayName", "Range" },
		{ "HITCOLLISIONTYPE_RANGE.Name", "EHitCollisionType::HITCOLLISIONTYPE_RANGE" },
		{ "HITCOLLISIONTYPE_RANGE.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xce\xa7\xef\xbf\xbd\xcb\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd7\xa3\xef\xbf\xbd" },
		{ "HITCOLLISIONTYPE_RANGE_LINE.Comment", "//\xe9\x80\x9f\xe5\xba\xa6\xe8\xbf\xbd\xe8\xb8\xaa\n" },
		{ "HITCOLLISIONTYPE_RANGE_LINE.DisplayName", "Range Line" },
		{ "HITCOLLISIONTYPE_RANGE_LINE.Name", "EHitCollisionType::HITCOLLISIONTYPE_RANGE_LINE" },
		{ "HITCOLLISIONTYPE_RANGE_LINE.ToolTip", "\xe9\x80\x9f\xe5\xba\xa6\xe8\xbf\xbd\xe8\xb8\xaa" },
		{ "HITCOLLISIONTYPE_RAY_LINE.Comment", "//\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "HITCOLLISIONTYPE_RAY_LINE.DisplayName", "Ray Line" },
		{ "HITCOLLISIONTYPE_RAY_LINE.Name", "EHitCollisionType::HITCOLLISIONTYPE_RAY_LINE" },
		{ "HITCOLLISIONTYPE_RAY_LINE.ToolTip", "\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "HITCOLLISIONTYPE_SHORT_RANGE_ATTACK.DisplayName", "Short range attack" },
		{ "HITCOLLISIONTYPE_SHORT_RANGE_ATTACK.Name", "EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK" },
		{ "HITCOLLISIONTYPE_TRACK_LINE.Comment", "//\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xde\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "HITCOLLISIONTYPE_TRACK_LINE.DisplayName", "Track Line" },
		{ "HITCOLLISIONTYPE_TRACK_LINE.Name", "EHitCollisionType::HITCOLLISIONTYPE_TRACK_LINE" },
		{ "HITCOLLISIONTYPE_TRACK_LINE.ToolTip", "\xef\xbf\xbd\xc7\xb8\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb9\xef\xbf\xbd\xd3\xb5\xef\xbf\xbd \xef\xbf\xbd\xde\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "HITCOLLISIONTYPE_VELOCITY_TRACK.Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
		{ "HITCOLLISIONTYPE_VELOCITY_TRACK.DisplayName", "Velocity Track" },
		{ "HITCOLLISIONTYPE_VELOCITY_TRACK.Name", "EHitCollisionType::HITCOLLISIONTYPE_VELOCITY_TRACK" },
		{ "HITCOLLISIONTYPE_VELOCITY_TRACK.ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd0\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xd1\xa1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb3\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK", (int64)EHitCollisionType::HITCOLLISIONTYPE_SHORT_RANGE_ATTACK },
		{ "EHitCollisionType::HITCOLLISIONTYPE_DIRECT_LINE", (int64)EHitCollisionType::HITCOLLISIONTYPE_DIRECT_LINE },
		{ "EHitCollisionType::HITCOLLISIONTYPE_LINE", (int64)EHitCollisionType::HITCOLLISIONTYPE_LINE },
		{ "EHitCollisionType::HITCOLLISIONTYPE_RAY_LINE", (int64)EHitCollisionType::HITCOLLISIONTYPE_RAY_LINE },
		{ "EHitCollisionType::HITCOLLISIONTYPE_TRACK_LINE", (int64)EHitCollisionType::HITCOLLISIONTYPE_TRACK_LINE },
		{ "EHitCollisionType::HITCOLLISIONTYPE_VELOCITY_TRACK", (int64)EHitCollisionType::HITCOLLISIONTYPE_VELOCITY_TRACK },
		{ "EHitCollisionType::HITCOLLISIONTYPE_RANGE_LINE", (int64)EHitCollisionType::HITCOLLISIONTYPE_RANGE_LINE },
		{ "EHitCollisionType::HITCOLLISIONTYPE_RANGE", (int64)EHitCollisionType::HITCOLLISIONTYPE_RANGE },
		{ "EHitCollisionType::HITCOLLISIONTYPE_CHAIN", (int64)EHitCollisionType::HITCOLLISIONTYPE_CHAIN },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleCombat_EHitCollisionType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	"EHitCollisionType",
	"EHitCollisionType",
	Z_Construct_UEnum_SimpleCombat_EHitCollisionType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_EHitCollisionType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_EHitCollisionType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleCombat_EHitCollisionType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleCombat_EHitCollisionType()
{
	if (!Z_Registration_Info_UEnum_EHitCollisionType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitCollisionType.InnerSingleton, Z_Construct_UEnum_SimpleCombat_EHitCollisionType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EHitCollisionType.InnerSingleton;
}
// End Enum EHitCollisionType

// Begin Enum EItemObjectState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemObjectState;
static UEnum* EItemObjectState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemObjectState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemObjectState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SimpleCombat_EItemObjectState, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("EItemObjectState"));
	}
	return Z_Registration_Info_UEnum_EItemObjectState.OuterSingleton;
}
template<> SIMPLECOMBAT_API UEnum* StaticEnum<EItemObjectState>()
{
	return EItemObjectState_StaticEnum();
}
struct Z_Construct_UEnum_SimpleCombat_EItemObjectState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DRAG_BUSY.DisplayName", "Busy" },
		{ "DRAG_BUSY.Name", "EItemObjectState::DRAG_BUSY" },
		{ "DRAG_FREE.DisplayName", "Free" },
		{ "DRAG_FREE.Name", "EItemObjectState::DRAG_FREE" },
		{ "DRAG_MAX.DisplayName", "Max" },
		{ "DRAG_MAX.Name", "EItemObjectState::DRAG_MAX" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemObjectState::DRAG_FREE", (int64)EItemObjectState::DRAG_FREE },
		{ "EItemObjectState::DRAG_BUSY", (int64)EItemObjectState::DRAG_BUSY },
		{ "EItemObjectState::DRAG_MAX", (int64)EItemObjectState::DRAG_MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SimpleCombat_EItemObjectState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	"EItemObjectState",
	"EItemObjectState",
	Z_Construct_UEnum_SimpleCombat_EItemObjectState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_EItemObjectState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_SimpleCombat_EItemObjectState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_SimpleCombat_EItemObjectState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_SimpleCombat_EItemObjectState()
{
	if (!Z_Registration_Info_UEnum_EItemObjectState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemObjectState.InnerSingleton, Z_Construct_UEnum_SimpleCombat_EItemObjectState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemObjectState.InnerSingleton;
}
// End Enum EItemObjectState

// Begin ScriptStruct FContinuousReleaseSpell
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ContinuousReleaseSpell;
class UScriptStruct* FContinuousReleaseSpell::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ContinuousReleaseSpell.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ContinuousReleaseSpell.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FContinuousReleaseSpell, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("ContinuousReleaseSpell"));
	}
	return Z_Registration_Info_UScriptStruct_ContinuousReleaseSpell.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FContinuousReleaseSpell>()
{
	return FContinuousReleaseSpell::StaticStruct();
}
struct Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartName_MetaData[] = {
		{ "Category", "ContinuousReleaseSpellName" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoopName_MetaData[] = {
		{ "Category", "ContinuousReleaseSpellName" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndName_MetaData[] = {
		{ "Category", "ContinuousReleaseSpellName" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffPtr_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContinuousReleaseSpellName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultLoopName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_StartName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LoopName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_EndName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BuffPtr;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ContinuousReleaseSpellName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_DefaultLoopName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FContinuousReleaseSpell>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_StartName = { "StartName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContinuousReleaseSpell, StartName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartName_MetaData), NewProp_StartName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_LoopName = { "LoopName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContinuousReleaseSpell, LoopName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoopName_MetaData), NewProp_LoopName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_EndName = { "EndName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContinuousReleaseSpell, EndName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndName_MetaData), NewProp_EndName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_BuffPtr = { "BuffPtr", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContinuousReleaseSpell, BuffPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffPtr_MetaData), NewProp_BuffPtr_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_ContinuousReleaseSpellName = { "ContinuousReleaseSpellName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContinuousReleaseSpell, ContinuousReleaseSpellName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContinuousReleaseSpellName_MetaData), NewProp_ContinuousReleaseSpellName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_DefaultLoopName = { "DefaultLoopName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FContinuousReleaseSpell, DefaultLoopName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultLoopName_MetaData), NewProp_DefaultLoopName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_StartName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_LoopName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_EndName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_BuffPtr,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_ContinuousReleaseSpellName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewProp_DefaultLoopName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"ContinuousReleaseSpell",
	Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::PropPointers),
	sizeof(FContinuousReleaseSpell),
	alignof(FContinuousReleaseSpell),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FContinuousReleaseSpell()
{
	if (!Z_Registration_Info_UScriptStruct_ContinuousReleaseSpell.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ContinuousReleaseSpell.InnerSingleton, Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ContinuousReleaseSpell.InnerSingleton;
}
// End ScriptStruct FContinuousReleaseSpell

// Begin ScriptStruct FSimpleHitCollisionParam
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleHitCollisionParam;
class UScriptStruct* FSimpleHitCollisionParam::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHitCollisionParam.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleHitCollisionParam.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleHitCollisionParam, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("SimpleHitCollisionParam"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleHitCollisionParam.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FSimpleHitCollisionParam>()
{
	return FSimpleHitCollisionParam::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xa2\xb0\xe6\x92\x9e\xe5\x8f\x82\xe6\x95\xb0\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa2\xb0\xe6\x92\x9e\xe5\x8f\x82\xe6\x95\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SimpleCombatCharacter_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitObjectClass_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "Category", "HitCollisionParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ComponentLocation\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ComponentLocation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[] = {
		{ "Category", "HitCollisionParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//ComponentRotation\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ComponentRotation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RelativeOffsetLocation_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableBuffTag_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Buffs_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffTags_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitID_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitCollisionLiftTime_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCustomCaster_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableClientPrediction_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseCurrentCollidingBodySize_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxExtent_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereRadius_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindMesh_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bBind_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "Category", "HitCollisionParam" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GASTag_MetaData[] = {
		{ "Category", "HitCollisionParam" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xbd\x93\xe5\x89\x8dGAS \xe6\xa0\x87\xe7\xad\xbe\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe5\x89\x8dGAS \xe6\xa0\x87\xe7\xad\xbe" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SimpleCombatCharacter;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HitObjectClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffsetLocation;
	static void NewProp_bEnableBuffTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableBuffTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Buffs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Buffs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitID;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HitCollisionLiftTime;
	static void NewProp_bCustomCaster_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCustomCaster;
	static void NewProp_bEnableClientPrediction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableClientPrediction;
	static void NewProp_bUseCurrentCollidingBodySize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseCurrentCollidingBodySize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BoxExtent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SphereRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BindMesh;
	static void NewProp_bBind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBind;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GASTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleHitCollisionParam>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_SimpleCombatCharacter = { "SimpleCombatCharacter", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, SimpleCombatCharacter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SimpleCombatCharacter_MetaData), NewProp_SimpleCombatCharacter_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_HitObjectClass = { "HitObjectClass", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, HitObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitObjectClass_MetaData), NewProp_HitObjectClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rotation_MetaData), NewProp_Rotation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_RelativeOffsetLocation = { "RelativeOffsetLocation", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, RelativeOffsetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RelativeOffsetLocation_MetaData), NewProp_RelativeOffsetLocation_MetaData) };
void Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bEnableBuffTag_SetBit(void* Obj)
{
	((FSimpleHitCollisionParam*)Obj)->bEnableBuffTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bEnableBuffTag = { "bEnableBuffTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleHitCollisionParam), &Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bEnableBuffTag_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableBuffTag_MetaData), NewProp_bEnableBuffTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_Buffs_Inner = { "Buffs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_Buffs = { "Buffs", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, Buffs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Buffs_MetaData), NewProp_Buffs_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_BuffTags_Inner = { "BuffTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_BuffTags = { "BuffTags", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, BuffTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffTags_MetaData), NewProp_BuffTags_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_HitID = { "HitID", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, HitID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitID_MetaData), NewProp_HitID_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_HitCollisionLiftTime = { "HitCollisionLiftTime", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, HitCollisionLiftTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitCollisionLiftTime_MetaData), NewProp_HitCollisionLiftTime_MetaData) };
void Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bCustomCaster_SetBit(void* Obj)
{
	((FSimpleHitCollisionParam*)Obj)->bCustomCaster = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bCustomCaster = { "bCustomCaster", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleHitCollisionParam), &Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bCustomCaster_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCustomCaster_MetaData), NewProp_bCustomCaster_MetaData) };
void Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bEnableClientPrediction_SetBit(void* Obj)
{
	((FSimpleHitCollisionParam*)Obj)->bEnableClientPrediction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bEnableClientPrediction = { "bEnableClientPrediction", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleHitCollisionParam), &Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bEnableClientPrediction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableClientPrediction_MetaData), NewProp_bEnableClientPrediction_MetaData) };
void Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bUseCurrentCollidingBodySize_SetBit(void* Obj)
{
	((FSimpleHitCollisionParam*)Obj)->bUseCurrentCollidingBodySize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bUseCurrentCollidingBodySize = { "bUseCurrentCollidingBodySize", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleHitCollisionParam), &Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bUseCurrentCollidingBodySize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseCurrentCollidingBodySize_MetaData), NewProp_bUseCurrentCollidingBodySize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_BoxExtent = { "BoxExtent", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, BoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxExtent_MetaData), NewProp_BoxExtent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData), NewProp_CapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_SphereRadius = { "SphereRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, SphereRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereRadius_MetaData), NewProp_SphereRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, CapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRadius_MetaData), NewProp_CapsuleRadius_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_BindMesh = { "BindMesh", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, BindMesh), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindMesh_MetaData), NewProp_BindMesh_MetaData) };
void Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bBind_SetBit(void* Obj)
{
	((FSimpleHitCollisionParam*)Obj)->bBind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bBind = { "bBind", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleHitCollisionParam), &Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bBind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bBind_MetaData), NewProp_bBind_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_GASTag = { "GASTag", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleHitCollisionParam, GASTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GASTag_MetaData), NewProp_GASTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_SimpleCombatCharacter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_HitObjectClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_Rotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_RelativeOffsetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bEnableBuffTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_Buffs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_Buffs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_BuffTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_BuffTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_HitID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_HitCollisionLiftTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bCustomCaster,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bEnableClientPrediction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bUseCurrentCollidingBodySize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_BoxExtent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_CapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_SphereRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_BindMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_bBind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewProp_GASTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"SimpleHitCollisionParam",
	Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::PropPointers),
	sizeof(FSimpleHitCollisionParam),
	alignof(FSimpleHitCollisionParam),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000205),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleHitCollisionParam()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleHitCollisionParam.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleHitCollisionParam.InnerSingleton, Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleHitCollisionParam.InnerSingleton;
}
// End ScriptStruct FSimpleHitCollisionParam

// Begin ScriptStruct FSimpleComboCheck
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleComboCheck;
class UScriptStruct* FSimpleComboCheck::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleComboCheck.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleComboCheck.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleComboCheck, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("SimpleComboCheck"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleComboCheck.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FSimpleComboCheck>()
{
	return FSimpleComboCheck::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleComboCheck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboIndex_MetaData[] = {
		{ "Category", "ComboAttack" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLongPress_MetaData[] = {
		{ "Category", "ComboAttack" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShortPress_MetaData[] = {
		{ "Category", "ComboAttack" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboGameplayTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ComboID_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x8d\xb3\xe5\xb0\x86\xe4\xb8\xa2\xe5\xbc\x83\n" },
#endif
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8d\xb3\xe5\xb0\x86\xe4\xb8\xa2\xe5\xbc\x83" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboIndex;
	static void NewProp_bLongPress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLongPress;
	static void NewProp_bShortPress_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShortPress;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIndex;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ComboKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ComboGameplayTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ComboID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleComboCheck>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_ComboIndex = { "ComboIndex", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleComboCheck, ComboIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboIndex_MetaData), NewProp_ComboIndex_MetaData) };
void Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_bLongPress_SetBit(void* Obj)
{
	((FSimpleComboCheck*)Obj)->bLongPress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_bLongPress = { "bLongPress", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleComboCheck), &Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_bLongPress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLongPress_MetaData), NewProp_bLongPress_MetaData) };
void Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_bShortPress_SetBit(void* Obj)
{
	((FSimpleComboCheck*)Obj)->bShortPress = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_bShortPress = { "bShortPress", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FSimpleComboCheck), &Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_bShortPress_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShortPress_MetaData), NewProp_bShortPress_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_MaxIndex = { "MaxIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleComboCheck, MaxIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIndex_MetaData), NewProp_MaxIndex_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_ComboKey = { "ComboKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleComboCheck, ComboKey), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboKey_MetaData), NewProp_ComboKey_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_ComboGameplayTag = { "ComboGameplayTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleComboCheck, ComboGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboGameplayTag_MetaData), NewProp_ComboGameplayTag_MetaData) }; // 1298103297
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_ComboID = { "ComboID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleComboCheck, ComboID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ComboID_MetaData), NewProp_ComboID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_ComboIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_bLongPress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_bShortPress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_MaxIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_ComboKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_ComboGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewProp_ComboID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"SimpleComboCheck",
	Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::PropPointers),
	sizeof(FSimpleComboCheck),
	alignof(FSimpleComboCheck),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleComboCheck()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleComboCheck.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleComboCheck.InnerSingleton, Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleComboCheck.InnerSingleton;
}
// End ScriptStruct FSimpleComboCheck

// Begin ScriptStruct FSimpleAttachPointInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleAttachPointInfo;
class UScriptStruct* FSimpleAttachPointInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleAttachPointInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleAttachPointInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleAttachPointInfo, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("SimpleAttachPointInfo"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleAttachPointInfo.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FSimpleAttachPointInfo>()
{
	return FSimpleAttachPointInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "Category", "AttachPoint" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "AttachPoint" },
		{ "ModuleRelativePath", "Public/SimpleComboType.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleAttachPointInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleAttachPointInfo, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleAttachPointInfo, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"SimpleAttachPointInfo",
	Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::PropPointers),
	sizeof(FSimpleAttachPointInfo),
	alignof(FSimpleAttachPointInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleAttachPointInfo()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleAttachPointInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleAttachPointInfo.InnerSingleton, Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleAttachPointInfo.InnerSingleton;
}
// End ScriptStruct FSimpleAttachPointInfo

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESimpleDrawCGMixingEffectType_StaticEnum, TEXT("ESimpleDrawCGMixingEffectType"), &Z_Registration_Info_UEnum_ESimpleDrawCGMixingEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4142648575U) },
		{ ESimpleDrawComputerGraphicsType_StaticEnum, TEXT("ESimpleDrawComputerGraphicsType"), &Z_Registration_Info_UEnum_ESimpleDrawComputerGraphicsType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1035306626U) },
		{ ESimpleDrawDebugTrace_StaticEnum, TEXT("ESimpleDrawDebugTrace"), &Z_Registration_Info_UEnum_ESimpleDrawDebugTrace, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1032363344U) },
		{ EHitCollisionType_StaticEnum, TEXT("EHitCollisionType"), &Z_Registration_Info_UEnum_EHitCollisionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1560033521U) },
		{ EItemObjectState_StaticEnum, TEXT("EItemObjectState"), &Z_Registration_Info_UEnum_EItemObjectState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2281633753U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FContinuousReleaseSpell::StaticStruct, Z_Construct_UScriptStruct_FContinuousReleaseSpell_Statics::NewStructOps, TEXT("ContinuousReleaseSpell"), &Z_Registration_Info_UScriptStruct_ContinuousReleaseSpell, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FContinuousReleaseSpell), 4016173220U) },
		{ FSimpleHitCollisionParam::StaticStruct, Z_Construct_UScriptStruct_FSimpleHitCollisionParam_Statics::NewStructOps, TEXT("SimpleHitCollisionParam"), &Z_Registration_Info_UScriptStruct_SimpleHitCollisionParam, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleHitCollisionParam), 1628828425U) },
		{ FSimpleComboCheck::StaticStruct, Z_Construct_UScriptStruct_FSimpleComboCheck_Statics::NewStructOps, TEXT("SimpleComboCheck"), &Z_Registration_Info_UScriptStruct_SimpleComboCheck, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleComboCheck), 3733472960U) },
		{ FSimpleAttachPointInfo::StaticStruct, Z_Construct_UScriptStruct_FSimpleAttachPointInfo_Statics::NewStructOps, TEXT("SimpleAttachPointInfo"), &Z_Registration_Info_UScriptStruct_SimpleAttachPointInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleAttachPointInfo), 527398192U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_2676653841(TEXT("/Script/SimpleCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_SimpleComboType_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
