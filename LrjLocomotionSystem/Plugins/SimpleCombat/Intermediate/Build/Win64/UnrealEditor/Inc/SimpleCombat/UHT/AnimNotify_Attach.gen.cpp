// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotify/AnimNotify_Attach.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_Attach() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachmentRule();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Attach();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotify_Attach_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotify_Attach
void UAnimNotify_Attach::StaticRegisterNativesUAnimNotify_Attach()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_Attach);
UClass* Z_Construct_UClass_UAnimNotify_Attach_NoRegister()
{
	return UAnimNotify_Attach::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_Attach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Attach" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_Attach.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bReverseAddition_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe8\x87\xaa\xe5\xb7\xb1\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe6\x98\xaf\xe8\x87\xaa\xe5\xb7\xb1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubTag_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x9f\xa5\xe6\x89\xbe\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x9f\xa5\xe6\x89\xbe\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84SocketName\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84SocketName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScaleRule_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInWeldSimulatedBodies_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x98\xaf\xe5\x90\xa6\xe7\x84\x8a\xe6\x8e\xa5\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_Attach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x98\xaf\xe5\x90\xa6\xe7\x84\x8a\xe6\x8e\xa5" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bReverseAddition_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReverseAddition;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LocationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_LocationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RotationRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RotationRule;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleRule_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ScaleRule;
	static void NewProp_bInWeldSimulatedBodies_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInWeldSimulatedBodies;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_Attach>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_bReverseAddition_SetBit(void* Obj)
{
	((UAnimNotify_Attach*)Obj)->bReverseAddition = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_bReverseAddition = { "bReverseAddition", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attach), &Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_bReverseAddition_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bReverseAddition_MetaData), NewProp_bReverseAddition_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attach, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_SubTag = { "SubTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attach, SubTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubTag_MetaData), NewProp_SubTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attach, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_LocationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_LocationRule = { "LocationRule", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attach, LocationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationRule_MetaData), NewProp_LocationRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_RotationRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_RotationRule = { "RotationRule", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attach, RotationRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationRule_MetaData), NewProp_RotationRule_MetaData) }; // 366982490
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_ScaleRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_ScaleRule = { "ScaleRule", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_Attach, ScaleRule), Z_Construct_UEnum_Engine_EAttachmentRule, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScaleRule_MetaData), NewProp_ScaleRule_MetaData) }; // 366982490
void Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_bInWeldSimulatedBodies_SetBit(void* Obj)
{
	((UAnimNotify_Attach*)Obj)->bInWeldSimulatedBodies = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_bInWeldSimulatedBodies = { "bInWeldSimulatedBodies", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_Attach), &Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_bInWeldSimulatedBodies_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInWeldSimulatedBodies_MetaData), NewProp_bInWeldSimulatedBodies_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_Attach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_bReverseAddition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_SubTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_LocationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_LocationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_RotationRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_RotationRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_ScaleRule_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_ScaleRule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_Attach_Statics::NewProp_bInWeldSimulatedBodies,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Attach_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_Attach_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Attach_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_Attach_Statics::ClassParams = {
	&UAnimNotify_Attach::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_Attach_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Attach_Statics::PropPointers),
	0,
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_Attach_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_Attach_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_Attach()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_Attach.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_Attach.OuterSingleton, Z_Construct_UClass_UAnimNotify_Attach_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_Attach.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotify_Attach>()
{
	return UAnimNotify_Attach::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_Attach);
UAnimNotify_Attach::~UAnimNotify_Attach() {}
// End Class UAnimNotify_Attach

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Attach_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_Attach, UAnimNotify_Attach::StaticClass, TEXT("UAnimNotify_Attach"), &Z_Registration_Info_UClass_UAnimNotify_Attach, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_Attach), 3618319129U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Attach_h_3343773163(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Attach_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotify_AnimNotify_Attach_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
