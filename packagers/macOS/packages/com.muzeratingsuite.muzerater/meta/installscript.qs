function Component()
{
    // default constructor
}

Component.prototype.createOperations = function()
{
    // call default implementation to actually install README.txt!
    component.createOperations();

    if (systemInfo.productType === "windows") {
        component.addOperation("CreateShortcut",
			"@TargetDir@/muze-rating-suite/muze-rater.exe",
			"@StartMenuDir@/Muze Rater.lnk",
           		"workingDirectory=@TargetDir@/muze-rating-suite");
			
	component.addOperation("CreateShortcut", 
			"@TargetDir@/muze-rating-suite/muze-rater.exe",
			"@DesktopDir@/Muze Rater.lnk",
			"workingDirectory=@TargetDir@/muze-rating-suite");
    }
	
	
}

