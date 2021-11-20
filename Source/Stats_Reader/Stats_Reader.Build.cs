// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Stats_Reader : ModuleRules
{
	public Stats_Reader(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
