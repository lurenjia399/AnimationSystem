// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/Hit/Impulse/SimpleSkeletalMeshHitManage.h"
#include "SimpleCombat/Public/Hit/Impulse/SimpleSkeletalMeshHitObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleSkeletalMeshHitManage() {}

// Begin Cross Module References
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage();
SIMPLECOMBAT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin ScriptStruct FSimpleSkeletalMeshHitManage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitManage;
class UScriptStruct* FSimpleSkeletalMeshHitManage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitManage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitManage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage, (UObject*)Z_Construct_UPackage__Script_SimpleCombat(), TEXT("SimpleSkeletalMeshHitManage"));
	}
	return Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitManage.OuterSingleton;
}
template<> SIMPLECOMBAT_API UScriptStruct* StaticStruct<FSimpleSkeletalMeshHitManage>()
{
	return FSimpleSkeletalMeshHitManage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Hit/Impulse/SimpleSkeletalMeshHitManage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitObjects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Hit/Impulse/SimpleSkeletalMeshHitManage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HitObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HitObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleSkeletalMeshHitManage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::NewProp_HitObjects_Inner = { "HitObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitObject, METADATA_PARAMS(0, nullptr) }; // 2612523962
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::NewProp_HitObjects = { "HitObjects", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSimpleSkeletalMeshHitManage, HitObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitObjects_MetaData), NewProp_HitObjects_MetaData) }; // 2612523962
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::NewProp_HitObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::NewProp_HitObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
	nullptr,
	&NewStructOps,
	"SimpleSkeletalMeshHitManage",
	Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::PropPointers),
	sizeof(FSimpleSkeletalMeshHitManage),
	alignof(FSimpleSkeletalMeshHitManage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage()
{
	if (!Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitManage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitManage.InnerSingleton, Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitManage.InnerSingleton;
}
// End ScriptStruct FSimpleSkeletalMeshHitManage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Impulse_SimpleSkeletalMeshHitManage_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSimpleSkeletalMeshHitManage::StaticStruct, Z_Construct_UScriptStruct_FSimpleSkeletalMeshHitManage_Statics::NewStructOps, TEXT("SimpleSkeletalMeshHitManage"), &Z_Registration_Info_UScriptStruct_SimpleSkeletalMeshHitManage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSimpleSkeletalMeshHitManage), 2578289092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Impulse_SimpleSkeletalMeshHitManage_h_899193620(TEXT("/Script/SimpleCombat"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Impulse_SimpleSkeletalMeshHitManage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_Hit_Impulse_SimpleSkeletalMeshHitManage_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
