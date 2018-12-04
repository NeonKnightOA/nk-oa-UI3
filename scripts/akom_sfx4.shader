
textures/akom_omega/akomjump
{
	surfaceparm nodamage
        q3map_surfacelight 0
					
	{
		map textures/akom_omega/akomjump.tga
		rgbGen identity
	}
	
{ 
		animmap 4 textures/akom_omega/akomjump_x.tga textures/akom_omega/akomjump_x.tga textures/akom_omega/akomjump_x.tga textures/akom_omega/akomjump_x.tga
		blendfunc GL_ONE GL_ONE
		tcmod scroll 0 1
	}
{
		map textures/akom_omega/akomlogo_x.tga
		rgbGen wave sin .5 .5 0 1.5
		blendfunc GL_ONE GL_ONE	
	}
}

textures/akom_omega/rust_sfx
{
	surfaceparm trans
	surfaceparm nomarks
	surfaceparm nolightmap
	polygonoffset
	cull none
	{
		map textures/akom_omega/rust_sfx.tga
		blendFunc GL_ONE GL_ONE
	}
}