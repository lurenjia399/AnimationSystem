// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LrjLocomotionSystem : ModuleRules
{
	public LrjLocomotionSystem(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] {  });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[]
		{
			"Core", 
			"CoreUObject", 
			"Engine", 
			"InputCore", 
			"EnhancedInput", 
			"AIModule",
			"SimpleAIBehaviorTreeExtend",
			
			//GAS
			"GameplayAbilities",
			"GameplayTags",
			"GameplayTasks",
			"LevelSequence",
		});
	}
}
