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
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Foobar; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/
/*
	SP_RUNGFREE(_rungtitle,_rungnumber,_gametype,_description,_position,_fraglimit,_capturelimit,_timelimit,_specialrules,_specialrule1,_specialrule2,_specialrule3);
	SP_RUNG(_rungtitle,_rungnumber,_rungunlocker,_gametype,_description,_position,_fraglimit,_capturelimit,_timelimit,_specialrules,_specialrule1,_specialrule2,_specialrule3);
*/
#define SP_RUNGFREE(_rungtitle,_rungnumber,_gametype,_description,_position,_fraglimit,_capturelimit,_timelimit,_specialrules,_specialrule1,_specialrule2,_specialrule3) \
itemDef { \
	name button1 \
	text _rungtitle \
	ownerdraw UI_MENUMAPNAME \
	background MP_WIDEBUTTONBG \
	style 1 \
	type ITEM_TYPE_BUTTON \
	textstyle 2 \
	textscale 0.5 \
	rect 32 _position 256 32 \
	textalignx 32 \
	textaligny 24 \
	forecolor MP_TEXTCOLOR \
	backcolor MP_BUTTONBGCOLOR \
	mapnum _rungnumber \
	cvarTest ui_gametype showcvar { _gametype } \
	action { \
		play MP_SND_SELECT; \
		setcvar ui_tip _description; \
		setcvar ui_currentMap _rungnumber; \
		setcvar fraglimit _fraglimit; \
		setcvar capturelimit _capturelimit; \
		setcvar timelimit _timelimit; \
		setcvar _specialrules; \
		setcvar _specialrule1; \
		setcvar _specialrule2; \
		setcvar _specialrule3; \
	} \
	visible 1 \
}
#define SP_RUNG(_rungtitle,_rungnumber,_rungunlocker,_gametype,_description,_position,_fraglimit,_capturelimit,_timelimit,_specialrules,_specialrule1,_specialrule2,_specialrule3) \
itemDef { \
	name button1 \
	text _rungtitle \
	ownerdraw UI_MENUMAPNAME \
	background MP_WIDEBUTTONBG \
	style 1 \
	type ITEM_TYPE_BUTTON \
	textstyle 2 \
	textscale 0.5 \
	rect 32 _position 256 32 \
	textalignx 32 \
	textaligny 24 \
	forecolor MP_TEXTCOLOR \
	backcolor MP_BUTTONBGCOLOR \
	mapnum _rungnumber \
	cvarTest _rungunlocker showcvar { "1" } \
	cvarTest ui_gametype hidecvar { _gametype } \
	action { \
		play MP_SND_SELECT; \
		setcvar ui_tip _description; \
		setcvar ui_currentMap _rungnumber; \
		setcvar fraglimit _fraglimit; \
		setcvar capturelimit _capturelimit; \
		setcvar timelimit _timelimit; \
		setcvar _specialrules; \
		setcvar _specialrule1; \
		setcvar _specialrule2; \
		setcvar _specialrule3; \
	} \
	visible 1 \
}
