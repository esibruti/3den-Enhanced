/*
  Author: R3vo

  Date: 2020-06-14

  Description:
  Used by the ENH_InventoryManager GUI. Filters the item list.

  Parameter(s):
  0: CONTROL - Control Toolbox
  1: NUMBER - Selected Index

  Returns:
  BOOLEAN: true
*/

#include "\3denEnhanced\defineCommon.hpp"

disableSerialization;
params ["_ctrlFilter","_selectedIndex"];

private _display = ctrlparent _ctrlFilter;
private _types = uiNamespace getVariable "ENH_IM_Types";
private _filterType = _types select _selectedIndex;
private _filteredItems = [];

//Collect all items which fit the filter
{
  _x params ["_configName","_displayName","_picture","_addonClass","","_addonIcon","_category","_specificType"];
  if ((_specificType == _filterType || _category == _filterType) && (!(_category == _filterType && _specificType in _types) || (_category == _specificType))) then
  {
    _filteredItems pushBack [_configName,_displayName,_picture,_addonClass,_addonIcon];
  };
} forEach (uiNamespace getVariable "ENH_IM_allItems");

//Store items to improve search later
uiNamespace setVariable ["ENH_IM_FilteredItems",_filteredItems];

//Fill listbox via the search function
CTRL(IDC_IM_SEARCH) call ENH_fnc_IM_search;

//Scroll all the way to the top to prevent items not being displayed because it was scrolled down too far
CTRL(IDC_IM_AVAILABLEITEMSLIST) ctrlSetScrollValues [0,0];

true