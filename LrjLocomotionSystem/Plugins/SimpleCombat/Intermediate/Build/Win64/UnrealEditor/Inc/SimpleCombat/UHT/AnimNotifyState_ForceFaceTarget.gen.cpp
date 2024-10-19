// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_ForceFaceTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_ForceFaceTarget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_ForceFaceTarget
void UAnimNotifyState_ForceFaceTarget::StaticRegisterNativesUAnimNotifyState_ForceFaceTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_ForceFaceTarget);
UClass* Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_NoRegister()
{
	return UAnimNotifyState_ForceFaceTarget::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "ForceFaceTarget" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_ForceFaceTarget.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ForceFaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bYaw_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ForceFaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPitch_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ForceFaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoll_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_ForceFaceTarget.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bYaw_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bYaw;
	static void NewProp_bPitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bPitch;
	static void NewProp_bRoll_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRoll;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_ForceFaceTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bYaw_SetBit(void* Obj)
{
	((UAnimNotifyState_ForceFaceTarget*)Obj)->bYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bYaw = { "bYaw", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_ForceFaceTarget), &Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bYaw_MetaData), NewProp_bYaw_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bPitch_SetBit(void* Obj)
{
	((UAnimNotifyState_ForceFaceTarget*)Obj)->bPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bPitch = { "bPitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_ForceFaceTarget), &Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPitch_MetaData), NewProp_bPitch_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bRoll_SetBit(void* Obj)
{
	((UAnimNotifyState_ForceFaceTarget*)Obj)->bRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bRoll = { "bRoll", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_ForceFaceTarget), &Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoll_MetaData), NewProp_bRoll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::NewProp_bRoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::ClassParams = {
	&UAnimNotifyState_ForceFaceTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_ForceFaceTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_ForceFaceTarget.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_ForceFaceTarget.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_ForceFaceTarget>()
{
	return UAnimNotifyState_ForceFaceTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_ForceFaceTarget);
UAnimNotifyState_ForceFaceTarget::~UAnimNotifyState_ForceFaceTarget() {}
// End Class UAnimNotifyState_ForceFaceTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_ForceFaceTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_ForceFaceTarget, UAnimNotifyState_ForceFaceTarget::StaticClass, TEXT("UAnimNotifyState_ForceFaceTarget"), &Z_Registration_Info_UClass_UAnimNotifyState_ForceFaceTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_ForceFaceTarget), 3141455620U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_ForceFaceTarget_h_2174365676(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_ForceFaceTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_ForceFaceTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
