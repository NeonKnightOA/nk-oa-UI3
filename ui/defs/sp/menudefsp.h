/*
===========================================================================
Copyright (C) 1999-2005 Id Software, Inc.

This file is part of Quake III Arena source code.

Quake III Arena source code is free software; you can redistribute it
and/or modify it under the terms of the GNU General Public License as
published by the Free Software Foundation; either version 2 of the License,
or (at your option) any later version.

Quake III Arena source code is distributed in the hope that it will be
useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/
//Having this for the SP ladders and other modes that require them.
#define SP_RUNG(_name,_mapNumber,_cvarToUnlock,_cvarToUnlockNext,_gametypeNumber,_description,_position,_fraglimit,_capturelimit,_timelimit,_addrules,_addrule1,_addrule2,_addrule3) \
itemDef { /* Map 1*/ \
	name rung_gametypeNumber_position\
	text _name\
	ownerdraw UI_MENUMAPNAME\
	background MP_WIDEBUTTONBG\
	style 1\
	type ITEM_TYPE_BUTTON\
	textstyle 2\
	textscale 0.5\
	rect 32 _position 256 32 /* MENU_ITEM_??? */\
	textalignx 32\
	textaligny 24\
	forecolor MP_TEXTCOLOR\
	backcolor MP_BUTTONBGCOLOR\
	mapnum _mapNumber\
	cvarTest _cvarToUnlock showcvar { "1" }\
	cvarTest ui_gametype showcvar { _gametypeNumber }\
	action {\
		play MP_SND_SELECT;\
		setcvar ui_tip _description;\
		setcvar ui_currentMap _mapNumber;\
		setcvar fraglimit _fraglimit;\
		setcvar capturelimit _capturelimit;\
		setcvar timelimit _timelimit;\
		setcvar ui_additionalRules _addrules;\
		setcvar _addrule1;\
		setcvar _addrule2;\
		setcvar _addrule3;\
	}\
	visible 1 \
}