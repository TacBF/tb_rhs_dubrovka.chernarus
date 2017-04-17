class ICE {
    class vehicles {
        class armaments { startFullyRearmed = 1; };
    };
    class zones {
        #include "zoneList.hpp"
    };

	class mission {
		gameMode = "A&S";
		missionScale = "medium";
		recommendedTotalPlayers = 40;

        class briefings {
            class west { original = "briefing_blue.hpp"; };
            class east { original = "briefing_red.hpp"; };
        };

		class factions {
			class faction {
				bluFor = "TB_faction_GBR";
				opFor = "TB_faction_RUS";
			};
		};
		class scoring {
			class tickets {
				bluFor = 120;
				opFor = 120;
			};
		};
	};
	class respawn {
        class vehicles {
            class respawnDelay {
                multiplier = 0.75;
            };
        };
		class FO {
			minSpacingDist = 500;
			maxFriendlySiteDist = 1000;
			minZoneDist = 250;
			minEnemyFBDist = 500;
			minEnemyBaseDist = 1000;
            minEnemyZoneDist = 350;
		};
		class SRP {
			maxFriendlySiteDist = 450;
		};
		class HO {
			minSpacingDist = 250;
		};

        class infantry {
            baseDuration = 60;
            class unevenTeamsPenaltyTime
            {
                ratioDuration = 60;
                maxDuration = 150;
            };
        };
	};
	class gameModes {
	    class objectives {
            class zones {
                class captureRates {
                    heldZoneMultiplier = 1.5;
                    neutralZoneMultiplier = 2;
                    negateNeutral = 1; // set to 1 to make both Multipliers totally independent, not a "cumulative multiplier".
                };
            };
		};

		class AAS {
			class ticketBleedRate {
			 bluFor = 160;
			 opFor = 160;
			};
		};
	};
    class gear
    {
        #include "tb_kitDefines.sqh" // Unconfirmed. These files might need to be copied local to mission.
        #include "tb_magazineExclusions.hpp"

	    class NVGogglesForAll {
            west = 1;
            east = 1;
            resistance = 1;
        };

        class roles {
            #define __unlimited -99
            kits[] = {
                #include "factions\BLU_F_roleRatio.hpp"
                #include "factions\OPF_F_roleRatio.hpp"
            };
		};

	   class armaments {
         class TB_faction_GBR {
            defaultGear = "factions\BLU_F.sqh";
            #include "factions\_common_smallItems.sqh"
            #include "factions\BLU_F_gear.sqh"
            #include "factions\BLU_F_uniforms.sqh"
        };
        class TB_faction_RUS {
            defaultGear = "factions\OPF_F.sqh";
            #include "factions\_common_smallItems.sqh"
            #include "factions\OPF_F_gear.sqh"
            #include "factions\OPF_F_uniforms.sqh"
        };
      };
   };
};
