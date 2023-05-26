
declare function local:assignedAlbumArtist($albumArtist as xs:string?,$artist as xs:string?)as xs:string?
{
	let $return := if($albumArtist != "") then $albumArtist else $artist
	return ($return)
};



declare function local:starRating($percentageRating as xs:string?)as xs:double?
{
	let $return := floor(number($percentageRating) div 20 + 0.99)
	return ($return)
};

declare function local:starsPerTrack($totalStars as xs:double?, $totalTracks as xs:double?)as xs:double?
{
	let $return := round(($totalStars div $totalTracks) * 100.0) div 100.0
	return ($return)
};

