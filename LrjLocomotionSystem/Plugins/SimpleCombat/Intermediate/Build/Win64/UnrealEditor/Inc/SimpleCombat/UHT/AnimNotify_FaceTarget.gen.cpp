// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_FaceTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_FaceTarget() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_FaceTarget();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_FaceTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_FaceTarget
void UAnimNotify_FaceTarget::StaticRegisterNativesUAnimNotify_FaceTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_FaceTarget);
UClass* Z_Construct_UClass_UAnimNotify_FaceTarget_NoRegister()
{
	return UAnimNotify_FaceTarget::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_FaceTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "FaceTarget" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_FaceTarget.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_FaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bYaw_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_FaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bPitch_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_FaceTarget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRoll_MetaData[] = {
		{ "Category", "Face Target" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_FaceTarget.h" },
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
		TCppClassTypeTraits<UAnimNotify_FaceTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bYaw_SetBit(void* Obj)
{
	((UAnimNotify_FaceTarget*)Obj)->bYaw = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bYaw = { "bYaw", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_FaceTarget), &Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bYaw_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bYaw_MetaData), NewProp_bYaw_MetaData) };
void Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bPitch_SetBit(void* Obj)
{
	((UAnimNotify_FaceTarget*)Obj)->bPitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bPitch = { "bPitch", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_FaceTarget), &Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bPitch_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bPitch_MetaData), NewProp_bPitch_MetaData) };
void Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bRoll_SetBit(void* Obj)
{
	((UAnimNotify_FaceTarget*)Obj)->bRoll = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bRoll = { "bRoll", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_FaceTarget), &Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bRoll_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRoll_MetaData), NewProp_bRoll_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bYaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bPitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::NewProp_bRoll,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::ClassParams = {
	&UAnimNotify_FaceTarget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_FaceTarget()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_FaceTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_FaceTarget.OuterSingleton, Z_Construct_UClass_UAnimNotify_FaceTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_FaceTarget.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_FaceTarget>()
{
	return UAnimNotify_FaceTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_FaceTarget);
UAnimNotify_FaceTarget::~UAnimNotify_FaceTarget() {}
// End Class UAnimNotify_FaceTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_FaceTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_FaceTarget, UAnimNotify_FaceTarget::StaticClass, TEXT("UAnimNotify_FaceTarget"), &Z_Registration_Info_UClass_UAnimNotify_FaceTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_FaceTarget), 124868431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_FaceTarget_h_3596057563(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_FaceTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_FaceTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
