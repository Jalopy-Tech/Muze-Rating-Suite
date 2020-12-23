@Echo Qt Windeploy (set up to be executable)...  

setlocal
SET PATH=%PATH%;C:\Qt\5.15.2\mingw81_64\bin
SET PATH=%PATH%;C:\Qt\Tools\QtInstallerFramework\4.0\bin
SET PATH=%PATH%;C:\Qt\Tools\mingw810_64\bin

del MuzeRatingSuite-winx64.exe

windeployqt "..\builds\windows\release\muzerater"
windeployqt "..\builds\windows\release\muzeratingcalculator"

xcopy /E /Y ..\source\projects\muzerater\source\resources ..\builds\windows\release\muzerater
xcopy /E /Y ..\source\projects\muzeratingcalculator\source\resources ..\builds\windows\release\muzeratingcalculator

del .\packages\com.muzeratingsuite.muzerater\data\muzerater.7z
archivegen .\packages\com.muzeratingsuite.muzerater\data\muzerater.7z ..\builds\windows\release\muzerater

del .\packages\com.muzeratingsuite.muzeratingcalculator\data\muzeratingcalculator.7z
archivegen .\packages\com.muzeratingsuite.muzeratingcalculator\data\muzeratingcalculator.7z ..\builds\windows\release\muzeratingcalculator

binarycreator.exe --offline-only -c config/config.xml -p packages MuzeRatingSuite-winx64.exe


@Echo "Finished packaging Muze Rating Suite Windows x64 release."
@pause