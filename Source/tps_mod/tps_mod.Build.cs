// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class tps_mod : ModuleRules
{
	public tps_mod(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
