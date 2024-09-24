class CfgPatches {
	class rocks_supply_boxes {
		name = "rocks_supply_boxes";
		author = "Rockn Roll Glue";
		url = "https://github.com/RocknRollGlue";
		units[] = {
			#include "unitClasses.hpp"
		};
		requiredAddons[] = {
			3DEN,
			"ace_cargo",
			"rhs_main",
			"rhsusf_main",
			"rhsgref_main"
		};
		is3DENmod = 1;
	};
	
};

class CfgFactionClasses {
	#include "cfgFactionClasses.hpp"
};
class CfgEditorCategories{
	class rocks_supply_boxes_editor_category{
		displayName = "Rocks Stupid Supplies";
	};
};
class CfgVehicleClasses {
	#include "cfgVehicleClasses.hpp"
};

class Cfg3DEN {
	#include "cfgEden.hpp"
};


class CfgVehicles {
	#include "cfgVehicles.hpp"
};