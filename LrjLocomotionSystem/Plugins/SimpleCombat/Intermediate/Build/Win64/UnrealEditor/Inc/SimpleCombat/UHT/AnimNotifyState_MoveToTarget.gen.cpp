// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_MoveToTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MoveToTarget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_MoveToTarget();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_MoveToTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_MoveToTarget
void UAnimNotifyState_MoveToTarget::StaticRegisterNativesUAnimNotifyState_MoveToTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_MoveToTarget);
UClass* Z_Construct_UClass_UAnimNotifyState_MoveToTarget_NoRegister()
{
	return UAnimNotifyState_MoveToTarget::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "MoveToTarget" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_MoveToTarget.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_MoveToTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappingDistance_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_MoveToTarget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlappingDistance;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_MoveToTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::NewProp_OverlappingDistance = { "OverlappingDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MoveToTarget, OverlappingDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappingDistance_MetaData), NewProp_OverlappingDistance_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::NewProp_OverlappingDistance,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::ClassParams = {
	&UAnimNotifyState_MoveToTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_MoveToTarget()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_MoveToTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_MoveToTarget.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_MoveToTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_MoveToTarget.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_MoveToTarget>()
{
	return UAnimNotifyState_MoveToTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_MoveToTarget);
UAnimNotifyState_MoveToTarget::~UAnimNotifyState_MoveToTarget() {}
// End Class UAnimNotifyState_MoveToTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_MoveToTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_MoveToTarget, UAnimNotifyState_MoveToTarget::StaticClass, TEXT("UAnimNotifyState_MoveToTarget"), &Z_Registration_Info_UClass_UAnimNotifyState_MoveToTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_MoveToTarget), 3718705600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_MoveToTarget_h_2737487073(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_MoveToTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_MoveToTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
