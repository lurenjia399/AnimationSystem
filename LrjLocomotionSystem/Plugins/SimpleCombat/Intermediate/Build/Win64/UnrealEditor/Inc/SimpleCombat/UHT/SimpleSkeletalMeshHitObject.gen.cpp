// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Hit/Impulse/SimpleSkeletalMeshHitObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSkeletalMeshHitObject() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
SIMPLECOMBAT_API UEnum* Z_Construct_UEnum_SimpleCombat_EItemObjectState();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin ScriptStruct FSimpleSkeletalMeshHitObject
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitObject;
class UScriptStruct* FSimpleSkeletalMeshHitObject::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitObject.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitObject.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("SimpleSkeletalMeshHitObject"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitObject.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FSimpleSkeletalMeshHitObject>()
{
	return FSimpleSkeletalMeshHitObject::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Hit/Impulse/SimpleSkeletalMeshHitObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x98\x9f\xe5\x88\x97\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/Hit/Impulse/SimpleSkeletalMeshHitObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x98\x9f\xe5\x88\x97\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Impulse/SimpleSkeletalMeshHitObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Impulse/SimpleSkeletalMeshHitObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactNormal_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Impulse/SimpleSkeletalMeshHitObject.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Impulse_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Impulse/SimpleSkeletalMeshHitObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_State;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludeBoneName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImpactNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Impulse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleSkeletalMeshHitObject>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleSkeletalMeshHitObject, State), Z_Construct_UEnum_SimpleCombat_EItemObjectState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_State_MetaData), NewProp_State_MetaData) }; // 2281633753
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleSkeletalMeshHitObject, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_ExcludeBoneName_Inner = { "ExcludeBoneName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_ExcludeBoneName = { "ExcludeBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleSkeletalMeshHitObject, ExcludeBoneName), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeBoneName_MetaData), NewProp_ExcludeBoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_ImpactNormal = { "ImpactNormal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleSkeletalMeshHitObject, ImpactNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactNormal_MetaData), NewProp_ImpactNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_Impulse = { "Impulse", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleSkeletalMeshHitObject, Impulse), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Impulse_MetaData), NewProp_Impulse_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_State_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_State,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_ExcludeBoneName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_ExcludeBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_ImpactNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewProp_Impulse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"SimpleSkeletalMeshHitObject",
	Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::PropPointers),
	sizeof(FSimpleSkeletalMeshHitObject),
	alignof(FSimpleSkeletalMeshHitObject),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitObject.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitObject.InnerSingleton, Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitObject.InnerSingleton;
}
// End ScriptStruct FSimpleSkeletalMeshHitObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Impulse_SimpleSkeletalMeshHitObject_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleSkeletalMeshHitObject::StaticStruct, Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject_Statics::NewStructOps, TEXT("SimpleSkeletalMeshHitObject"), &Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitObject, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleSkeletalMeshHitObject), 2612523962U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Impulse_SimpleSkeletalMeshHitObject_h_2454149278(TEXT("/Script/SimpleCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Impulse_SimpleSkeletalMeshHitObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Impulse_SimpleSkeletalMeshHitObject_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
