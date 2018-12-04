textures/base_light/wsupprt1_12_h
{
	q3map_lightimage textures/base_light/wsupprt1_12_h.tga
	q3map_surfacelight 600
	q3map_flare flareShader
	{
		map textures/base_light/wsupprt1_12_h.tga
		rgbGen identity
	}
	{
		map $lightmap 
		blendfunc filter
		tcGen lightmap 
	}
	{
		map textures/base_light/wsupprt1_12_h.tga
		blendfunc add
		rgbGen wave noise 0.8 0.2 0 1 
	}
}
