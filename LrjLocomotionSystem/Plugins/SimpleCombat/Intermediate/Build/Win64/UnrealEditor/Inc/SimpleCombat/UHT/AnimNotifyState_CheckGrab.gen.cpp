// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_CheckGrab.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_CheckGrab() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_CheckGrab();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_CheckGrab_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_CheckGrab
void UAnimNotifyState_CheckGrab::StaticRegisterNativesUAnimNotifyState_CheckGrab()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_CheckGrab);
UClass* Z_Construct_UClass_UAnimNotifyState_CheckGrab_NoRegister()
{
	return UAnimNotifyState_CheckGrab::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "CheckGrab" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_CheckGrab.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckGrab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabSocketName_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckGrab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TypeQuery_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckGrab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckGrab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckGrab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndStopMontage_MetaData[] = {
		{ "Category", "Throw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe5\x81\x9c\xe6\xad\xa2\xe5\x8a\xa8\xe7\x94\xbb\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckGrab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe6\x98\xaf\xe5\x90\xa6\xe5\x81\x9c\xe6\xad\xa2\xe5\x8a\xa8\xe7\x94\xbb" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckGrab.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubMeshTagName_MetaData[] = {
		{ "Category", "Throw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xac\xa1\xe7\xba\xa7\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_CheckGrab.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xac\xa1\xe7\xba\xa7\xe6\xa8\xa1\xe5\x9e\x8b\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_GrabSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TypeQuery;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Distance;
	static void NewProp_bEndStopMontage_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndStopMontage;
	static void NewProp_bDrawDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubMeshTagName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_CheckGrab>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_GrabSocketName = { "GrabSocketName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_CheckGrab, GrabSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabSocketName_MetaData), NewProp_GrabSocketName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_TypeQuery = { "TypeQuery", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_CheckGrab, TypeQuery), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TypeQuery_MetaData), NewProp_TypeQuery_MetaData) }; // 1673313466
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_CheckGrab, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_CheckGrab, Distance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Distance_MetaData), NewProp_Distance_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_bEndStopMontage_SetBit(void* Obj)
{
	((UAnimNotifyState_CheckGrab*)Obj)->bEndStopMontage = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_bEndStopMontage = { "bEndStopMontage", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_CheckGrab), &Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_bEndStopMontage_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndStopMontage_MetaData), NewProp_bEndStopMontage_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
{
	((UAnimNotifyState_CheckGrab*)Obj)->bDrawDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_CheckGrab), &Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawDebug_MetaData), NewProp_bDrawDebug_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_SubMeshTagName = { "SubMeshTagName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_CheckGrab, SubMeshTagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubMeshTagName_MetaData), NewProp_SubMeshTagName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_GrabSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_TypeQuery,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_Distance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_bEndStopMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_bDrawDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::NewProp_SubMeshTagName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::ClassParams = {
	&UAnimNotifyState_CheckGrab::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_CheckGrab()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_CheckGrab.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_CheckGrab.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_CheckGrab_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_CheckGrab.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_CheckGrab>()
{
	return UAnimNotifyState_CheckGrab::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_CheckGrab);
UAnimNotifyState_CheckGrab::~UAnimNotifyState_CheckGrab() {}
// End Class UAnimNotifyState_CheckGrab

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckGrab_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_CheckGrab, UAnimNotifyState_CheckGrab::StaticClass, TEXT("UAnimNotifyState_CheckGrab"), &Z_Registration_Info_UClass_UAnimNotifyState_CheckGrab, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_CheckGrab), 4041034632U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckGrab_h_639087675(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckGrab_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_CheckGrab_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
