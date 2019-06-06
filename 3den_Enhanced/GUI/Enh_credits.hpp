class Enh_Credits
{
	idd = -1;
	movingEnable = true;
	class ControlsBackground
	{
		DISABLE_BACKGROUND
		class Background: ctrlStaticBackground
		{
			x = 0.395 * safezoneW + safezoneX;
			y = 0.262 * safezoneH + safezoneY;
			w = 0.223125 * safezoneW;
			h = 0.504 * safezoneH;
		};
	};
	class Controls
	{
		class Header: ctrlStaticTitle
		{
			text = $STR_ENH_credits_header;
			x = 0.395 * safezoneW + safezoneX;
			y = 0.234 * safezoneH + safezoneY;
			w = 0.223125 * safezoneW;
			h = 0.028 * safezoneH;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class List: ctrlListbox
		{
			idc = 1000;
			x = 0.408125 * safezoneW + safezoneX;
			y = 0.29 * safezoneH + safezoneY;
			w = 0.196875 * safezoneW;
			h = 0.448 * safezoneH;
		};
		class Close: ctrlButtonClose
		{
			x = 0.395 * safezoneW + safezoneX;
			y = 0.766 * safezoneH + safezoneY;
			w = 0.223125 * safezoneW;
			h = 0.028 * safezoneH;
		};
	};
};

/* #define PIXEL_GRID_X	(safezoneX)
#define PIXEL_GRID_Y	(safezoneY)
#define PIXEL_GRID_W	(pixelGrid * pixelW * 0.5)
#define PIXEL_GRID_H	(pixelGrid * pixelH * 0.5)

class Enh_Credits
{
	idd = -1;
	movingEnable = true;
	class ControlsBackground
	{
		DISABLE_BACKGROUND
		class Background: ctrlStaticBackground
		{
			x = 126 * PIXEL_GRID_W + PIXEL_GRID_X;
			y = 45 * PIXEL_GRID_H + PIXEL_GRID_Y;
			w = 72 * PIXEL_GRID_W;
			h = 86 * PIXEL_GRID_H;
		};
	};
	class Controls
	{
		class Header: ctrlStaticTitle
		{
			text = $STR_ENH_credits_header;
			x = 126 * PIXEL_GRID_W + PIXEL_GRID_X;
			y = 40 * PIXEL_GRID_H + PIXEL_GRID_Y;
			w = 72 * PIXEL_GRID_W;
			h = 5 * PIXEL_GRID_H;
			colorBackground[] = COLOUR_USER_PRESET;
		};
		class List: ctrlListbox
		{
			idc = 1000;
			x = 128 * PIXEL_GRID_W + PIXEL_GRID_X;
			y = 47 * PIXEL_GRID_H + PIXEL_GRID_Y;
			w = 68 * PIXEL_GRID_W;
			h = 82 * PIXEL_GRID_H;
		};
		class Close: ctrlButtonClose
		{
			x = 126 * PIXEL_GRID_W + PIXEL_GRID_X;
			y = 131 * PIXEL_GRID_H + PIXEL_GRID_Y;
			w = 72 * PIXEL_GRID_W;
			h = 5 * PIXEL_GRID_H;
		};
	};
};
 */