@echo off
echo Muze Rating Suite Windows Packager 

echo Setting paths...
setlocal
SET PATH=%PATH%;C:\Qt\5.15.2\mingw81_64\bin
SET PATH=%PATH%;C:\Qt\Tools\QtInstallerFramework\4.5\bin
SET PATH=%PATH%;C:\Qt\Tools\mingw810_64\bin

echo Deleting old installer...
del Muze-Rating-Suite-Windows-Installer.exe
del .\packages\com.muzeratingsuite.muzerater\data\muze-rating-suite.7z
del .\packages\com.muzeratingsuite.muzeratingcalculator\data\muze-rating-suite.7z

echo Creating Windows deployable folder... 
rmdir /s /q "muze-rating-suite"
mkdir "muze-rating-suite"

echo Copying applications to deployable folder... 
copy "..\..\builds\Windows\release\muzerater\release\MuzeRater.exe" "muze-rating-suite"
copy "..\..\builds\Windows\release\muzeratingcalculator\release\MuzeRatingCalculator.exe" "muze-rating-suite"

echo Making application deployable using windeployqt...
windeployqt "muze-rating-suite\MuzeRater.exe"
windeployqt "muze-rating-suite\MuzeRatingCalculator.exe"

echo Packaging application folder... 
archivegen ".\packages\com.muzeratingsuite.muzerater\data\muze-rating-suite.7z" "muze-rating-suite"
archivegen ".\packages\com.muzeratingsuite.muzeratingcalculator\data\muze-rating-suite.7z" "muze-rating-suite"

echo Creating installer...
binarycreator.exe --offline-only  -c config/config.xml -p packages Muze-Rating-Suite-Windows-Installer.exe

echo Deleting temporary packages...
del ".\packages\com.muzeratingsuite.muzerater\data\muze-rating-suite.7z"
del ".\packages\com.muzeratingsuite.muzeratingcalculator\data\muze-rating-suite.7z"
rmdir /s /q "muze-rating-suite"

echo Packaging finished.
echo The installer is Muze-Rating-Suite-Windows-Installer.exe
pause


