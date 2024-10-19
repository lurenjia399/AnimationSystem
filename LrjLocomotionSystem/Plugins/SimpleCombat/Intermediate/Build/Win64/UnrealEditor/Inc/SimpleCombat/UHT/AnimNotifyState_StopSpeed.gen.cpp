// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_StopSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_StopSpeed() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_StopSpeed();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_StopSpeed_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_StopSpeed
void UAnimNotifyState_StopSpeed::StaticRegisterNativesUAnimNotifyState_StopSpeed()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_StopSpeed);
UClass* Z_Construct_UClass_UAnimNotifyState_StopSpeed_NoRegister()
{
	return UAnimNotifyState_StopSpeed::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_StopSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "StopSpeed" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_StopSpeed.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StopSpeed.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_StopSpeed>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAnimNotifyState_StopSpeed_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StopSpeed_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_StopSpeed_Statics::ClassParams = {
	&UAnimNotifyState_StopSpeed::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StopSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_StopSpeed_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_StopSpeed()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_StopSpeed.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_StopSpeed.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_StopSpeed_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_StopSpeed.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_StopSpeed>()
{
	return UAnimNotifyState_StopSpeed::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_StopSpeed);
UAnimNotifyState_StopSpeed::~UAnimNotifyState_StopSpeed() {}
// End Class UAnimNotifyState_StopSpeed

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_StopSpeed_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_StopSpeed, UAnimNotifyState_StopSpeed::StaticClass, TEXT("UAnimNotifyState_StopSpeed"), &Z_Registration_Info_UClass_UAnimNotifyState_StopSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_StopSpeed), 95698229U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_StopSpeed_h_3352483566(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_StopSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_StopSpeed_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
