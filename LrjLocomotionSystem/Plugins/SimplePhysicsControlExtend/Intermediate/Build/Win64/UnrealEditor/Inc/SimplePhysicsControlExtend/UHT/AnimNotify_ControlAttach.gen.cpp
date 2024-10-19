// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplePhysicsControlExtend/Public/AnimNotify/AnimNotify_ControlAttach.h"
#include "PhysicsControl/Public/PhysicsControlData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ControlAttach() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlData();
SIMPLEPHYSICSCONTROLEXTEND_API UClass* Z_Construct_UClass_UAnimNotify_ControlAttach();
SIMPLEPHYSICSCONTROLEXTEND_API UClass* Z_Construct_UClass_UAnimNotify_ControlAttach_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimplePhysicsControlExtend();
// End Cross Module References

// Begin Class UAnimNotify_ControlAttach
void UAnimNotify_ControlAttach::StaticRegisterNativesUAnimNotify_ControlAttach()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_ControlAttach);
UClass* Z_Construct_UClass_UAnimNotify_ControlAttach_NoRegister()
{
	return UAnimNotify_ControlAttach::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ControlAttach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "ControlAttach" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_ControlAttach.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlAttach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlAttach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubTag_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x92\x88\xe5\xaf\xb9""ActorClass\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\xe6\x9f\xa5\xe6\x89\xbe\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlAttach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x92\x88\xe5\xaf\xb9""ActorClass\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\xe6\x9f\xa5\xe6\x89\xbe\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84SocketName\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlAttach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84SocketName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlAttach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildBoneName_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlAttach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabControlData_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlAttach.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChildBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrabControlData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ControlAttach>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlAttach, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_SubTag = { "SubTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlAttach, SubTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubTag_MetaData), NewProp_SubTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlAttach, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlAttach, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlName_MetaData), NewProp_ControlName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_ChildBoneName = { "ChildBoneName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlAttach, ChildBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildBoneName_MetaData), NewProp_ChildBoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_GrabControlData = { "GrabControlData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlAttach, GrabControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabControlData_MetaData), NewProp_GrabControlData_MetaData) }; // 2882318122
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_SubTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_ChildBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::NewProp_GrabControlData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimplePhysicsControlExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::ClassParams = {
	&UAnimNotify_ControlAttach::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::PropPointers),
	0,
	0x000120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ControlAttach()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ControlAttach.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ControlAttach.OuterSingleton, Z_Construct_UClass_UAnimNotify_ControlAttach_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ControlAttach.OuterSingleton;
}
template<> SIMPLEPHYSICSCONTROLEXTEND_API UClass* StaticClass<UAnimNotify_ControlAttach>()
{
	return UAnimNotify_ControlAttach::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ControlAttach);
UAnimNotify_ControlAttach::~UAnimNotify_ControlAttach() {}
// End Class UAnimNotify_ControlAttach

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_AnimNotify_AnimNotify_ControlAttach_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ControlAttach, UAnimNotify_ControlAttach::StaticClass, TEXT("UAnimNotify_ControlAttach"), &Z_Registration_Info_UClass_UAnimNotify_ControlAttach, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ControlAttach), 4272775033U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_AnimNotify_AnimNotify_ControlAttach_h_1080584114(TEXT("/Script/SimplePhysicsControlExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_AnimNotify_AnimNotify_ControlAttach_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_AnimNotify_AnimNotify_ControlAttach_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
