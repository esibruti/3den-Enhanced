class Cfg3DEN
{
  class Notifications
  {
    class ENH_DataCopied
    {
      isWarning = 0;
      text = "$STR_A3_RSCDISPLAYARSENAL_MESSAGE_CLIPBOARD";
    };
    class ENH_ActionPerformed
    {
      isWarning = 0;
      text = "$STR_ENH_NOTIFICATIONS_ACTIONPERFORMED";
    };
    class ENH_NoEntitiesSelected
    {
      isWarning = 1;
      text = "$STR_ENH_NOTIFICATIONS_NOENTITIESSELECTED";
    };
  };
  class EventHandlers
  {
    class ENH
    {
      onTerrainNew = "call ENH_fnc_EH_onTerrainNew";
      onMissionPreviewEnd = "call ENH_fnc_EH_onMissionPreviewEnd";
      onMissionLoad = "call ENH_fnc_EH_onMissionLoad";
      onMissionNew = "call ENH_fnc_EH_onMissionNew";
      onMissionPreview = "call ENH_fnc_EH_onMissionPreview";
      onSelectionChange = "call ENH_fnc_EH_onSelectionChange";
    };
  };
  class Attributes
  {
    // Base class templates
    class Default; // Empty template with pre-defined width and single line height
    class Title: Default
    {
      class Controls
      {
        class Title;
      };
    };
    #include "controls\SPR.hpp"
    #include "controls\airdrop.hpp"
    #include "controls\ambientAnimations.hpp"
    #include "controls\ambientFlyby.hpp"
    #include "controls\establishingShot.hpp"
    #include "controls\groupMarker.hpp"
    #include "controls\holdAction.hpp"
    #include "controls\introText.hpp"
    #include "controls\mapIndicators.hpp"
    #include "controls\menuStripBlacklist.hpp"
    #include "controls\missionEndingCasualties.hpp"
    #include "controls\subCategoryNoHeader_Fixed.hpp"
    #include "controls\timeMultiplier.hpp"
  };
  class Mission
  {
    class Preferences
    {
      class AttributeCategories
      {
        class Camera
        {
          class Attributes
          {
            #include "attributesEditor\dynamicViewDistance.hpp"
          };
        };
        #include "attributesEditor\interface.hpp"
        #include "attributesEditor\debugOptions.hpp"
      };
    };
    class Intel
    {
      class AttributeCategories
      {
        #include "attributesMission\timeMultiplier.hpp"
        #include "attributesMission\visualSettings.hpp"
      };
    };
    class Scenario
    {
      class AttributeCategories
      {
        #include "attributesMission\volume.hpp"
        #include "attributesMission\ambientFlyby.hpp"
        #include "attributesMission\airdrop.hpp"
        #include "attributesMission\establishingShot.hpp"
        #include "attributesMission\introText.hpp"
        #include "attributesMission\briefings.hpp"
        #include "attributesMission\missionEnding.hpp"
        #include "attributesMission\SPR.hpp"
        class Misc
        {
          class Attributes
          {
            #include "attributesMission\addObjectsToZeus.hpp"
            #include "attributesMission\mapIndicators.hpp"
          };
        };
      };
    };
    class Multiplayer
    {
      class AttributeCategories
      {
        #include "attributesMission\dynamicGroups.hpp"
        class Respawn
        {
          class Attributes
          {
            #include "attributesMission\respawnTickets.hpp"
            #include "attributesMission\saveLoadout.hpp"
          };
        };
      };
    };
  };
  class Group
  {
    class AttributeCategories
    {
      #include "attributesGroup\groupMarker.hpp"
      class State
      {
        class Attributes
        {
          #include "attributesGroup\taskPatrol.hpp"
        };
      };
    };
  };
  class Object
  {
    class AttributeCategories
    {
      #include "attributesObject\ambientAnimations.hpp"
      #include "attributesObject\AI.hpp"
      #include "attributesObject\advancedDamageUnit.hpp"
      #include "attributesObject\advancedDamageVehicle.hpp"
      #include "attributesObject\unitTraits.hpp"
      #include "attributesObject\holdAction.hpp"
      class StateSpecial
      {
        class Attributes
        {
          #include "attributesObject\setCaptive.hpp"
          #include "attributesObject\allowSprint.hpp"
          #include "attributesObject\forceWalk.hpp"
          #include "attributesObject\makeHostage.hpp"
          #include "attributesObject\parachute.hpp"
          #include "attributesObject\enableHeadlights.hpp"
          #include "attributesObject\allowCrewInImmobile.hpp"
          #include "attributesObject\engineOn.hpp"
          #include "attributesObject\disableNVGE.hpp"
          #include "attributesObject\disableTIE.hpp"
          #include "attributesObject\limitSpeed.hpp"
          #include "attributesObject\doStop.hpp"
          #include "attributesObject\removeFromRemainsCollector.hpp"
          #include "attributesObject\SPRTickets.hpp"
        };
      };
      class Inventory
      {
        class Attributes
        {
          #include "attributesObject\addGunLight.hpp"
          #include "attributesObject\arsenal.hpp"
        };
      };
      class State
      {
        class Attributes
        {
          #include "attributesObject\setMass.hpp"
          #include "attributesObject\featureType.hpp"
          #include "attributesObject\forceFlag.hpp"
        };
      };
    };
  };
};