// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleCombat/Public/AnimNotifyState/AnimNotifyState_MovementMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_MovementMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMovementMode();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_MovementMode();
SIMPLECOMBAT_API UClass* Z_Construct_UClass_UAnimNotifyState_MovementMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleCombat();
// End Cross Module References

// Begin Class UAnimNotifyState_MovementMode
void UAnimNotifyState_MovementMode::StaticRegisterNativesUAnimNotifyState_MovementMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_MovementMode);
UClass* Z_Construct_UClass_UAnimNotifyState_MovementMode_NoRegister()
{
	return UAnimNotifyState_MovementMode::StaticClass();
}
struct Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "EnableMovementMode" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState/AnimNotifyState_MovementMode.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_MovementMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementMode_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe5\xb8\x8c\xe6\x9c\x9b\xe8\xbf\x9b\xe5\x85\xa5\xe8\xbf\x87\xe7\xa8\x8b\xe5\x90\x8e\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_MovementMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb8\x8c\xe6\x9c\x9b\xe8\xbf\x9b\xe5\x85\xa5\xe8\xbf\x87\xe7\xa8\x8b\xe5\x90\x8e\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndMovementMode_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe5\xb8\x8c\xe6\x9c\x9b\xe6\x81\xa2\xe5\xa4\x8d\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81 \xe9\x9c\x80\xe8\xa6\x81\xe5\xbc\x80\xe5\x90\xaf bLeaveItAsItIs\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_MovementMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe5\xb8\x8c\xe6\x9c\x9b\xe6\x81\xa2\xe5\xa4\x8d\xe7\x9a\x84\xe7\x8a\xb6\xe6\x80\x81 \xe9\x9c\x80\xe8\xa6\x81\xe5\xbc\x80\xe5\x90\xaf bLeaveItAsItIs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLeaveItAsItIs_MetaData[] = {
		{ "Category", "AnimNotify" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe8\xbf\x9b\xe5\x85\xa5\xe5\x89\x8d\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\x8a\xb6\xe6\x80\x81 \xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe5\xb0\xb1\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\x8a\xb6\xe6\x80\x81\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_MovementMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x9b\xe5\x85\xa5\xe5\x89\x8d\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\x8a\xb6\xe6\x80\x81 \xe7\xbb\x93\xe6\x9d\x9f\xe5\x90\x8e\xe5\xb0\xb1\xe6\x98\xaf\xe4\xbb\x80\xe4\xb9\x88\xe7\x8a\xb6\xe6\x80\x81" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CharacterMovementMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xe4\xbd\x9c\xe4\xb8\xba\xe4\xbf\x9d\xe5\xad\x98\n" },
#endif
		{ "ModuleRelativePath", "Public/AnimNotifyState/AnimNotifyState_MovementMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\x9c\xe4\xb8\xba\xe4\xbf\x9d\xe5\xad\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_MovementMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EndMovementMode;
	static void NewProp_bLeaveItAsItIs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLeaveItAsItIs;
	static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterMovementMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_MovementMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_MovementMode = { "MovementMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MovementMode, MovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementMode_MetaData), NewProp_MovementMode_MetaData) }; // 1967555749
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_EndMovementMode = { "EndMovementMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MovementMode, EndMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndMovementMode_MetaData), NewProp_EndMovementMode_MetaData) }; // 1967555749
void Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_bLeaveItAsItIs_SetBit(void* Obj)
{
	((UAnimNotifyState_MovementMode*)Obj)->bLeaveItAsItIs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_bLeaveItAsItIs = { "bLeaveItAsItIs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UAnimNotifyState_MovementMode), &Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_bLeaveItAsItIs_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLeaveItAsItIs_MetaData), NewProp_bLeaveItAsItIs_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_CharacterMovementMode = { "CharacterMovementMode", nullptr, (EPropertyFlags)0x0040000000000010, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UAnimNotifyState_MovementMode, CharacterMovementMode), Z_Construct_UEnum_Engine_EMovementMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CharacterMovementMode_MetaData), NewProp_CharacterMovementMode_MetaData) }; // 1967555749
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_MovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_EndMovementMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_bLeaveItAsItIs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::NewProp_CharacterMovementMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleCombat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::ClassParams = {
	&UAnimNotifyState_MovementMode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::PropPointers),
	0,
	0x001130A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::Class_MetaDataParams), Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAnimNotifyState_MovementMode()
{
	if (!Z_Registration_Info_UClass_UAnimNotifyState_MovementMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_MovementMode.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_MovementMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAnimNotifyState_MovementMode.OuterSingleton;
}
template<> SIMPLECOMBAT_API UClass* StaticClass<UAnimNotifyState_MovementMode>()
{
	return UAnimNotifyState_MovementMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_MovementMode);
UAnimNotifyState_MovementMode::~UAnimNotifyState_MovementMode() {}
// End Class UAnimNotifyState_MovementMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_MovementMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_MovementMode, UAnimNotifyState_MovementMode::StaticClass, TEXT("UAnimNotifyState_MovementMode"), &Z_Registration_Info_UClass_UAnimNotifyState_MovementMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_MovementMode), 863624313U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_MovementMode_h_4014574687(TEXT("/Script/SimpleCombat"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_MovementMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleCombat_Source_SimpleCombat_Public_AnimNotifyState_AnimNotifyState_MovementMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
