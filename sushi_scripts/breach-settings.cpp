/* BREACH Settings */

class BREACH 
	{	
		useBreach = 1; //< 0 script off, 1 script on
		//closeFix = 1; //< try to use it if script dont work on some maps like N`ziwasogo.
		//customDoorNames[] = {"vrata1","vrata2"}; //< use to define custom door names if script dont work
		
		/*Allow to lock pick closed doors (player must have ToolKIT item or ACE_key_lockpick item in inventory)*/
		allowLockPick = 1; //< 0-no, 1 -yes
		
		/*Allow to breach doors with gun*/
		allowGunBreach = 1; //< 0-no, 1-yes
		gunClasses[] = {"rhs_weap_M590_8RD","rhs_weap_M590_5RD"}; //< classes of guns that allowed to breach doors. RHS shotgun default.
		
		/*Allow to breach doors with explosive, (player must have Demolition block item in inventory -works with vanilla, ace3 and RHS)*/
		allowExplosiveBreach = 1; 
		
		
		/* Zones with locked doors */
		class lockDoor {
			
			/*Zone example:*/
			class zone_1 //< custom zone name
			{
				zone = "mrk_zone_lockDoor_1"; //< marker (rectangle or elipse) that covers zone
				closeDoors = 1; //<1- close all doors in zone, 0- do nothing
				lockAll = 1; //< 1- lock all closed doors in zone, 0-lock random closed doors
			};
			
			/* Another zone example: */
			class my_zone_2 
			{
				zone = "mrk_zone_lockDoor_2";
				lockAll = 1; 
			};
			
		};
	};
