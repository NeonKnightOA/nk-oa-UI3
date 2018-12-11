// always have this button in menus.
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
		setcvar ui_tip "Go back to extras menu.";\
		fadein tooltip;\
	}\
	mouseExit {\
		fadeout tooltip;\
	}\
	action {\
		play MP_SND_SELECT;\
		close _menuToClose;\
		open _menuToOpen;\
		setcvar _cvarForTabs 0;	/* reset the tabs*/ \
	}\
	visible 1\
}
