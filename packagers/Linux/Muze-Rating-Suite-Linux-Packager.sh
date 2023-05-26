#!/bin/bash
echo "Muze Rating Suite Linux Packager"

echo "Deleting old installer..."
rm Muze-Rating-Suite-Linux-Installer*

echo Creating Linux deployable folder... 
rm -R "muze-rating-suite"
mkdir "muze-rating-suite"

echo "Creating new installer..."
cqtdeployer -confFile "./configFile.json" -qmake /opt/Qt/5.15.2/gcc_64/bin/qmake

echo "Moving new installer..."
mv muze-rating-suite/Muze-Rating-Suite-Linux-Installer* .

echo "Deleting temporary files..."
rm -R "muze-rating-suite"

echo "Packaging finished."
echo "The installer is Muze-Rating-Suite-Linux-Installer.run"

read -p "Press [Enter] key"
