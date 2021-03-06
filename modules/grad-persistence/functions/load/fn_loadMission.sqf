#define PREFIX grad
#define COMPONENT persistence
#include "\x\cba\addons\main\script_macros_mission.hpp"

_saveUnits = ([missionConfigFile >> "CfgGradPersistence", "saveUnits", 1] call BIS_fnc_returnConfigEntry) > 0;
if (_saveUnits) then {[] call grad_persistence_fnc_loadGroups};

_saveVehicles = ([missionConfigFile >> "CfgGradPersistence", "saveVehicles", 1] call BIS_fnc_returnConfigEntry) > 0;
if (_saveVehicles) then {[] call grad_persistence_fnc_loadVehicles};

_saveVehicles = ([missionConfigFile >> "CfgGradPersistence", "saveContainers", 1] call BIS_fnc_returnConfigEntry) > 0;
if (_saveVehicles) then {[] call grad_persistence_fnc_loadContainers};

_saveStatics = ([missionConfigFile >> "CfgGradPersistence", "saveStatics", 1] call BIS_fnc_returnConfigEntry) > 0;
if (_saveStatics) then {[] call grad_persistence_fnc_loadStatics};

_saveTeamAccounts = ([missionConfigFile >> "CfgGradPersistence", "saveTeamAccounts", 1] call BIS_fnc_returnConfigEntry) > 0;
if (_saveTeamAccounts) then {[] call grad_persistence_fnc_loadTeamAccounts};

// server side player loading disabled in favor of player side load request
/* _savePlayerInventory = ([missionConfigFile >> "CfgGradPersistence", "savePlayerInventory", 1] call BIS_fnc_returnConfigEntry) == 1;
_savePlayerDamage = ([missionConfigFile >> "CfgGradPersistence", "savePlayerDamage", 1] call BIS_fnc_returnConfigEntry) == 1;
_savePlayerPosition = ([missionConfigFile >> "CfgGradPersistence", "savePlayerPosition", 1] call BIS_fnc_returnConfigEntry) == 1;
_savePlayerMoney = ([missionConfigFile >> "CfgGradPersistence", "savePlayerMoney", 1] call BIS_fnc_returnConfigEntry) == 1;
if (_savePlayerInventory || _savePlayerDamage || _savePlayerPosition || _savePlayerMoney) then {[_savePlayerInventory,_savePlayerDamage,_savePlayerPosition,_savePlayerMoney] call grad_persistence_fnc_loadAllPlayers}; */

INFO("mission loaded");
"grad-persistence: mission loaded" remoteExec ["systemChat",0,false];
