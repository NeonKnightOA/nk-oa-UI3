#!/bin/sh

echo "This script assumes that you have zip installed"
echo "and it is in your path.  If zip is not installed"
echo "this script will not work.  Please check your distro's"
echo "documentation on how to install the zip package."
echo ""
echo "This specific version of the script also requires"
echo "the VM files of The Mission Pack. Put them in the"
echo "'vm/' folder before running this script or run the"
echo "normal version instead."
echo ""
printf 'Press Enter to continue...'
read _
echo "Compressing..."
zip -9r zz_oax_m3.pk3 * -x sources/* -x .git/* -x builddevpk3.bat -x builddevpk3.sh -x builddevpk3-mpvm.sh -x zip.exe

echo "Done"

exit 0
