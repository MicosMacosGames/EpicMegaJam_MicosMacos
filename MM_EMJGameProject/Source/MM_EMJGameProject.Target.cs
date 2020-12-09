// Copyright described in the Repository LICENSE file

using UnrealBuildTool;
using System.Collections.Generic;

public class MM_EMJGameProjectTarget : TargetRules
{
	public MM_EMJGameProjectTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "MM_EMJGameProject" } );
	}
}
