/*
  Author: R3vo

  Date: 2020-10-20

  Description:
  Used by the CfgSentences Browser GUI. Called when filter is changed.

  Parameter(s):
  0: CONTROL - Toolbox
  1: NUMBER - Index

  Returns:
  -
*/

#include "\3denEnhanced\defines\ENH_defineCommon.hpp"

params ["_ctrlFilter", "_selectedIndex"];
[_ctrlFilter lbData _selectedIndex] call ENH_fnc_CFGS_getCfgSentences;

(ctrlparent _ctrlFilter) displayCtrl IDC_SENTENCES_SEARCH ctrlSetText "";