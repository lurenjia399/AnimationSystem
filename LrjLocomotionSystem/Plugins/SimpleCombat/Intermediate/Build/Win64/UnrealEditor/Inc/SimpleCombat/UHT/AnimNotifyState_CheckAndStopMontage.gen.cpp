// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_CheckAndStopMontage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_CheckAndStopMontage() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_CASMontage();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_CASMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_CASMontage
void UAnimNotifyState_CASMontage::StaticRegisterNativesUAnimNotifyState_CASMontage()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_CASMontage);
UClass* Z_Construct_UClass_UAnimNotifyState_CASMontage_NoRegister()
{
	return UAnimNotifyState_CASMontage::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "CheckAndStopMontage" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_CheckAndStopMontage.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckAndStopMontage.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastInputVector_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckAndStopMontage.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastInputVector;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_CASMontage>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::NewProp_LastInputVector = { "LastInputVector", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_CASMontage, LastInputVector), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastInputVector_MetaData), NewProp_LastInputVector_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::NewProp_LastInputVector,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::ClassParams = {
	&UAnimNotifyState_CASMontage::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_CASMontage()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_CASMontage.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_CASMontage.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_CASMontage_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_CASMontage.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_CASMontage>()
{
	return UAnimNotifyState_CASMontage::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_CASMontage);
UAnimNotifyState_CASMontage::~UAnimNotifyState_CASMontage() {}
// End Class UAnimNotifyState_CASMontage

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckAndStopMontage_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_CASMontage, UAnimNotifyState_CASMontage::StaticClass, TEXT("UAnimNotifyState_CASMontage"), &Z_Registration_Info_UClass_UAnimNotifyState_CASMontage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_CASMontage), 2447290129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckAndStopMontage_h_3752782726(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckAndStopMontage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckAndStopMontage_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
