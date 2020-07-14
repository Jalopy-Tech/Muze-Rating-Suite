# Muze Rater - iTunes

## Overview

<a href="https://github.com/Jalopy-Tech/Muze-Rating-Suite/blob/master/Muze-Rater.md">Muze Rater</a> can read an <a href="https://www.apple.com/itunes/">iTunes</a> database and calculate Muze Ratings for each album based on star ratings set in the iTunes database.  iTunes needs to share the *iTunes Library XML file* with other applications (see below).

## Sharing the iTunes Library XML file

To share the iTunes Library XML file, do the following:

1. Open iTunes
2. Use the menu: **Edit**  > **Preferences** to open the preferences window.
3. In the preferences window, select the **Advanced** page tab.
4. Check the checkbox **Share iTunes Library XML with other applications**.
5. Click the **OK** button.

This option only needs to be set once. From then on, iTunes will automatically keep this file in sync with the iTunes database. This means that any changes to the iTunes ratings of tracks within albums will be immediately reflected when Muze Rater is run.

## Using iTunes in Muze Rater

To use the iTunes database with Muze Rater, do the following:

1. Open Muze Rater
2. Select the iTunes database option.
3. Select the *iTunes Library XML file*. By default Muze Rater will look for the file in the default location which is in the Music folder under *iTunes\iTunes Music Library.xml*.  The file can also be selected manually (see below).
4. Continue on.

##### Locating the  iTunes Library XML file

If you don't know where the *iTunes Library XML file* is located, do the following:

1. Open iTunes
2. Use the menu: **Edit**  > **Preferences** to open the preferences window.
3. In the preferences window, select the **Advanced** page tab.
4. The file path is specified in the text box labeled **iTunes Media folder location**.

## iTunes Ratings

Only manually set iTunes ratings will be used to calculate the Muze Rating. Ratings which have been automatically calculated will be ignored. iTunes album ratings are not relevant as the Muze Rating is not an average of the stars per rated track.

## Filtering Albums

Muze Rater has the ability to filter albums according to a minimum and/or maximum number of rated tracks. In order to do further filtering, it is recommended to output the Muze Rater results to an XML file and then import this file into a spreadsheet application such as Libre Office Calc or Microsoft Excel for further filtering.