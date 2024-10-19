// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAdvancedAnimation/Public/AnimNotifyState/AnimNotifyState_StepMatching.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_StepMatching() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
SIMPLEADVANCEDANIMATION_API UClass* Z_Construct_UClass_UAnimNotifyState_StepMatching();
SIMPLEADVANCEDANIMATION_API UClass* Z_Construct_UClass_UAnimNotifyState_StepMatching_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAdvancedAnimation();
// End Cross Module References

// Begin Class UAnimNotifyState_StepMatching
void UAnimNotifyState_StepMatching::StaticRegisterNativesUAnimNotifyState_StepMatching()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_StepMatching);
UClass* Z_Construct_UClass_UAnimNotifyState_StepMatching_NoRegister()
{
	return UAnimNotifyState_StepMatching::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xb8\xbb\xe8\xa6\x81\xe8\xa7\xa3\xe5\x86\xb3\xe9\xab\x98\xe7\xba\xa7\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe7\x9a\x84\xe6\xbb\x91\xe6\xad\xa5\xe9\x97\xae\xe9\xa2\x98\n" },
#endif
		{ "DisplayName", "StepMatching" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_StepMatching.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatching.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xb8\xbb\xe8\xa6\x81\xe8\xa7\xa3\xe5\x86\xb3\xe9\xab\x98\xe7\xba\xa7\xe5\x8a\xa8\xe7\x94\xbb\xe4\xb8\xad\xe7\x9a\x84\xe6\xbb\x91\xe6\xad\xa5\xe9\x97\xae\xe9\xa2\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe8\xb0\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatching.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe8\xb0\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\x93\xaa\xe4\xb8\xaa\xe9\xaa\xa8\xe9\xaa\xbc\xe5\xbc\x80\xe5\xa7\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatching.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x93\xaa\xe4\xb8\xaa\xe9\xaa\xa8\xe9\xaa\xbc\xe5\xbc\x80\xe5\xa7\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebug_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf""debug\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatching.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe5\xbc\x80\xe5\x90\xaf""debug" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatching.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ObjectTypeQuery_MetaData[] = {
		{ "Category", "AnimNotifyState_StepMatching" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\xa3\x80\xe6\xb5\x8b\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_StepMatching.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\xa3\x80\xe6\xb5\x8b\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
	static void NewProp_bDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebug;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Offset;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ObjectTypeQuery_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectTypeQuery;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_StepMatching>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatching, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatching, BoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoneName_MetaData), NewProp_BoneName_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_bDebug_SetBit(void* Obj)
{
	((UAnimNotifyState_StepMatching*)Obj)->bDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_bDebug = { "bDebug", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_StepMatching), &Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_bDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebug_MetaData), NewProp_bDebug_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatching, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Offset_MetaData), NewProp_Offset_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_ObjectTypeQuery_Inner = { "ObjectTypeQuery", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(0, nullptr) }; // 1798967895
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_ObjectTypeQuery = { "ObjectTypeQuery", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_StepMatching, ObjectTypeQuery), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ObjectTypeQuery_MetaData), NewProp_ObjectTypeQuery_MetaData) }; // 1798967895
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_BoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_bDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_Offset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_ObjectTypeQuery_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::NewProp_ObjectTypeQuery,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAdvancedAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::ClassParams = {
	&UAnimNotifyState_StepMatching::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_StepMatching()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_StepMatching.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_StepMatching.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_StepMatching_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_StepMatching.OuterSingleton;
}
template<> SIMPLEADVANCEDANIMATION_API UClass* StaticClass<UAnimNotifyState_StepMatching>()
{
	return UAnimNotifyState_StepMatching::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_StepMatching);
UAnimNotifyState_StepMatching::~UAnimNotifyState_StepMatching() {}
// End Class UAnimNotifyState_StepMatching

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_AnimNotifyState_AnimNotifyState_StepMatching_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_StepMatching, UAnimNotifyState_StepMatching::StaticClass, TEXT("UAnimNotifyState_StepMatching"), &Z_Registration_Info_UClass_UAnimNotifyState_StepMatching, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_StepMatching), 546865297U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_AnimNotifyState_AnimNotifyState_StepMatching_h_2237105642(TEXT("/Script/SimpleAdvancedAnimation"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_AnimNotifyState_AnimNotifyState_StepMatching_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_AnimNotifyState_AnimNotifyState_StepMatching_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
