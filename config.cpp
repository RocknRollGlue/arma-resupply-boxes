class CfgPatches {
	class Rocks_Stupid_box {
		name = "Rocks_Stupid_box";
		author = "Rockn Roll Glue";
		url = "https://github.com/RocknRollGlue";
		units[] = {
			"RSB_Box_Base",
			"RSB_556_PMAG_TAN"
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
	class Rocks_Stupid_boxes{
		displayName = "Rocks Stupid Supplies";
	};
};
class CfgVehicleClasses {
	#include "cfgVehicleClasses.hpp"
};


class CfgVehicles {
	#include "supply_boxes.hpp"
};


class Cfg3DEN {
	#include "cfgEden.hpp"
};