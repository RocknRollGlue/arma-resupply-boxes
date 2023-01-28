
class NATO_Box_Base;

class RSB_Box_Base: NATO_Box_Base {
	//category = "Rocks_Stupid_boxes";
	scope = 0;
	displayName = "base box";
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
	faction = "Rocks_Stupid_boxes_faction";
	editorCategory = "Rocks_Stupid_boxes_editor_category";
	vehicleClass = "Rocks_Stupid_box_classes";
	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\rocks_Stupid_box\data\usa_signs_1.paa", // check https://forums.bohemia.net/forums/topic/192937-help-addon-builder-imagepaa/
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

class RSB_556_MAG_Supplies: RSB_Box_Base {
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

class RSB_762_MAG_Supplies: RSB_Box_Base{
	hiddenSelections[] = {"Camo_Signs", "Camo"};
    class AnimationSources
	{
		class Ammo_source
		{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class AmmoOrd_source
		{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Grenades_source
		{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
		class Support_source
		{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
	};
};

class RSB_Medical_Supplies: RSB_Box_Base {
	hiddenSelections[] = {"Camo_Signs", "Camo"};

    class AnimationSources
	{
		class Ammo_source
		{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class AmmoOrd_source
		{
			source = "user";
			initPhase = 0;
			animPeriod = 1;
		};
		class Grenades_source
		{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
		class Support_source
		{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
	};
};

class RSB_Grenade_Supplies: RSB_Box_Base {

};

class RSB_Anti_Tank_Supplies: RSB_Box_Base {

};

// Specific visible items
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