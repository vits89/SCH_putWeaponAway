class CfgPatches
{
	class SCH_putWeaponAway
	{
		name = "Put Weapon Away";
		author = "Schatten";
		url = "https://github.com/vits89";
		requiredVersion = 2.06;
		requiredAddons[] = { "A3_Language_F" };
		units[] = { };
		weapons[] = { };
	};
};

class CfgFunctions
{
	#include "functions.cpp"
};

class CfgHints
{
	#include "hints.cpp"
};

#include "action.cpp"
