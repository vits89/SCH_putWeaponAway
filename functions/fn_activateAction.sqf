if (!hasInterface or { isNull player } or { !((lifeState player) in ["HEALTHY", "INJURED"]) }
	or { !(isNull (objectParent player)) } or { (currentWeapon player) == "" }) exitWith { false };

player action ["SwitchWeapon", player, player, -1];

true
