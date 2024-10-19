// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_AddForce.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_AddForce() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_AddForce();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_AddForce_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_AddForce
void UAnimNotifyState_AddForce::StaticRegisterNativesUAnimNotifyState_AddForce()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_AddForce);
UClass* Z_Construct_UClass_UAnimNotifyState_AddForce_NoRegister()
{
	return UAnimNotifyState_AddForce::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_AddForce_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "AddForce" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_AddForce.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AddForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirectionForce_MetaData[] = {
		{ "Category", "AnimNotifyState_AddForce" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AddForce.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForceSize_MetaData[] = {
		{ "Category", "AnimNotifyState_AddForce" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AddForce.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DirectionForce;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForceSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_AddForce>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::NewProp_DirectionForce = { "DirectionForce", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AddForce, DirectionForce), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirectionForce_MetaData), NewProp_DirectionForce_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::NewProp_ForceSize = { "ForceSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AddForce, ForceSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForceSize_MetaData), NewProp_ForceSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::NewProp_DirectionForce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::NewProp_ForceSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::ClassParams = {
	&UAnimNotifyState_AddForce::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_AddForce()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_AddForce.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_AddForce.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_AddForce_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_AddForce.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_AddForce>()
{
	return UAnimNotifyState_AddForce::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_AddForce);
UAnimNotifyState_AddForce::~UAnimNotifyState_AddForce() {}
// End Class UAnimNotifyState_AddForce

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AddForce_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_AddForce, UAnimNotifyState_AddForce::StaticClass, TEXT("UAnimNotifyState_AddForce"), &Z_Registration_Info_UClass_UAnimNotifyState_AddForce, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_AddForce), 649402590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AddForce_h_2683156405(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AddForce_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AddForce_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
