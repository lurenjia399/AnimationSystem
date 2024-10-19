// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimplePhysicsControlExtend/Public/AnimNotify/AnimNotify_ControlDetach.h"
#include "PhysicsControl/Public/PhysicsControlData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_ControlDetach() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
PHYSICSCONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsControlData();
SIMPLEPHYSICSCONTROLEXTEND_API UClass* Z_Construct_UClass_UAnimNotify_ControlDetach();
SIMPLEPHYSICSCONTROLEXTEND_API UClass* Z_Construct_UClass_UAnimNotify_ControlDetach_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimplePhysicsControlExtend();
// End Cross Module References

// Begin Class UAnimNotify_ControlDetach
void UAnimNotify_ControlDetach::StaticRegisterNativesUAnimNotify_ControlDetach()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_ControlDetach);
UClass* Z_Construct_UClass_UAnimNotify_ControlDetach_NoRegister()
{
	return UAnimNotify_ControlDetach::StaticClass();
}
struct Z_Construct_UClass_UAnimNotify_ControlDetach_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "ControlDetach" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotify/AnimNotify_ControlDetach.h" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlDetach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xb1\xbb\xe5\x9e\x8b\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlDetach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x9e\x8b" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubTag_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x92\x88\xe5\xaf\xb9""ActorClass\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\xe6\x9f\xa5\xe6\x89\xbe\xe6\x96\xb9\xe5\xbc\x8f\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlDetach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x92\x88\xe5\xaf\xb9""ActorClass\xe9\x87\x8c\xe9\x9d\xa2\xe7\x9a\x84\xe6\xa8\xa1\xe5\x9e\x8b\xe6\x9f\xa5\xe6\x89\xbe\xe6\x96\xb9\xe5\xbc\x8f" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84SocketName\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlDetach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\x99\x84\xe5\x8a\xa0\xe7\x9a\x84SocketName" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlName_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlDetach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa7\xe5\x88\xb6\xe5\x99\xa8\xe7\x9a\x84\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildBoneName_MetaData[] = {
		{ "Category", "Attach" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8e\xa7\xe5\x88\xb6\xe7\x9a\x84\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x90\x8d\xe5\xad\x97\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlDetach.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8e\xa7\xe5\x88\xb6\xe7\x9a\x84\xe9\xaa\xa8\xe9\xaa\xbc\xe5\x90\x8d\xe5\xad\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GrabControlData_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlDetach.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEndCloseCollision_MetaData[] = {
		{ "Category", "Attach" },
		{ "ModuleRelativePath", "Public/AnimNotify/AnimNotify_ControlDetach.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SubTag;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ControlName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ChildBoneName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GrabControlData;
	static void NewProp_bEndCloseCollision_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEndCloseCollision;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_ControlDetach>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlDetach, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_SubTag = { "SubTag", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlDetach, SubTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubTag_MetaData), NewProp_SubTag_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_AttachSocketName = { "AttachSocketName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlDetach, AttachSocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttachSocketName_MetaData), NewProp_AttachSocketName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_ControlName = { "ControlName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlDetach, ControlName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlName_MetaData), NewProp_ControlName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_ChildBoneName = { "ChildBoneName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlDetach, ChildBoneName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildBoneName_MetaData), NewProp_ChildBoneName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_GrabControlData = { "GrabControlData", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotify_ControlDetach, GrabControlData), Z_Construct_UScriptStruct_FPhysicsControlData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GrabControlData_MetaData), NewProp_GrabControlData_MetaData) }; // 2882318122
void Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_bEndCloseCollision_SetBit(void* Obj)
{
	((UAnimNotify_ControlDetach*)Obj)->bEndCloseCollision = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_bEndCloseCollision = { "bEndCloseCollision", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotify_ControlDetach), &Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_bEndCloseCollision_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEndCloseCollision_MetaData), NewProp_bEndCloseCollision_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_SubTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_AttachSocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_ControlName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_ChildBoneName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_GrabControlData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::NewProp_bEndCloseCollision,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_SimplePhysicsControlExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::ClassParams = {
	&UAnimNotify_ControlDetach::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::PropPointers),
	0,
	0x000120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotify_ControlDetach()
{
	if (!Z_Registration_Info_UClass_UAnimNotify_ControlDetach.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_ControlDetach.OuterSingleton, Z_Construct_UClass_UAnimNotify_ControlDetach_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotify_ControlDetach.OuterSingleton;
}
template<> SIMPLEPHYSICSCONTROLEXTEND_API UClass* StaticClass<UAnimNotify_ControlDetach>()
{
	return UAnimNotify_ControlDetach::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_ControlDetach);
UAnimNotify_ControlDetach::~UAnimNotify_ControlDetach() {}
// End Class UAnimNotify_ControlDetach

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_AnimNotify_AnimNotify_ControlDetach_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_ControlDetach, UAnimNotify_ControlDetach::StaticClass, TEXT("UAnimNotify_ControlDetach"), &Z_Registration_Info_UClass_UAnimNotify_ControlDetach, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_ControlDetach), 3075177257U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_AnimNotify_AnimNotify_ControlDetach_h_2658518478(TEXT("/Script/SimplePhysicsControlExtend"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_AnimNotify_AnimNotify_ControlDetach_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimplePhysicsControlExtend_Source_SimplePhysicsControlExtend_Public_AnimNotify_AnimNotify_ControlDetach_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
