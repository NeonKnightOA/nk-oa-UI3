/*
===========================================================================
Copyright (C) 2015 Open Arena Team

This file is part of Open Arena.

Open Arena is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Open Arena is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Open Arena; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
===========================================================================
*/
/*
	CONTROLS_TITLE(_tab,_column,_text)
	CONTROLS_CONTROL(_tab,_column,_position,_text,_command)
	CONTROLS_CONTROL_HIDE(_tab,_column,_position,_text,_hidewithcvar,_hidewithcvarvalue,_command)
	CONTROLS_CONTROL_SHOW(_tab,_column,_position,_text,_showwithcvar,_showwithcvarvalue,_command)
	CONTROLS_CHECKBOX(_tab,_column,_position,_text,_cvar,_tip)
	CONTROLS_CHECKBOX_HIDE(_tab,_column,_position,_text,_cvar,_hidewithcvar,_hidewithcvarvalue,_tip)
	CONTROLS_CHECKBOX_SHOW(_tab,_column,_position,_text,_cvar,_showwithcvar,_showwithcvarvalue,_tip)
	CONTROLS_MULTI(_tab,_column,_position,_text,_cvar,_options,_tip)
	CONTROLS_MULTI_HIDE(_tab,_column,_position,_text,_cvar,_options,_hidewithcvar,_hidewithcvarvalue,_tip)
	CONTROLS_MULTI_SHOW(_tab,_column,_position,_text,_cvar,_options,_showwithcvar,_showwithcvarvalue,_tip)
	CONTROLS_SLIDER(_tab,_column,_position,_text,_cvar,_default,_min,_max,_tip)
	CONTROLS_SLIDER_HIDE(_tab,_column,_position,_text,_cvar,_default,_min,_max,_hidewithcvar,_hidewithcvarvalue,_tip)
	CONTROLS_SLIDER_SHOW(_tab,_column,_position,_text,_cvar,_default,_min,_max,_showwithcvar,_showwithcvarvalue,_tip)
	CONTROLS_NUMERIC(_tab,_column,_position,_text,_cvar,_maxchars,_tip)
	CONTROLS_NUMERIC_HIDE(_tab,_column,_position,_text,_cvar,_maxchars,_hidewithcvar,_hidewithcvarvalue,_tip)
	CONTROLS_NUMERIC_SHOW(_tab,_column,_position,_text,_cvar,_maxchars,_showwithcvar,_showwithcvarvalue,_tip)
	CONTROLS_TEXTFIELD(_tab,_column,_position,_text,_cvar,_tip)
	CONTROLS_TEXTFIELD_HIDE(_tab,_column,_position,_text,_cvar,_hidewithcvar,_hidewithcvarvalue,_tip)
	CONTROLS_TEXTFIELD_SHOW(_tab,_column,_position,_text,_cvar,_showwithcvar,_showwithcvarvalue,_tip)
*/

/* -----------
   Titles
   ----------- */
#define CONTROLS_TITLE(_tab,_column,_text) \
itemDef { \
	name title style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TITLE_TEXTSCALE textalign ITEM_ALIGN_CENTER textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
   	rect _column MENU_ITEM_TITLE_Y MENU_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	type 0 decoration \
	text _text\
}
/* -----------
   Keybinds
   ----------- */
#define CONTROLS_CONTROL(_tab,_column,_position,_text,_command) \
itemDef { \
	name keybind style 1 backcolor MP_BUTTONBGCOLOR visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalignx 0 textaligny 12 textalign ITEM_ALIGN_RIGHT textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_BIND mouseenter { setcvar ui_tip "Press the already bound key to set a new one."; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _command \
}
#define CONTROLS_CONTROL_HIDE(_tab,_column,_position,_text,_hidewithcvar,_hidewithcvarvalue,_command) \
itemDef { \
	name keybind style 1 backcolor MP_BUTTONBGCOLOR visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalignx 0 textaligny 12 textalign ITEM_ALIGN_RIGHT textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_BIND mouseenter { setcvar ui_tip "Press the already bound key to set a new one."; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _command \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}
#define CONTROLS_CONTROL_SHOW(_tab,_column,_position,_text,_showwithcvar,_showwithcvarvalue,_command) \
itemDef { \
	name keybind style 1 backcolor MP_BUTTONBGCOLOR visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalignx 0 textaligny 12 textalign ITEM_ALIGN_RIGHT textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_BIND mouseenter { setcvar ui_tip "Press the already bound key to set a new one."; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _command \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}
/* -----------
   Checkboxes
   ----------- */
#define CONTROLS_CHECKBOX(_tab,_column,_position,_text,_cvar,_tip) \
itemDef { \
	name checkbox style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_CHECKBOX mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _cvar \
}
#define CONTROLS_CHECKBOX_HIDE(_tab,_column,_position,_text,_cvar,_hidewithcvar,_hidewithcvarvalue,_tip) \
itemDef { \
	name checkbox style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_CHECKBOX mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _cvar \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}
#define CONTROLS_CHECKBOX_SHOW(_tab,_column,_position,_text,_cvar,_showwithcvar,_showwithcvarvalue,_tip) \
itemDef { \
	name checkbox style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_CHECKBOX mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _cvar \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}
/* -----------
   Multis
   ----------- */
#define CONTROLS_MULTI(_tab,_column,_position,_text,_cvar,_options,_tip) \
itemDef { \
	name multi style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
 	type ITEM_TYPE_MULTI mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _cvar \
	cvarFloatList _options \
}
#define CONTROLS_MULTI_HIDE(_tab,_column,_position,_text,_cvar,_options,_hidewithcvar,_hidewithcvarvalue,_tip) \
itemDef { \
	name multi style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
 	type ITEM_TYPE_MULTI mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _cvar \
	cvarFloatList _options \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}
#define CONTROLS_MULTI_SHOW(_tab,_column,_position,_text,_cvar,_options,_showwithcvar,_showwithcvarvalue,_tip) \
itemDef { \
	name multi style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
 	type ITEM_TYPE_MULTI mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvar _cvar \
	cvarFloatList _options \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}
/* -----------
   Sliders
   ----------- */
#define CONTROLS_SLIDER(_tab,_column,_position,_text,_cvar,_default,_min,_max,_tip) \
itemDef { \
	name slider style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_SLIDER mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvarFloat _cvar _default _min _max \
}
#define CONTROLS_SLIDER_HIDE(_tab,_column,_position,_text,_cvar,_default,_min,_max,_hidewithcvar,_hidewithcvarvalue,_tip) \
itemDef { \
	name slider style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_SLIDER mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvarFloat _cvar _default _min _max \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}
#define CONTROLS_SLIDER_SHOW(_tab,_column,_position,_text,_cvar,_default,_min,_max,_showwithcvar,_showwithcvarvalue,_tip) \
itemDef { \
	name slider style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_SLIDER mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvarFloat _cvar _default _min _max \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}
/* -----------
   Numerics
   ----------- */

#define CONTROLS_NUMERIC(_tab,_column,_position,_text,_cvar,_maxchars,_tip) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_NUMERICFIELD mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	maxchars _maxchars \
}
#define CONTROLS_NUMERIC_HIDE(_tab,_column,_position,_text,_cvar,_maxchars,_hidewithcvar,_hidewithcvarvalue,_tip) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_NUMERICFIELD mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	maxchars _maxchars \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}
#define CONTROLS_NUMERIC_SHOW(_tab,_column,_position,_text,_cvar,_maxchars,_showwithcvar,_showwithcvarvalue,_tip) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_NUMERICFIELD mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	maxchars _maxchars \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}
/* -----------
   Textfields
   ----------- */
#define CONTROLS_TEXTFIELD(_tab,_column,_position,_text,_cvar,_tip) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_EDITFIELD mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
}
#define CONTROLS_TEXTFIELD_HIDE(_tab,_column,_position,_text,_cvar,_tip,_hidewithcvar,_hidewithcvarvalue) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_EDITFIELD mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}

#define CONTROLS_TEXTFIELD_SHOW(_tab,_column,_position,_text,_cvar,_tip,_showwithcvar,_showwithcvarvalue) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_EDITFIELD mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}

/* -----------
   Buttons
   ----------- */
#define CONTROLS_BUTTONTAB(_tab,_column,_position,_text,_cvar,_cvarValue,_tip) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	action { play MP_SND_SELECT; setcvar _cvar _cvarValue; } \
}
#define CONTROLS_BUTTONTAB_HIDE(_tab,_column,_position,_text,_cvar,_cvarValue,_hidewithcvar,_hidewithcvarvalue,_tip) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	action { play MP_SND_SELECT; setcvar _cvar _cvarValue; } \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}

#define CONTROLS_BUTTONTAB_SHOW(_tab,_column,_position,_text,_cvar,_cvarValue,_showwithcvar,_showwithcvarvalue,_tip) \
itemDef { \
	name keybinder style 1 visible 1 noFocusColor 0 textscale MENU2_ITEM_TEXTSCALE textalign ITEM_ALIGN_RIGHT textalignx 0 textaligny 12 textstyle 6 forecolor MP_TEXTCOLOR hexcolor 0 1 2 3 \
	type ITEM_TYPE_BUTTON mouseenter { setcvar ui_tip _tip; fadein tooltip; } mouseexit { fadeout tooltip; } \
	rect _column _position MENU2_ITEM_WIDTH MENU_ITEM_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	text _text \
	action { play MP_SND_SELECT; setcvar _cvar _cvarValue; } \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}
