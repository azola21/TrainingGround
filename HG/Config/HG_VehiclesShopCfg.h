/*
    Author - HoverGuy
	© All Fucks Reserved
	Website - http://www.sunrise-production.com
	
    Defines available vehicle shops
	
	class YourShopClass - Used as a param for the call, basically the shop you want to display
	{
		conditionToAccess - STRING - Condition that must return either true or false, if true the player will have access to the shop
		
		class YourShopCategory - Shop category, can be whatever you want
		{
			displayName - STRING - Category display name
			vehicles - ARRAY OF ARRAYS - Shop content
			|- 0 - STRING - Classname
			|- 1 - INTEGER - Price
			|- 2 - STRING - Condition that must return either true or false, if true the vehicle appears in the list else no
			spawnPoints - ARRAY OF ARRAYS - Spawn positions (markers/positions)
			|- 0 - STRING - Display name in the dialog
			|- 1 - ARRAY OF MIXED - Markers/positions
		};
	};
*/

class HG_DefaultShop // HG_DefaultShop is just a placeholder for testing purposes, you can delete it completely and make your own
{
    conditionToAccess = "true"; // Example: "(playerSide in [west,independent]) AND ((rank player) isEqualTo 'COLONEL')"
	
    class ALFA
	{
	    displayName = "Alfa Romeo";
		vehicles[] =
		{
		    {"AlessioQuadrifoglio",30000,"true"},
			{"AlessioQuadrifoglioC",30000,"true"},
			{"AlessioQuadrifoglioG",30000,"true"},
			{"AlessioQuadrifoglioM",30000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class AUDI
	{
	    displayName = "Audi";
		vehicles[] =
		{
		    {"AlessioRS4",25000,"true"},
			{"AlessioRS4Chrome",25000,"true"},
			{"AlessioRS4Gold",25000,"true"},
			{"AlessioRS4Mat",25000,"true"},
			{"V12_RS609_BLEU",30000,"true"},
			{"V12_RS609_GRIS",30000,"true"},
			{"V12_RS609_NOIR",30000,"true"},
			{"V12_RS609_ORANGE",30000,"true"},
			{"V12_RS609",30000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
	
	class Blackmanswilly
	{
	    displayName = "BMW";
		vehicles[] =
		{
		    {"zorak_bmw_x6m",28000,"true"},
			{"AlessioBM4",28000,"true"},
			{"AlessioBMC",28000,"true"},
			{"AlessioBMG",28000,"true"},
			{"AlessioBM4M",28000,"true"},
			{"AlessioM5",28000,"true"},
			{"AlessioM5_Chrome",28000,"true"},
			{"AlessioM5_Gold",28000,"true"},
			{"AlessioM5Mat",28000,"true"}
		};
	    spawnPoints[] =
		{
			{"Spawn Point #1",{"civilian_vehicles_spawn_1"}}
		};
	};
};
