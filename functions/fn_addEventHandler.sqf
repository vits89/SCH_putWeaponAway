#include "..\definitions.hpp"

if (!hasInterface) exitWith { false };

addUserActionEventHandler [ACTION_NAME, "Activate", { call SCH_putWeaponAway_fnc_activateAction; }];

true
