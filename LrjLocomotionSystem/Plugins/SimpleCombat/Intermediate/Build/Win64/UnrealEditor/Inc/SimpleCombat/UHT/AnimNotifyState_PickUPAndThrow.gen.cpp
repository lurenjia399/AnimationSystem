// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_PickUPAndThrow() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_AHitCollision_NoRegister();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_PickUPAndThrow
void UAnimNotifyState_PickUPAndThrow::StaticRegisterNativesUAnimNotifyState_PickUPAndThrow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_PickUPAndThrow);
UClass* Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_NoRegister()
{
	return UAnimNotifyState_PickUPAndThrow::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "PickUP And Throw" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorClass_MetaData[] = {
		{ "Category", "Throw" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe6\x8a\x9b\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8a\x9b\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LiftTime_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BindSocket_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHoming_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSelfRotation_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitID_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GASTag_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BuffTags_MetaData[] = {
		{ "Category", "Throw" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_PickUPAndThrow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LiftTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FNamePropertyParams NewProp_BindSocket;
	static void NewProp_bHoming_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoming;
	static void NewProp_bSelfRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSelfRotation;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HitID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GASTag;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BuffTags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BuffTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_PickUPAndThrow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PickUPAndThrow, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AHitCollision_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorClass_MetaData), NewProp_ActorClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_LiftTime = { "LiftTime", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PickUPAndThrow, LiftTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LiftTime_MetaData), NewProp_LiftTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PickUPAndThrow, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_BindSocket = { "BindSocket", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PickUPAndThrow, BindSocket), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BindSocket_MetaData), NewProp_BindSocket_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_bHoming_SetBit(void* Obj)
{
	((UAnimNotifyState_PickUPAndThrow*)Obj)->bHoming = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_bHoming = { "bHoming", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_PickUPAndThrow), &Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_bHoming_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHoming_MetaData), NewProp_bHoming_MetaData) };
void Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_bSelfRotation_SetBit(void* Obj)
{
	((UAnimNotifyState_PickUPAndThrow*)Obj)->bSelfRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_bSelfRotation = { "bSelfRotation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_PickUPAndThrow), &Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_bSelfRotation_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSelfRotation_MetaData), NewProp_bSelfRotation_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_HitID = { "HitID", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PickUPAndThrow, HitID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitID_MetaData), NewProp_HitID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_GASTag = { "GASTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PickUPAndThrow, GASTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GASTag_MetaData), NewProp_GASTag_MetaData) }; // 1298103297
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_BuffTags_Inner = { "BuffTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_BuffTags = { "BuffTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_PickUPAndThrow, BuffTags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BuffTags_MetaData), NewProp_BuffTags_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_ActorClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_LiftTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_BindSocket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_bHoming,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_bSelfRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_HitID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_GASTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_BuffTags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::NewProp_BuffTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::ClassParams = {
	&UAnimNotifyState_PickUPAndThrow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_PickUPAndThrow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_PickUPAndThrow.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_PickUPAndThrow.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_PickUPAndThrow>()
{
	return UAnimNotifyState_PickUPAndThrow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_PickUPAndThrow);
UAnimNotifyState_PickUPAndThrow::~UAnimNotifyState_PickUPAndThrow() {}
// End Class UAnimNotifyState_PickUPAndThrow

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_PickUPAndThrow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_PickUPAndThrow, UAnimNotifyState_PickUPAndThrow::StaticClass, TEXT("UAnimNotifyState_PickUPAndThrow"), &Z_Registration_Info_UClass_UAnimNotifyState_PickUPAndThrow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_PickUPAndThrow), 2739460007U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_PickUPAndThrow_h_4269957825(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_PickUPAndThrow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_PickUPAndThrow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
