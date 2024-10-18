//Copyright (C) RenZhai.2022.All Rights Reserved.

using UnrealBuildTool;

public class SimpleAIBehaviorTreeExtend : ModuleRules
{
	public SimpleAIBehaviorTreeExtend(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
                "AIModule",
                "GameplayAbilities",
				"GameplayTags",
				"GameplayTasks",
                "ModularGameplay",
                "LevelSequence",
                "NavigationSystem"
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

        //�Ż�
        OptimizeCode = CodeOptimization.Never;
    }
}
