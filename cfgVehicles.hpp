/// Todo List:
//	PMAG supplies - Small - Ammo_source - signs_1
//	SCAR-H supplies - Small - Support_Source signs_1
//	LAT supplies - Large - Signs_1
//	Grenade supplies - Small - Grenades_source - Signs_1
//	40mm Grenade supplies - Medium - Signs_1
//	First-Aid supplies - Small - Ammo_source - Signs_2
//		Field Dressing
//		Elastic Bandages
//		Packing Bandages
//		Quickclot Bandages
//		Splints
//		Tourniquets
//	Medical supplies - Small - Support_Source - Signs_2
//		Saline 1000, 500, 250
//		Morphine
//		epinephrine
//	MAAWS supplies - Large - Signs_1
//
//

class NATO_Box_Base; //Small box
class Box_NATO_Wps_F; // Medium box
class Box_NATO_WpsSpecial_F; // Large box
class Box_NATO_WpsLaunch_F;
class RSB_Box_Base: NATO_Box_Base {
	scope = 0;
	displayName = "Base Box";
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
	faction = "Rocks_Stupid_boxes_faction";
	editorCategory = "Rocks_Stupid_boxes_editor_category";
	vehicleClass = "Rocks_Stupid_box_classes";
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_1.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class AnimationSources{
		class Ammo_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class AmmoOrd_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Grenades_source{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
		class Support_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
	};

	
};

// Medium Crate
class RSB_Box_Medium_Base: RSB_Box_Base {
	displayName = "Base Medium Box";
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_1.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
}

// Large Crate
class RSB_Box_Large_Base: RSB_Box_Base {
	displayName = "Base Large Box";
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_1.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
}

// Long Crate
class RSB_Box_Long_Base: Box_NATO_WpsLaunch_F {
	displayName = "Base Long Box";
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_1.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
}

class RSB_Box_Ammo_Source: RSB_Box_Base{
	hiddenSelections[] = {"Camo_Signs", "Camo"};

	class AnimationSources{
		class Ammo_source{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
		class AmmoOrd_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Grenades_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Support_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
	};

}

class RSB_Box_AmmoOrd_Source: RSB_Box_Base{
	hiddenSelections[] = {"Camo_Signs", "Camo"};

	class AnimationSources{
		class Ammo_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class AmmoOrd_source{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
		class Grenades_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Support_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
	};

}

class RSB_Box_Grenade_Source: RSB_Box_Base{
	hiddenSelections[] = {"Camo_Signs", "Camo"};

	class AnimationSources{
		class Ammo_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class AmmoOrd_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Grenades_source{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
		class Support_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
	};

}

class RSB_Box_Support_Source: RSB_Box_Base{
	hiddenSelections[] = {"Camo_Signs", "Camo"};

	class AnimationSources{
		class Ammo_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class AmmoOrd_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Grenades_source{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Support_source{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
	};

}


// Specific visible items
//	PMAG supplies
class RSB_556_PMAG_TAN: RSB_556_MAG_Supplies {
	scope = 2;
	displayName = "PMAG 5.56 ammunitions";

	class TransportMagazines {
		class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan{
			magazine="rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan";
			count=40;
		};
	};
};
//	SCAR-H supplies
class RSB_762_20RND_M80: RSB_762_MAG_Supplies {
	scope = 2
	displayName = "SCAR-H M80 20Rnd"

	class TransportMagazines {
		class rhs_mag_20Rnd_SCAR_762x51_m80_ball{
			magazine="rhs_mag_20Rnd_SCAR_762x51_m80_ball";
			count=40;
		};
	};
};

class RSB_Medical_Supplies: RSB_Box_Base {

};

class RSB_Grenade_Supplies: RSB_Box_Base {

};

class RSB_Anti_Tank_Supplies: RSB_Box_Base {

};
