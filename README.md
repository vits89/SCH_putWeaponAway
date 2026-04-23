# Put Weapon Away

This is a solution for putting a weapon away for [Arma 3](https://arma3.com). The weapon will be put behind the back or into the equipment (for example, into the holster).

## Installation

### Mod

To use the mod, simply subscribe to it on [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=3712766533) and load it in Arma 3 Launcher. Default keys are *Left Ctrl + P*, and can be configured in Controls settings.

### Scripts

If you want to add the solution to your mission, then:
- Copy the solution to the mission, for example, to *client\addons\SCH_putWeaponAway* folder.
- Change the path to the solution in the `PATH` definition in *definitions.hpp* file, for example, to `"client\addons\SCH_putWeaponAway\"`.
- Include the solution files in `CfgFunctions` and `CfgHints` classes in *description.ext* file:
```cpp
class CfgFunctions
{
	#include "client\addons\SCH_putWeaponAway\functions.cpp"
};

class CfgHints
{
	#include "client\addons\SCH_putWeaponAway\hints.cpp"
};
```
- Move localization resources from the solution's *stringtable.xml* file to your mission's one.
- Configure "Use Action 1" custom action in Controls settings.

A demo mission can be downloaded from [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=3712768780).

## Support

If you want to support me, you can donate:
- [PayPal](https://paypal.me/vitalisarokin)
- [WebMoney](https://pay.web.money/157076088165)
- [YooMoney](https://yoomoney.ru/to/410016769347513)
