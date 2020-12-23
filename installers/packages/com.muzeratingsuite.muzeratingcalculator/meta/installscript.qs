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
			"@TargetDir@/muzeratingcalculator/muzeratingcalculator.exe",
			"@StartMenuDir@/Muze Rating Calculator.lnk",
            "workingDirectory=@TargetDir@/muzeratingcalculator");
			
		component.addOperation("CreateShortcut", 
			"@TargetDir@/muzeratingcalculator/muzeratingcalculator.exe",
			"@DesktopDir@/Muze Rating Calculator.lnk",
			"workingDirectory=@TargetDir@/muzeratingcalculator");
    }
	
	
}


