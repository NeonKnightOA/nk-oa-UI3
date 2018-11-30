#!/bin/sh

echo "This script assumes that you have zip installed"
echo "and it is in your path.  If zip is not installed"
echo "this script will not work.  Please check your distro's"
echo "documentation on how to install the zip package."
echo ""
printf 'Press Enter to continue...'
read _
echo "Compressing..."
zip -9r zz_oax_m3.pk3 fonts/*
zip -9r zz_oax_m3.pk3 levelshots/*
zip -9r zz_oax_m3.pk3 maps/*
zip -9r zz_oax_m3.pk3 models/*
zip -9r zz_oax_m3.pk3 scripts/*
zip -9r zz_oax_m3.pk3 textures/*
zip -9r zz_oax_m3.pk3 ui/*
zip -9r zz_oax_m3.pk3 gameinfo.txt
zip -9r zz_oax_m3.pk3 README.md
zip -9r zz_oax_m3.pk3 teaminfo.txt
zip -9r zz_oax_m3.pk3 themesetting.txt
echo "Done"

exit 0
