// Copyright described in the Repository LICENSE file

using UnrealBuildTool;
using System.Collections.Generic;

public class MM_EMJGameProjectEditorTarget : TargetRules
{
	public MM_EMJGameProjectEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;

		ExtraModuleNames.AddRange( new string[] { "MM_EMJGameProject" } );
	}
}
