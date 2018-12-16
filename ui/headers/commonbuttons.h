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
	GOBACK_BUTTON(_text,_menuToClose,_menuToOpen,_cvarForTabs)
	GONEXT_BUTTON(_text,_menuToClose,_menuToOpen,_cvarForTabs,_tip)
	GONEXT_BUTTON_SHOW(_text,_menuToClose,_menuToOpen,_cvarForTabs,_showwithcvar,_showwithcvarvalue,_tip)
	GOBACKTAB_BUTTON(_text,_cvarForTabs,_tabNum,_allowedMenus)
	GONEXTTAB_BUTTON(_text,_cvarForTabs,_tabNum,_allowedMenus,_tip)
	GONEXTTAB_BUTTON_SHOW(_text,_cvarForTabs,_tabNum,_allowedMenus,_showwithcvar,_showwithcvarvalue,_tip)
*/

// always have this button in menus.
/* Go back to previous menu */
#define GOBACK_BUTTON(_text,_menuToClose,_menuToOpen, _cvarForTabs) \
itemDef {\
	name goback_button\
	text _text\
	background MP_WIDEBUTTONBG\
	style 1\
	type ITEM_TYPE_BUTTON\
	textstyle 2\
	textscale 0.5\
	rect 32 384 256 32\
	textalignx 32\
	textaligny 24\
	backcolor MP_BUTTONBGCOLOR\
	forecolor MP_TEXTCOLOR\
	mouseEnter {\
		setcvar ui_tip "Go back to the previous menu.";\
		fadein tooltip;\
	}\
	mouseExit {\
		fadeout tooltip;\
	}\
	action {\
		play MP_SND_SELECT;\
		close _menuToClose;\
		open _menuToOpen;\
		setcvar _cvarForTabs 0; \
	}\
	visible 1\
}
/* Go forward to the next menu */
#define GONEXT_BUTTON(_text,_menuToClose,_menuToOpen,_cvarForTabs,_tip) \
itemDef {\
	name gonext_button\
	text _text\
	background MP_WIDEBUTTONBG\
	style 1\
	type ITEM_TYPE_BUTTON\
	textstyle 2\
	textscale 0.5\
	rect 332 384 256 32\
	textalignx 32\
	textaligny 24\
	backcolor MP_BUTTONBGCOLOR\
	forecolor MP_TEXTCOLOR\
	mouseEnter {\
		setcvar ui_tip _tip;\
		fadein tooltip;\
	}\
	mouseExit {\
		fadeout tooltip;\
	}\
	action {\
		play MP_SND_SELECT;\
		close _menuToClose;\
		open _menuToOpen;\
		setcvar _cvarForTabs 0; \
	}\
	visible 1\
}
/* Go forward to the next menu (conditional - show) */
#define GONEXT_BUTTON_SHOW(_text,_menuToClose,_menuToOpen,_cvarForTabs,_showwithcvar,_showwithcvarvalue,_tip) \
itemDef {\
	name gonext_button\
	text _text\
	background MP_WIDEBUTTONBG\
	style 1\
	type ITEM_TYPE_BUTTON\
	textstyle 2\
	textscale 0.5\
	rect 332 384 256 32\
	textalignx 32\
	textaligny 24\
	backcolor MP_BUTTONBGCOLOR\
	forecolor MP_TEXTCOLOR\
	cvarTest _showwithcvar showCVar { _showwithcvarvalue }\
	mouseEnter {\
		setcvar ui_tip _tip;\
		fadein tooltip;\
	}\
	mouseExit {\
		fadeout tooltip;\
	}\
	action {\
		play MP_SND_SELECT;\
		close _menuToClose;\
		open _menuToOpen;\
		setcvar _cvarForTabs 0; \
	}\
	visible 1\
}
/* Go back to previous menu - tabbed version */
#define GOBACKTAB_BUTTON(_text,_cvarForTabs,_tabNum,_allowedMenus) \
itemDef {\
	name gonexttab_button\
	text _text\
	background MP_WIDEBUTTONBG\
	style 1\
	type ITEM_TYPE_BUTTON\
	textstyle 2\
	textscale 0.5\
	rect 32 384 256 32\
	textalignx 32\
	textaligny 24\
	backcolor MP_BUTTONBGCOLOR\
	forecolor MP_TEXTCOLOR\
	cvarTest _cvarForTabs showCVar { _allowedMenus }\
	mouseEnter {\
		setcvar ui_tip "Go back to the previous menu.";\
		fadein tooltip;\
	}\
	mouseExit {\
		fadeout tooltip;\
	}\
	action {\
		play MP_SND_SELECT;\
		setcvar _cvarForTabs _tabNum; \
	}\
	visible 1\
}
/* Go forward to the next menu - tabbed version */
#define GONEXTTAB_BUTTON(_text,_cvarForTabs,_tabNum,_allowedMenus,_tip) \
itemDef {\
	name gonexttab_button\
	text _text\
	background MP_WIDEBUTTONBG\
	style 1\
	type ITEM_TYPE_BUTTON\
	textstyle 2\
	textscale 0.5\
	rect 332 384 256 32\
	textalignx 32\
	textaligny 24\
	backcolor MP_BUTTONBGCOLOR\
	forecolor MP_TEXTCOLOR\
	cvarTest _cvarForTabs showCVar { _allowedMenus }\
	mouseEnter {\
		setcvar ui_tip _tip;\
		fadein tooltip;\
	}\
	mouseExit {\
		fadeout tooltip;\
	}\
	action {\
		play MP_SND_SELECT;\
		setcvar _cvarForTabs _tabNum; \
	}\
	visible 1\
}
/* Go forward to the next menu (conditional - show) - tabbed version */
#define GONEXTTAB_BUTTON_SHOW(_text,_cvarForTabs,_tabNum,_allowedMenus,_showwithcvar,_showwithcvarvalue,_tip) \
itemDef {\
	name gonexttab_button\
	text _text\
	background MP_WIDEBUTTONBG\
	style 1\
	type ITEM_TYPE_BUTTON\
	textstyle 2\
	textscale 0.5\
	rect 332 384 256 32\
	textalignx 32\
	textaligny 24\
	backcolor MP_BUTTONBGCOLOR\
	forecolor MP_TEXTCOLOR\
	cvarTest _showwithcvar showCVar { _showwithcvarvalue }\
	cvarTest _cvarForTabs showCVar { _allowedMenus }\
	mouseEnter {\
		setcvar ui_tip _tip;\
		fadein tooltip;\
	}\
	mouseExit {\
		fadeout tooltip;\
	}\
	action {\
		play MP_SND_SELECT;\
		setcvar _cvarForTabs _tabNum; \
	}\
	visible 1\
}
