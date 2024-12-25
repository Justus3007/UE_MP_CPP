// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CPP_MP : ModuleRules
{
	public CPP_MP(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
