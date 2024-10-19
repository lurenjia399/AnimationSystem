// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_AttachSocketLerp.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_AttachSocketLerp() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_AttachSocketLerp
void UAnimNotifyState_AttachSocketLerp::StaticRegisterNativesUAnimNotifyState_AttachSocketLerp()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_AttachSocketLerp);
UClass* Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_NoRegister()
{
	return UAnimNotifyState_AttachSocketLerp::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe9\x92\x88\xe5\xaf\xb9Socket \xe9\x99\x84\xe5\x8a\xa0 \xe5\x85\xb7\xe6\x9c\x89\xe6\x8f\x92\xe5\x80\xbc\n */" },
#endif
		{ "DisplayName", "Attach Socket Lerp" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_AttachSocketLerp.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachSocketLerp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x92\x88\xe5\xaf\xb9Socket \xe9\x99\x84\xe5\x8a\xa0 \xe5\x85\xb7\xe6\x9c\x89\xe6\x8f\x92\xe5\x80\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNameOriginal_MetaData[] = {
		{ "Category", "AnimNotifyState_AttachPoint" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachSocketLerp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketNameTarget_MetaData[] = {
		{ "Category", "AnimNotifyState_AttachPoint" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachSocketLerp.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshTag_MetaData[] = {
		{ "Category", "AnimNotifyState_AttachPoint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//mesh\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachSocketLerp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb1\xbb\xe5\x9e\x8b \xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_AttachSocketLerp.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x9e\x8b \xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNameOriginal;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketNameTarget;
	static const UECodeGen_Private::FNamePropertyParams NewProp_MeshTag;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_AttachSocketLerp>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::NewProp_SocketNameOriginal = { "SocketNameOriginal", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachSocketLerp, SocketNameOriginal), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNameOriginal_MetaData), NewProp_SocketNameOriginal_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::NewProp_SocketNameTarget = { "SocketNameTarget", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachSocketLerp, SocketNameTarget), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketNameTarget_MetaData), NewProp_SocketNameTarget_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::NewProp_MeshTag = { "MeshTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachSocketLerp, MeshTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshTag_MetaData), NewProp_MeshTag_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_AttachSocketLerp, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::NewProp_SocketNameOriginal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::NewProp_SocketNameTarget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::NewProp_MeshTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::NewProp_ActorClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::ClassParams = {
	&UAnimNotifyState_AttachSocketLerp::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_AttachSocketLerp.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_AttachSocketLerp.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_AttachSocketLerp.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_AttachSocketLerp>()
{
	return UAnimNotifyState_AttachSocketLerp::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_AttachSocketLerp);
UAnimNotifyState_AttachSocketLerp::~UAnimNotifyState_AttachSocketLerp() {}
// End Class UAnimNotifyState_AttachSocketLerp

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AttachSocketLerp_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_AttachSocketLerp, UAnimNotifyState_AttachSocketLerp::StaticClass, TEXT("UAnimNotifyState_AttachSocketLerp"), &Z_Registration_Info_UClass_UAnimNotifyState_AttachSocketLerp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_AttachSocketLerp), 3173771572U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AttachSocketLerp_h_1595844862(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AttachSocketLerp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_AttachSocketLerp_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
