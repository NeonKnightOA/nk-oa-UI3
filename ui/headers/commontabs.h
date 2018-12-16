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
	TAB(_tab,_text,_position)
*/

#define TAB(_tab,_text,_position) \
itemDef { \
	name tab1 \
	text _text \
	background MP_TABOFF \
	style 1 \
	type ITEM_TYPE_BUTTON \
	textstyle 2 \
	textscale MENU_TAB_TEXTSCALE \
	rect _position TABPOSY MENU_TAB_NAME_WIDTH MENU_TAB_NAME_HEIGHT \
	cvarTest "ui_menutab" hideCVar { _tab } \
	textalign ITEM_ALIGN_CENTER \
	textalignx MENU_TAB_MARGIN_X \
	textaligny MENU_TAB_MARGIN_Y \
	forecolor MP_TEXTCOLOR \
	backcolor MP_TABOFFBGCOLOR \
	action { \
		setcvar ui_menutab _tab; \
		play MP_SND_SELECT; \
	} \
	visible 1 \
	hexcolor 0 1 2 3 \
}\
itemDef { \
	name tab1 \
	text _text \
	background MP_TABON \
	style 1 \
	type ITEM_TYPE_BUTTON \
	textstyle 2 \
	textscale MENU_TAB_TEXTSCALE \
	rect _position TABPOSY MENU_TAB_NAME_WIDTH MENU_TAB_NAME_HEIGHT \
	cvarTest "ui_menutab" showCVar { _tab } \
	textalign ITEM_ALIGN_CENTER \
	textalignx MENU_TAB_MARGIN_X \
	textaligny MENU_TAB_MARGIN_Y \
	decoration \
	backcolor MP_TABONBGCOLOR \
	visible 1 \
	hexcolor 0 1 2 3 \
}
