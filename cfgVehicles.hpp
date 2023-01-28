/// Todo List:
//	PMAG supplies - Small - Ammo_source - signs_1
//	SCAR-H supplies - Small - Support_Source signs_1
//	M249 supplies - small AmmoOrd_source - signs_1
//	LAT supplies - Large - Signs_1
//	MAAWS supplies - Large - Signs_1
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
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_1.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};

// Large Crate
class RSB_Box_Large_Base: RSB_Box_Base {
	displayName = "Base Large Box";
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_1.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};

// Long Crate
class RSB_Box_Long_Base: RSB_Box_Base {
	displayName = "Base Long Box";
	model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_1.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
};

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

};

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

};

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

};

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

};


// Specific visible items
// NATO_signs_1
//	PMAG supplies
class RSB_556_PMAG_TAN: RSB_Box_Ammo_Source {
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
class RSB_762_20RND_M80: RSB_Box_Support_Source {
	scope = 2;
	displayName = "SCAR-H M80 20Rnd";

	class TransportMagazines {
		class rhs_mag_20Rnd_SCAR_762x51_m80_ball{
			magazine="rhs_mag_20Rnd_SCAR_762x51_m80_ball";
			count=40;
		};
	};
};

// M136 supplies
class RSB_LAT_M136: RSB_Box_Large_Base{
	scope = 2;
	displayName = "M136";

	class TransportWeapons{
		class rhs_weap_M136{
			weapon = "rhs_weap_M136";
			count = 4;
		};
	};
};

class RSB_MAT_MAAWS: RSB_Box_Large_Base{
	scope = 2;
	displayName = "MAAWS Rounds";

	class TransportMagazines{
		class rhs_mag_maaws_HEAT{
			magazine = "rhs_mag_maaws_HEAT";
			count = 4;
		};
	};
};

class RSB_Grenades: RSB_Box_Grenade_Source{
	scope = 2;
	displayName = "Various Grenades";

	class TransportMagazines{
		class HandGrenade{
			magazine = "HandGrenade";
			count = 20;
		};
		class SmokeShellGreen{
			magazine = "SmokeShellGreen";
			count = 15;
		};
		class SmokeShellRed{
			magazine = "SmokeShellRed";
			count = 15;
		};
		class SmokeShellPurple{
			magazine = "SmokeShellPurple";
			count = 15;
		};
	};
};

class RSB_40mm_Grenades: RSB_Box_Medium_Base{
	scope = 2;
	displayName = "40mm Grenades"

	class TransportMagazines{
		class 1Rnd_HE_Grenade_shell{
			magazine = "1Rnd_HE_Grenade_shell";
			count = 15;
		};
		class 1Rnd_SmokeRed_Grenade_shell{
			magazine = "1Rnd_SmokeRed_Grenade_shell";
			count = 5;
		};
		class 1Rnd_SmokeGreen_Grenade_shell{
			magazine = "1Rnd_SmokeGreen_Grenade_shell";
			count = 5;
		};
		class rhs_mag_M583A1_white{
			magazine = "rhs_mag_M583A1_white";
			count = 5;
		};
	};
};

class RSB_556_Boxed: RSB_Box_AmmoOrd_Source{
	scope = 2;
	displayName = "M249 200rnd ammunitions";

	class TransportMagazines{
		class rhsusf_200Rnd_556x45_soft_pouch{
			magazine="rhsusf_200Rnd_556x45_soft_pouch";
			count=15;
		};
		class rhsusf_200Rnd_556x45_mixed_soft_pouch{
			magazine="rhsusf_200Rnd_556x45_mixed_soft_pouch";
			count=10;
		};
	};
};

// NATO_signs_2

class RSB_Medical_Supplies: RSB_Box_Support_Source {
	scope = 2;
	displayName = "Medical Supplies";
		hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_2.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems{
		class ACE_salineIV{
			name = "ACE_salineIV";
			count = 15;
		};
		class ACE_salineIV_500{
			name = "ACE_salineIV_500";
			count = 30;
		};
		class ACE_salineIV_250{
			name = "ACE_salineIV_250";
			count = 10;
		};
		class ACE_epinephrine{
			name = "ACE_epinephrine";
			count = 10;
		};
		class ACE_morphine{
			name = "ACE_morphine";
			count = 10;
		};
	};

};
class RSB_FirstAid_Supplies: RSB_Box_Ammo_Source {
	scope = 2;
	displayName = "First Aid Supplies";
		hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\NATO_signs_2.paa",
		"A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
	};
	class TransportItems{
		class ACE_splint{
			name = "ACE_splint";
			count = 10;
		};
		class ACE_tourniquet{
			name = "ACE_tourniquet";
			count = 10;
		};
		class ACE_fieldDressing{
			name = "ACE_fieldDressing";
			count = 35;
		};
		class ACE_packingBandage{
			name = "ACE_packingBandage";
			count = 50;
		};
		class ACE_quikclot{
			name = "ACE_quikclot";
			count = 50;
		};
		class ACE_elasticBandage{
			name = "ACE_elasticBandage";
			count = 50;
		};
	};

};