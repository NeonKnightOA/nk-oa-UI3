# UI3 Reference

## Syntax
```
#include "heresafile.h"
#define HERE_IS_A_DEFINITION "Here's a constant definition"
{
	assetGlobalDef {
		<global definitions of the menus in this section>
	}
	menuDef {
		name "menu1"
		<menu definitions>
		itemDef {
			name "item1"
			<item definitions>
		}
		itemDef {
			name "item2"
			<item definitions>
		}
	}
	menuDef {
		name "menu2"
		<menu definitions>
		itemDef {
			name "menu3"
			<item definitions>
		}
		itemDef {
			name HERE_IS_A_DEFINITION
			<item definitions>
		}
	}
}
```

**#includes** are pieces of code imported from external files.

**#defines** are tags given to data which are used more than once in a piece of code. These values are replaced in the code by their equivalents, so they can be used in order to make the code more legible.

Each section is separated by curly brackets **`{`** and **`}`**. There is a hierarchy of nesting which must be respected:

* Inside of the main curlies, only the globalassetdef and menudefs can be nested.
* Inside of the globalassetdefs, nothing can be nested.
* Inside of the menudefs, only itemdefs, onESC, onOpen, onClose, opentransitionEnd and esctransitionEnd can be nested.

Each keyword requires a certain type of data, usually divided in:

* **`string`**: Strings of text. Usually enclosed in double-quotes (`"`). These double quotes are REQUIRED if the string contains a space. It's recommended to use them anyways, if only for consistency reasons.
* **`int`**: Number integer values.
* **`float`**: Floating point number values.
* **`color`**: Type of data composed of four `float` values in the range [0.0;1.0]: Red, Green, Blue and Alpha (Transparency).
* **`rect`**: Type of data composed of four `int` values determining horizontal origin (X, in the range [0;640]), vertical origin (Y, in the range [0,480]), width and height. `0 0 640 480` is the value for a full screen component. The coordinates scale to that screen size, so even of you have a 1600x1200 screen, `320 240 0 0` is still a value for a component which starts in the center position.

## assetGlobalDef

* **font <\>**: 
* **smallFont <\>**: 
* **bigFont <\>**: 
* **gradientbar <\>**: 
* **menuEnterSound <\>**: 
* **menuExitSound <\>**: 
* **itemFocusSound <\>**: 
* **menuBuzzsound <\>**: 
* **cursor <\>**: 
* **fadeClamp <\>**: 
* **fadeCycle <\>**: 
* **fadeAmount <\>**: 
* **shadowX <\>**: 
* **shadowY <\>**: 
* **shadowColor <\>**: 
* **scrollbarSize <\>**: 
* **sliderWidth <\>**: 
* **sliderHeight <\>**: 
* **sliderthumbWidth <\>**: 
* **sliderthumbHeight <\>**: 
* **sliderBar <\>**: 
* **sliderThumb <\>**: 
* **sliderThumbSel <\>**: 
* **scrollBarHorz <\>**: 
* **scrollBarVert <\>**: 
* **scrollBarThumb <\>**: 
* **scrollBarArrowUp <\>**: 
* **scrollBarArrowDown <\>**: 
* **scrollBarArrowLeft <\>**: 
* **scrollBarArrowRight <\>**: 
* **fxBase <\>**: 
* **fxRed <\>**: 
* **fxYellow <\>**: 
* **fxGreen <\>**: 
* **fxTeal <\>**: 
* **fxBlue <\>**: 
* **fxCyan <\>**: 
* **fxWhite <\>**: 

## menuDef

* **font <\>**: 
* **name <\>**: 
* **fullscreen <\>**: 
* **rect <\>**: 
* **style <\>**: 
* **visible <\>**: 
* **onOpen <\>**: 
* **openTransitionEnd <\>**: 
* **escTransitionEnd <\>**: 
* **onClose <\>**: 
* **onESC <\>**: 
* **border <\>**: 
* **borderSize <\>**: 
* **backcolor <\>**: 
* **forecolor <\>**: 
* **bordercolor <\>**: 
* **focuscolor <\>**: 
* **disablecolor <\>**: 
* **outlinecolor <\>**: 
* **background <\>**: 
* **ownerdraw <\>**: 
* **ownerdrawFlag <\>**: 
* **outOfBoundsClick <\>**: 
* **soundLoop <\>**: 
* **itemDef <\>**: 
* **cinematic <\>**: 
* **popup <\>**: 
* **fadeClamp <\>**: 
* **fadeCycle <\>**: 
* **fadeAmount <\>**: 

## itemDef

* **name <\>**: 
* **text <\>**: 
* **group <\>**: 
* **asset_model <\>**: 
* **asset_shader <\>**: 
* **model_origin <\>**: 
* **model_fovx <\>**: 
* **model_fovy <\>**: 
* **model_rotation <\>**: 
* **model_angle <\>**: 
* **model_animplay <\>**: 
* **rect <\>**: 
* **style <\>**: 
* **decoration <\>**: 
* **notselectable <\>**: 
* **wrapped <\>**: 
* **autowrapped <\>**: 
* **horizontalscroll <\>**: 
* **type <\>**: 
* **elementwidth <\>**: 
* **elementheight <\>**: 
* **feeder <\>**: 
* **elementtype <\>**: 
* **columns <\>**: 
* **border <\>**: 
* **bordersize <\>**: 
* **visible <\>**: 
* **ownerdraw <\>**: 
* **align <\>**: 
* **textalign <\>**: 
* **textalignx <\>**: 
* **textaligny <\>**: 
* **scralign <\>**: 
* **scralignfactor <\>**: 
* **textscale <\>**: 
* **textstyle <\>**: 
* **backcolor <\>**: 
* **forecolor <\>**: 
* **bordercolor <\>**: 
* **outlinecolor <\>**: 
* **background <\>**: 
* **onFocus <\>**: 
* **leaveFocus <\>**: 
* **mouseEnter <\>**: 
* **mouseExit <\>**: 
* **mouseEnterText <\>**: 
* **mouseExitText <\>**: 
* **action <\>**: 
* **special <\>**: 
* **cvar <\>**: 
* **maxChars <\>**: 
* **maxPaintChars <\>**: 
* **focusSound <\>**: 
* **cvarFloat <\>**: 
* **cvarStrList <\>**: 
* **cvarFloatList <\>**: 
* **ontransitionend <\>**: 
* **cvarFloatBoxList <\>**: 
* **cvarStrBoxList <\>**: 
* **combobackcolor <\>**: 
* **combotextcolor <\>**: 
* **combotextscale <\>**: 
* **comboalignx <\>**: 
* **comboaligny <\>**: 
* **bindtype <\>**: 
* **bind2click <\>**: 
* **nofocuscolor <\>**: 
* **addColorRange <\>**: 
* **ownerdrawFlag <\>**: 
* **enableCvar <\>**: 
* **cvarTest <\>**: 
* **disableCvar <\>**: 
* **showCvar <\>**: 
* **hideCvar <\>**: 
* **cinematic <\>**: 
* **doubleclick <\>**: 
* **hexcolor <\>**: 

## action

* **fadein <\>**: 
* **fadeout <\>**: 
* **show <\>**: 
* **hide <\>**: 
* **setcolor <\>**: 
* **open <\>**: 
* **conditionalopen <\>**: 
* **close <\>**: 
* **setasset <\>**: 
* **setbackground <\>**: 
* **setitemcolor <\>**: 
* **setteamcolor <\>**: 
* **setfocus <\>**: 
* **setplayermodel <\>**: 
* **setplayerhead <\>**: 
* **transition <\>**: 
* **setcvar <\>**: 
* **xtransition <\>**: 
* **setcvarfloat <\>**: 
* **clearcvar <\>**: 
* **clearclick <\>**: 
* **disablefocus <\>**: 
* **enablefocus <\>**: 
* **copycvar <\>**: 
* **clearfocus <\>**: 
* **clearalpha <\>**: 
* **exec <\>**: 
* **play <\>**: 
* **playlooped <\>**: 
* **orbit <\>**: 

## Currently accepted values by common keywords
