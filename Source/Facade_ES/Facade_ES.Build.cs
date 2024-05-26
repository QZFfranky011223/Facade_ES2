// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Facade_ES : ModuleRules
{
	public Facade_ES(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
