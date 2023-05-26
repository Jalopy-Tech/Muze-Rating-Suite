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
			"@TargetDir@/muze-rating-suite/muze-rating-calculator.exe",
			"@StartMenuDir@/Muze Rating Calculator.lnk",
           		"workingDirectory=@TargetDir@/muze-rating-suite");
			
	component.addOperation("CreateShortcut", 
			"@TargetDir@/muze-rating-suite/muze-rating-calculator.exe",
			"@DesktopDir@/Muze Rating Calculator.lnk",
			"workingDirectory=@TargetDir@/muze-rating-suite");
    }
	
	
}


