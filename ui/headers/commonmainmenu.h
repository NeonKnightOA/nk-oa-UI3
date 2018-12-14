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
	MENUTITLE(_text)
	MENUTITLEHIDE(_text,_hidewithcvar,_hidewithcvarvalue)
	MENUTITLESHOW(_text,_showwithcvar,_showwithcvarvalue)
	MENUITEM(_position,_text,_closemenu,_openmenu,_tipmenu)
	MENUITEMACTION(_position,_text,_closemenu,_openmenu,_action,_tipmenu)
	MENUITEMDISABLED(_position,_text,_closemenu,_openmenu,_action,_tipmenu)
	MENUITEMHIDE(_position,_text,_closemenu,_openmenu,_hidewithcvar,_hidewithcvarvalue,_tipmenu)
	MENUITEMSHOW(_position,_text,_closemenu,_openmenu,_showwithcvar,_showwithcvarvalue,_tipmenu)
*/

/* Menu title */
#define MENUTITLE(_text) \
itemDef { \
	name buttontip1 \
	text _text \
	background MP_LONGBUTTONBG \
	style 1 \
	type ITEM_TYPE_BUTTON \
	textstyle 2 \
	textscale 0.7 \
	rect MMENU_OFFSETITEMH MENU_ITEM_TITLE_Y MENU_ITEM_WIDTH_LARGE MENU_ITEM_HEIGHT \
	decoration \
	textalign MMENU_ALIGNITEM \
	textalignx 256 \
	textaligny 24 \
	forecolor MP_TEXTCOLOR \
	visible 1 \
	hexcolor 0 1 2 3 \
}
/* Menu title - hide */
#define MENUTITLEHIDE(_text,_hidewithcvar,_hidewithcvarvalue) \
itemDef { \
	name buttontip1 \
	text _text \
	background MP_LONGBUTTONBG \
	style 1 \
	type ITEM_TYPE_BUTTON \
	textstyle 2 \
	textscale 0.7 \
	rect MMENU_OFFSETITEMH MENU_ITEM_TITLE_Y MENU_ITEM_WIDTH_LARGE MENU_ITEM_HEIGHT \
	decoration \
	textalign MMENU_ALIGNITEM \
	textalignx 256 \
	textaligny 24 \
	forecolor MP_TEXTCOLOR \
	visible 1 \
	hexcolor 0 1 2 3 \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}
/* Menu title - show */
#define MENUTITLESHOW(_text,_showwithcvar,_showwithcvarvalue) \
itemDef { \
	name buttontip1 \
	text _text \
	background MP_LONGBUTTONBG \
	style 1 \
	type ITEM_TYPE_BUTTON \
	textstyle 2 \
	textscale 0.7 \
	rect MMENU_OFFSETITEMH MENU_ITEM_TITLE_Y MENU_ITEM_WIDTH_LARGE MENU_ITEM_HEIGHT \
	decoration \
	textalign MMENU_ALIGNITEM \
	textalignx 256 \
	textaligny 24 \
	forecolor MP_TEXTCOLOR \
	visible 1 \
	hexcolor 0 1 2 3 \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}
/* Unconditional menu */
#define MENUITEM(_position,_text,_closemenu,_openmenu,_tipmenu) \
itemDef { \
	name button \
	background MP_LONGBUTTONBG style 1 type ITEM_TYPE_BUTTON textstyle 2 textscale 0.5 textalign MMENU_ALIGNITEM textalignx 256 textaligny 24 forecolor MP_TEXTCOLOR visible 1 hexcolor 0 1 2 3 \
	text _text \
	rect MMENU_OFFSETITEMH _position MENU_ITEM_WIDTH_LARGE MENU_ITEM_HEIGHT \
	action { \
		play MP_SND_SELECT; \
		close _closemenu; \
		open _openmenu; \
		setcvar ui_menutab 0; \
	} \
	mouseEnter { \
		setcvar ui_tip _tipmenu; \
		fadein tooltip; \
		setbackground MP_LONGBUTTONBGA; \
	} \
	mouseExit { \
		fadeout tooltip; \
		setbackground MP_LONGBUTTONBG; \
	} \
}
/* Unconditional menu */
#define MENUITEMDISABLED(_position,_text,_closemenu,_openmenu,_tipmenu) \
itemDef { \
	name button \
	background MP_LONGBUTTONBG style 1 type 0 textstyle 2 textscale 0.5 textalign MMENU_ALIGNITEM textalignx 256 textaligny 24 forecolor MP_TEXTCOLOR visible 1 hexcolor 0 1 2 3 \
	text _text \
	rect MMENU_OFFSETITEMH _position MENU_ITEM_WIDTH_LARGE MENU_ITEM_HEIGHT \
	action { \
	} \
	mouseEnter { \
		setcvar ui_tip _tipmenu; \
		fadein tooltip; \
		setbackground MP_LONGBUTTONBGA; \
	} \
	mouseExit { \
		fadeout tooltip; \
		setbackground MP_LONGBUTTONBG; \
	} \
}
/* Unconditional menu + action to perform */
#define MENUITEMACTION(_position,_text,_closemenu,_openmenu,_action,_tipmenu) \
itemDef { \
	name button \
	background MP_LONGBUTTONBG style 1 type ITEM_TYPE_BUTTON textstyle 2 textscale 0.5 textalign MMENU_ALIGNITEM textalignx 256 textaligny 24 forecolor MP_TEXTCOLOR visible 1 hexcolor 0 1 2 3 \
	text _text \
	rect MMENU_OFFSETITEMH _position MENU_ITEM_WIDTH_LARGE MENU_ITEM_HEIGHT \
	action { \
		play MP_SND_SELECT; \
		close _closemenu; \
		open _openmenu; \
		setcvar ui_menutab 0; \
		_action; \
	} \
	mouseEnter { \
		setcvar ui_tip _tipmenu; \
		fadein tooltip; \
		setbackground MP_LONGBUTTONBGA; \
	} \
	mouseExit { \
		fadeout tooltip; \
		setbackground MP_LONGBUTTONBG; \
	} \
}
/* Conditional menu - hide */
#define MENUITEMHIDE(_position,_text,_closemenu,_openmenu,_hidewithcvar,_hidewithcvarvalue,_tipmenu) \
itemDef { \
	name button \
	background MP_LONGBUTTONBG style 1 type ITEM_TYPE_BUTTON textstyle 2 textscale 0.5 textalign MMENU_ALIGNITEM textalignx 256 textaligny 24 forecolor MP_TEXTCOLOR visible 1 hexcolor 0 1 2 3 \
	text _text \
	rect MMENU_OFFSETITEMH _position MENU_ITEM_WIDTH_LARGE MENU_ITEM_HEIGHT \
	action { \
		play MP_SND_SELECT; \
		close _closemenu; \
		open _openmenu; \
		setcvar ui_menutab 0; \
	} \
	mouseEnter { \
		setcvar ui_tip _tipmenu; \
		fadein tooltip; \
		setbackground MP_LONGBUTTONBGA; \
	} \
	mouseExit { \
		fadeout tooltip; \
		setbackground MP_LONGBUTTONBG; \
	} \
	cvarTest _hidewithcvar hideCVar { _hidewithcvarvalue } \
}
/* Conditional menu - show */
#define MENUITEMSHOW(_position,_text,_closemenu,_openmenu,_showwithcvar,_showwithcvarvalue,_tipmenu) \
itemDef { \
	name button \
	background MP_LONGBUTTONBG style 1 type ITEM_TYPE_BUTTON textstyle 2 textscale 0.5 textalign MMENU_ALIGNITEM textalignx 256 textaligny 24 forecolor MP_TEXTCOLOR visible 1 hexcolor 0 1 2 3 \
	text _text \
	rect MMENU_OFFSETITEMH _position MENU_ITEM_WIDTH_LARGE MENU_ITEM_HEIGHT \
	action { \
		play MP_SND_SELECT; \
		close _closemenu; \
		open _openmenu; \
		setcvar ui_menutab 0; \
	} \
	mouseEnter { \
		setcvar ui_tip _tipmenu; \
		fadein tooltip; \
		setbackground MP_LONGBUTTONBGA; \
	} \
	mouseExit { \
		fadeout tooltip; \
		setbackground MP_LONGBUTTONBG; \
	} \
	cvarTest _showwithcvar showCVar { _showwithcvarvalue } \
}
