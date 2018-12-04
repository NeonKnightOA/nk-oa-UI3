
textures/akom_sfx3/blue_tele
 
{
        surfaceparm nomarks
	surfaceparm nolightmap
	surfaceparm nonsolid
	cull disable
	{
		map textures/akom_sfx3/blue_tele.jpg
		tcmod turb sin 1 .1 .1 2
		tcmod rotate 5
		tcmod scroll 1 1
		rgbGen identity
	}
}