// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleGameplayAbilitiesExtend/Public/Abilities/ExecutionCalculation/ExecutionCalculation_0Velocity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExecutionCalculation_0Velocity() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_UExecutionCalculation_0Velocity();
SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* Z_Construct_UClass_UExecutionCalculation_0Velocity_NoRegister();
UPackage* Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend();
// End Cross Module References

// Begin Class UExecutionCalculation_0Velocity
void UExecutionCalculation_0Velocity::StaticRegisterNativesUExecutionCalculation_0Velocity()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExecutionCalculation_0Velocity);
UClass* Z_Construct_UClass_UExecutionCalculation_0Velocity_NoRegister()
{
	return UExecutionCalculation_0Velocity::StaticClass();
}
struct Z_Construct_UClass_UExecutionCalculation_0Velocity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Abilities/ExecutionCalculation/ExecutionCalculation_0Velocity.h" },
		{ "ModuleRelativePath", "Public/Abilities/ExecutionCalculation/ExecutionCalculation_0Velocity.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExecutionCalculation_0Velocity>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UExecutionCalculation_0Velocity_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
	(UObject* (*)())Z_Construct_UPackage__Script_SimpleGameplayAbilitiesExtend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UExecutionCalculation_0Velocity_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UExecutionCalculation_0Velocity_Statics::ClassParams = {
	&UExecutionCalculation_0Velocity::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UExecutionCalculation_0Velocity_Statics::Class_MetaDataParams), Z_Construct_UClass_UExecutionCalculation_0Velocity_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UExecutionCalculation_0Velocity()
{
	if (!Z_Registration_Info_UClass_UExecutionCalculation_0Velocity.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExecutionCalculation_0Velocity.OuterSingleton, Z_Construct_UClass_UExecutionCalculation_0Velocity_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UExecutionCalculation_0Velocity.OuterSingleton;
}
template<> SIMPLEGAMEPLAYABILITIESEXTEND_API UClass* StaticClass<UExecutionCalculation_0Velocity>()
{
	return UExecutionCalculation_0Velocity::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UExecutionCalculation_0Velocity);
UExecutionCalculation_0Velocity::~UExecutionCalculation_0Velocity() {}
// End Class UExecutionCalculation_0Velocity

// Begin Registration
struct Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_ExecutionCalculation_ExecutionCalculation_0Velocity_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UExecutionCalculation_0Velocity, UExecutionCalculation_0Velocity::StaticClass, TEXT("UExecutionCalculation_0Velocity"), &Z_Registration_Info_UClass_UExecutionCalculation_0Velocity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExecutionCalculation_0Velocity), 3791171887U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_ExecutionCalculation_ExecutionCalculation_0Velocity_h_3941900549(TEXT("/Script/SimpleGameplayAbilitiesExtend"),
	Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_ExecutionCalculation_ExecutionCalculation_0Velocity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_AdvancedAnimation_Plugins_SimpleGameplayAbilitiesExtend_Source_SimpleGameplayAbilitiesExtend_Public_Abilities_ExecutionCalculation_ExecutionCalculation_0Velocity_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
