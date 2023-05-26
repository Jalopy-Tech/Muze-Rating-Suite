#!/bin/bash
echo "ADB Wireless Connect macOS Packager" 

echo "Deleting old installer..."
rm -R "./Muze-Rating-Suite-macOS-Installer.dmg"
rm -R "./Muze-Rating-Suite-macOS-Installer.app"
rm -R "./packages/com.muzeratingsuite.muzerater/data/Muze Rater.app" 
rm -R "./packages/com.muzeratingsuite.muzeratingcalculator/data/Muze Rating Calculator.app" 

echo "Copying application for making deployable..." 
rm -R "./packages/com.muzeratingsuite.muzerater/data/*"
rm -R "./packages/com.muzeratingsuite.muzeratingcalculator/data/*"
cp -R "../../builds/macOS/release/muzerater/Muze Rater.app" "./packages/com.muzeratingsuite.muzerater/data"
cp -R "../../builds/macOS/release/muzeratingcalculator/Muze Rating Calculator.app" "./packages/com.muzeratingsuite.muzeratingcalculator/data"

echo Creating macOS deployable app using macdeployqt...
~/Qt/5.15.2/clang_64/bin/macdeployqt "./packages/com.muzeratingsuite.muzerater/data/Muze Rater.app"
~/Qt/5.15.2/clang_64/bin/macdeployqt "./packages/com.muzeratingsuite.muzeratingcalculator/data/Muze Rating Calculator.app"


echo "Creating installer..."
~/Qt/Tools/QtInstallerFramework/4.5/bin/binarycreator --offline-only  -c config/config.xml -p packages Muze-Rating-Suite-macOS-Installer

echo "Creating disk image of installer using macdeployqt..."
~/Qt/5.15.2/clang_64/bin/macdeployqt "Muze-Rating-Suite-macOS-Installer.app" -dmg
rm -R "Muze-Rating-Suite-macOS-Installer.app" 

echo Deleting temporary packages...
rm -R "./packages/com.muzeratingsuite.muzerater/data/Muze Rater.app"
rm -R "./packages/com.muzeratingsuite.muzeratingcalculator/data/Muze Rating Calculator.app"

echo "Packaging finished."





echo "The installer is ADB-Wireless-Connect-macOS-Installer"
read -p "Press [Enter] key"

