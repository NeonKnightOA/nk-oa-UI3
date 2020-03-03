/*
===========================================================================
Copyright (C) 1999-2005 Id Software, Inc.
Modified 2007-2015 Open Arena Team

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
along with Open Arena; if not, write to the Free Software
Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
===========================================================================
*/

// Neon_Knight: This is the file that should be modified with new entries.
// The old menudef.h is taken from the gamecode repo, and will be improved
// over time with more entries. As such, we need to keep both menudef synchronized.

#define  ALIGN_STRETCH 		 0
#define  ALIGN_CENTER		 1
#define  ALIGN_LETTERBOX	 2
#define  ALIGN_TOP		 3
#define  ALIGN_BOTTOM		 4
#define  ALIGN_RIGHT		 5
#define  ALIGN_LEFT		 6
#define  ALIGN_TOPRIGHT		 7
#define  ALIGN_TOPLEFT		 8
#define  ALIGN_BOTTOMRIGHT 	 9
#define  ALIGN_BOTTOMLEFT	 10
#define  ALIGN_TOP_STRETCH	 11
#define  ALIGN_BOTTOM_STRETCH	 12

// if building with this in your ../ui/ file you MUST remove the ui/!!
#include "ui/lang_english.h" // load english language
// #include "lang_fr.h" // load french
// #include "lang_de.h" // load german
// #include "lang_sp.h" // load spanish
// #include "lang_ja.h" // load japanese (won't be for a while unfortunately)
#include "ui/version.h" 	


// Text Scales and stuff
// 
// 48pt - 	1.0
// 24pt - 	0.5
// 9pt - 	0.1875

#define SMALLFONTSIZE 	12
#define MEDIUMFONTSIZE 	24
#define LARGEFONTSIZE 	24

#define KEYBINDBITTEXTSCALE .1875		// Controls menu columns


#include "themesetting.txt" 	// User can change this

// please remember to add a new line at the end of a file

