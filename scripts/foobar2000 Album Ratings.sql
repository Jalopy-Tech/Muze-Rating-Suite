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