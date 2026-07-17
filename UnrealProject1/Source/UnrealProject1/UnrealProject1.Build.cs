// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UnrealProject1 : ModuleRules
{
	public UnrealProject1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UnrealProject1",
			"UnrealProject1/Variant_Platforming",
			"UnrealProject1/Variant_Platforming/Animation",
			"UnrealProject1/Variant_Combat",
			"UnrealProject1/Variant_Combat/AI",
			"UnrealProject1/Variant_Combat/Animation",
			"UnrealProject1/Variant_Combat/Gameplay",
			"UnrealProject1/Variant_Combat/Interfaces",
			"UnrealProject1/Variant_Combat/UI",
			"UnrealProject1/Variant_SideScrolling",
			"UnrealProject1/Variant_SideScrolling/AI",
			"UnrealProject1/Variant_SideScrolling/Gameplay",
			"UnrealProject1/Variant_SideScrolling/Interfaces",
			"UnrealProject1/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
