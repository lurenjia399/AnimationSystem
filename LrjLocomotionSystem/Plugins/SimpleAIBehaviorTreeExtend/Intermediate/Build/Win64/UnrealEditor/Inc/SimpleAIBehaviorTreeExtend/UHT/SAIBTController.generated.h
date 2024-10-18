// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AIController/SAIBTController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class ASAIBTController;
enum class ESAIBTState : uint8;
enum class EThreatType : uint8;
#ifdef SIMPLEAIBEHAVIORTREEEXTEND_SAIBTController_generated_h
#error "SAIBTController.generated.h already included, missing '#pragma once' in SAIBTController.h"
#endif
#define SIMPLEAIBEHAVIORTREEEXTEND_SAIBTController_generated_h

#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_GetTeamCaptain); \
	DECLARE_FUNCTION(execGetIsTeamCaptain); \
	DECLARE_FUNCTION(execGetIsTeamAI); \
	DECLARE_FUNCTION(execPrintThreatMap); \
	DECLARE_FUNCTION(execUpdateBlackboardValueTarget); \
	DECLARE_FUNCTION(execOnThreatTargetAdded); \
	DECLARE_FUNCTION(execGetMaxThreatTarget); \
	DECLARE_FUNCTION(execUpdateTargetThreat); \
	DECLARE_FUNCTION(execAddThreatTarget); \
	DECLARE_FUNCTION(execRemoveThreatTarget); \
	DECLARE_FUNCTION(execCanRunBehavior); \
	DECLARE_FUNCTION(execGetMonsterState); \
	DECLARE_FUNCTION(execCheckIsTargetInSight); \
	DECLARE_FUNCTION(execMMOARPGFindTarget); \
	DECLARE_FUNCTION(execGetTarget);


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASAIBTController(); \
	friend struct Z_Construct_UClass_ASAIBTController_Statics; \
public: \
	DECLARE_CLASS(ASAIBTController, ASAIBTModularAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SimpleAIBehaviorTreeExtend"), NO_API) \
	DECLARE_SERIALIZER(ASAIBTController)


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASAIBTController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ASAIBTController(ASAIBTController&&); \
	ASAIBTController(const ASAIBTController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASAIBTController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASAIBTController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASAIBTController) \
	NO_API virtual ~ASAIBTController();


#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_12_PROLOG
#define FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_15_INCLASS_NO_PURE_DECLS \
	FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEAIBEHAVIORTREEEXTEND_API UClass* StaticClass<class ASAIBTController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_AnimationSystem_LrjLocomotionSystem_Plugins_SimpleAIBehaviorTreeExtend_Source_SimpleAIBehaviorTreeExtend_Public_AIController_SAIBTController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
