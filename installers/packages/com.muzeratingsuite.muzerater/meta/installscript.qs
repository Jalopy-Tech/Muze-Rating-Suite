function Component()
{
    // default constructor
}

Component.prototype.createOperations = function()
{
    // call default implementation to actually install README.txt!
    component.createOperations();

    if (systemInfo.productType === "windows") {
        component.addOperation("CreateShortcut", "@TargetDir@/muzerater/muzerater.exe", "@StartMenuDir@/Muze Rater.lnk",
            "workingDirectory=@TargetDir@/muzerater");

 		component.addOperation("CreateShortcut", 
			"@TargetDir@/muzerater/muzerater.exe",
			"@DesktopDir@/Muze Rater.lnk",
			"workingDirectory=@TargetDir@/muzerater");     
    }
}


