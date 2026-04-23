class CfgUserActions
{
	class PutWeaponAway_SCH
	{
		displayName = "$STR_SCH_putWeaponAway_action_name";
		tooltip = "$STR_SCH_putWeaponAway_action_tooltip";
	};
};

class CfgDefaultKeysPresets
{
	class Arma2
	{
		class Mappings
		{
			PutWeaponAway_SCH[] = { 0x1D130019 }; // DIK_LCONTROL + DIK_P
		};
	};
};

class UserActionGroups
{
	class SCH_putWeaponAway
	{
		name = "$STR_SCH_putWeaponAway_about_name";
		isAddon = 1;
		group[] = { "PutWeaponAway_SCH" };
	};
};
