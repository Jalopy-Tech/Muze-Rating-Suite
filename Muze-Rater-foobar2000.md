# Muze Rater - foobar2000 

## Overview

To have <a href="https://github.com/Jalopy-Tech/Muze-Rating-Suite/blob/master/Muze-Rater.md">Muze Rater</a> read a <a href="https://www.foobar2000.org/">foobar2000</a> database, an SQL query can be run from within foobar2000 and copied to the clipboard. Muze Rater can then read the clipboard and calculate Muze Ratings for each album based on star ratings in the foobar2000 database.  To set up foobar2000 to do this, see below.

## Setting up foobar2000

To set up foobar2000, each of the following steps are detailed below:

1. Install the foobar2000 component <a href="https://www.foobar2000.org/components/view/foo_sqlite/">SQLite Viewer</a> in foobar2000.
2. Within foobar2000, in the SQL console, create and save an SQL query to select albums.

##### Installing SQLite Viewer

To install SQLite Viewer in foobar2000, do the following:

1. Download the *foo_sqlite.fb2k-component* file from the <a href="https://www.foobar2000.org/components/view/foo_sqlite/">SQLite Viewer</a> page by clicking on the Download link.
2. Open foobar2000
3. Use the menu: **File**  > **Preferences** to open the preferences window.
4. In the Preferences window, click on **Components** (left side).
5. Click the **Install** button.
6. Select the downloaded file *foo_sqlite.fb2k-component* and click the **OK** button.
7. Click the **Apply** button to install the component into foobar2000. foobar2000 will require a restart.

##### Creating and Saving an SQL Query 

To create an SQL query to select albums from foobar2000, do the following:

1. Open foobar2000.

2. Use the menu: **Library**  > **SQLite console** to open the SQLite console window. If this menu option is missing, check that the SQLite Viewer component has been installed in foobar2000 correctly (see above).

3. In the SQLite console window, copy/paste the following text into the textbox:

   ```
   SELECT
     "%album artist%" AS albumArtist,
     album AS albumTitle,
     COUNT (*) AS totalTracks,
     SUM ((CASE WHEN rating == "1" THEN 1 ELSE 0 END)) AS s1,
     SUM ((CASE WHEN rating == "2" THEN 1 ELSE 0 END)) AS s2,
     SUM ((CASE WHEN rating == "3" THEN 1 ELSE 0 END)) AS s3,
     SUM ((CASE WHEN rating == "4" THEN 1 ELSE 0 END)) AS s4,
     SUM ((CASE WHEN rating == "5" THEN 1 ELSE 0 END)) AS s5
   FROM MediaLibrary
   WHERE albumTitle != ""
   GROUP BY albumArtist, albumTitle
   ORDER BY albumArtist, albumTitle
   ```

4. Click the **Execute** button to check that the SQL query runs properly without error.
5. Click the **Save** button and save the query with a name such as "foobar2000 Album Ratings.sql".

## Using foobar2000 in Muze Rater

To use the foobar2000 database with Muze Rater, do the following: 

1. Open Muze Rater
2. Select the foobar2000 database option.
3. Open foobar2000
4. Use the menu: **Library**  > **SQLite console** to open the SQLite console window.
5. Click the Load button and open the previously saved foobar2000 Album Ratings.sql file.
6. Click **Execute** button to run the query.
7. In the bottom section displaying the SQL results, right click and select **Copy all** to copy the data to the clipboard.
8. Go back to the Muze Rater application
9. Check the checkbox to confirm that the album ratings have been copied from foobar2000 to the clipboard.
10. Continue on.

## foobar2000 Album Artist

When using the SQL query given above, the foobar2000 %album_artist% field will be used as the album artist. This field uses the album artist tag. If it is not present, it will use the artist tag as the album artist.

## Filtering Albums

Muze Rater has the ability to filter albums according to a minimum and/or maximum number of rated tracks. The SQL query used in foobar2000 can be modified if you wish to filter the albums further before having the data read by Muze Rater. You need to know the basics of SQLite to do this.

In order to do further filtering, it is recommended to output the Muze Rater results to an XML file and then import this file into a spreadsheet application such as Libre Office Calc or Microsoft Excel for further filtering.