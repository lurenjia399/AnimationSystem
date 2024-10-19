// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleAdvancedAnimation/Public/Interface/ISimpleAdvancedAnimation.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeISimpleAdvancedAnimation() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
SIMPLEADVANCEDANIMATION_API UClass* Z_Construct_UClass_USimpleAdvancedAnimation();
SIMPLEADVANCEDANIMATION_API UClass* Z_Construct_UClass_USimpleAdvancedAnimation_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleAdvancedAnimation();
// End Cross Module References

// Begin Interface USimpleAdvancedAnimation
void USimpleAdvancedAnimation::StaticRegisterNativesUSimpleAdvancedAnimation()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USimpleAdvancedAnimation);
UClass* Z_Construct_UClass_USimpleAdvancedAnimation_NoRegister()
{
	return USimpleAdvancedAnimation::StaticClass();
}
struct Z_Construct_UClass_USimpleAdvancedAnimation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interface/ISimpleAdvancedAnimation.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISimpleAdvancedAnimation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USimpleAdvancedAnimation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleAdvancedAnimation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAdvancedAnimation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USimpleAdvancedAnimation_Statics::ClassParams = {
	&USimpleAdvancedAnimation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USimpleAdvancedAnimation_Statics::Class_MetaDataParams), Z_Construct_UClass_USimpleAdvancedAnimation_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USimpleAdvancedAnimation()
{
	if (!Z_Registration_Info_UClass_USimpleAdvancedAnimation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USimpleAdvancedAnimation.OuterSingleton, Z_Construct_UClass_USimpleAdvancedAnimation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USimpleAdvancedAnimation.OuterSingleton;
}
template<> SIMPLEADVANCEDANIMATION_API UClass* StaticClass<USimpleAdvancedAnimation>()
{
	return USimpleAdvancedAnimation::StaticClass();
}
USimpleAdvancedAnimation::USimpleAdvancedAnimation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USimpleAdvancedAnimation);
USimpleAdvancedAnimation::~USimpleAdvancedAnimation() {}
// End Interface USimpleAdvancedAnimation

// Begin Registration
struct Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_Interface_ISimpleAdvancedAnimation_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USimpleAdvancedAnimation, USimpleAdvancedAnimation::StaticClass, TEXT("USimpleAdvancedAnimation"), &Z_Registration_Info_UClass_USimpleAdvancedAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USimpleAdvancedAnimation), 1662020771U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_Interface_ISimpleAdvancedAnimation_h_1664330327(TEXT("/Script/SimpleAdvancedAnimation"),
	Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_Interface_ISimpleAdvancedAnimation_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAdvancedAnimation_Source_SimpleAdvancedAnimation_Public_Interface_ISimpleAdvancedAnimation_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
