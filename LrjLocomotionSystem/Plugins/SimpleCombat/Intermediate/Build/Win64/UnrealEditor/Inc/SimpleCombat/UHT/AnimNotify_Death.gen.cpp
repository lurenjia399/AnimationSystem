// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_Death.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Death() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Death();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Death_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_Death
void UAnimNotify_Death::StaticRegisterNativesUAnimNotify_Death()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Death);
UClass* Z_Construct_UClass_UAnimNotify_Death_NoRegister()
{
	return UAnimNotify_Death::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Death_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Death" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_Death.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Death.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSimulation_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Death.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeTime_MetaData[] = {
		{ "Category", "Face Target" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//How long will it be destroyed\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Death.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How long will it be destroyed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExcludeBoneName_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Death.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSimulation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimulation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeTime;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ExcludeBoneName_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ExcludeBoneName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Death>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_bSimulation_SetBit(void* Obj)
{
	((UAnimNotify_Death*)Obj)->bSimulation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_bSimulation = { "bSimulation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Death), &Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_bSimulation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSimulation_MetaData), NewProp_bSimulation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_LifeTime = { "LifeTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Death, LifeTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeTime_MetaData), NewProp_LifeTime_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_ExcludeBoneName_Inner = { "ExcludeBoneName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_ExcludeBoneName = { "ExcludeBoneName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Death, ExcludeBoneName), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExcludeBoneName_MetaData), NewProp_ExcludeBoneName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Death_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_bSimulation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_LifeTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_ExcludeBoneName_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Death_Statics::NewProp_ExcludeBoneName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Death_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_Death_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Death_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Death_Statics::ClassParams = {
	&UAnimNotify_Death::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_Death_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Death_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Death_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Death_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Death()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Death.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Death.OuterSingleton, Z_Construct_UClass_UAnimNotify_Death_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Death.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_Death>()
{
	return UAnimNotify_Death::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Death);
UAnimNotify_Death::~UAnimNotify_Death() {}
// End Class UAnimNotify_Death

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Death_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Death, UAnimNotify_Death::StaticClass, TEXT("UAnimNotify_Death"), &Z_Registration_Info_UClass_UAnimNotify_Death, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Death), 1715509534U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Death_h_3650043167(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Death_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Death_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
