function Component() {

}

function getBasename(file) {
    if (!file.length)
        return ""

    return file.split('.')[0];
}

function generateShortCutCmd(cmd) {

    var prefix = "$PREFIX";

    if (systemInfo.kernelType === "winnt") {

        console.log("create icons!!! on Windows");

        component.addOperation(
            "CreateShortcut",
            "@TargetDir@/" + prefix + "/" + cmd,
            "@DesktopDir@/" + getBasename(cmd) + ".lnk",
            "iconPath=@TargetDir@/" + prefix + "/icons/" + getBasename(cmd) + ".ico",
            "iconId=0");

    }


    if (systemInfo.kernelType === "linux") {
        console.log("create icons!!! on LINUX");
        component.addOperation("CreateDesktopEntry",
                               "@HomeDir@/.local/share/applications/" + "muzer-rater.desktop",
                               "Version=@Version@\n
                                Type=Application\n
                                Terminal=false\n
                                Exec=\"@TargetDir@/" + "muze-rater.sh" + "\"\n
                                Name=Muze Rater\n
                                Icon=@TargetDir@/" + "icons/muze-rater.png\n
                                Name[en_US]=Muze Rater");
                                
        component.addOperation("CreateDesktopEntry",
                               "@HomeDir@/.local/share/applications/" + "muze-rating-calculator.desktop",
                               "Version=@Version@\n
                                Type=Application\n
                                Terminal=false\n
                                Exec=\"@TargetDir@/" + "muze-rating-calculator.sh" + "\"\n
                                Name=Muze Rater\n
                                Icon=@TargetDir@/" + "icons/muze-rating-calculator.png\n
                                Name[en_US]=Muze Rating Calculator");

        console.log("create icons!!! on LINUX done");
    }
}

Component.prototype.createOperations = function() {
    // call default implementation to actually install README.txt!
    component.createOperations();

    var cmdArray = ["array", "of", "cmds"]; // will be changed in cqtdeployer
    var shortcutsCmdArray = ["array", "of", "shortcut", "cmds"]; // will be changed in cqtdeployer

    shortcutsCmdArray.forEach( function (item){
        generateShortCutCmd(item);
    });

}
