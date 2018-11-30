@echo off
echo "This script assumes that you have zip installed"
echo "and it is in your path.  If zip is not installed"
echo "this script will not work.  Please check your distro's"
echo "documentation on how to install the zip package."
pause
echo "Compressing..."
zip -9r zz_oax_m3.pk3 * -x sources/* -x .git/* -x vm/* -x builddevpk3.bat -x builddevpk3.sh -x builddevpk3-mpvm.sh -x zip.exe

echo "Done"
