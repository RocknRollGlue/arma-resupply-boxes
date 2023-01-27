
class NATO_Box_Base;
class RSB_Box_Base: NATO_Box_Base {
	//category = "Rocks_Stupid_boxes";
	scope = 0;
	displayName = "base box";
	model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
	faction = "Rocks_Stupid_boxes";
	editorCategory = "Rocks_Stupid_boxes";

	hiddenSelections[] = {"Camo_Signs", "Camo"};
	hiddenSelectionsTextures[] = {
		"\Rocks_Stupid_box\data\usd_signs_1.paa", // check https://forums.bohemia.net/forums/topic/192937-help-addon-builder-imagepaa/
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

	class TransportMagazines {
		class rhsusf_20Rnd_762x51_m62_Mag{
			magazine="rhsusf_20Rnd_762x51_m62_Mag";
			count=40;
		};
	};
};

class RSB_556_PMAG_TAN: RSB_Box_Base {
	scope = 2;
	displayName = "PMAG 5.56 ammunitions";

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

	class TransportMagazines {
		class rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan{
			magazine="rhs_mag_30Rnd_556x45_M855A1_PMAG_Tan";
			count=40;
		};
	};
};
