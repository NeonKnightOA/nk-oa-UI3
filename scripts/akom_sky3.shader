
textures/akom_sky3/suicizer
{
	qer_editorimage textures/akom_sky3/suicizer.tga
	surfaceparm noimpact
	surfaceparm nolightmap
	q3map_globaltexture
	q3map_lightsubdivide 256
	q3map_surfacelight 145
	surfaceparm sky
	q3map_sun	1 1 1 32	90 90
	skyparms textures/akom_env3/suicizer/suicizer - -
	{
		map textures/acc_dm3/portal_fog.jpg
		blendfunc filter
		tcmod scale 3 3
		tcmod scroll .1 .03
		rgbgen identity
	}
	{
		map textures/acc_dm3/portal_fog.jpg
		blendfunc filter
		tcmod scale 2 2
		tcmod scroll .1 .05
		rgbgen identity
	}
	{
		map textures/acc_dm3/portal_fog.jpg
		blendfunc filter
		tcmod scale 1 1
		tcmod scroll .1 .08
		rgbgen identity
	}
}