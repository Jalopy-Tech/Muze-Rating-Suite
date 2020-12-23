xquery version "1.0";

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







declare function local:iTunes($starttracks as node()*) as node()*
{

let $tracks := $starttracks//key[. = 'Tracks']/following-sibling::dict//key[. = 'Track ID']/following-sibling::integer[1]
return(
<tracks> {
		for $track in $tracks

		let $trackID := $track
		let $name := xs:string($track/../key[. = 'Name']/following-sibling::string[1])
		let $trackNumber := xs:integer($track/../key[. = 'Track Number']/following-sibling::integer[1])
		let $album := xs:string($track/../key[. = 'Album']/following-sibling::string[1])
		let $albumArtist := xs:string($track/../key[. = 'Album Artist']/following-sibling::string[1])
		let $rating := xs:integer($track/../key[. = 'Rating']/following-sibling::integer[1])
		let $ratingComputed := boolean($track/../key[. = 'Rating Computed'])

		order by $albumArtist, $album, $trackNumber
		return (
		<track id="{$trackID}">
			<albumArtist>{$albumArtist}</albumArtist>
			<album>{$album}</album>
			<trackNumber>{$trackNumber}</trackNumber>
			<title>{$name}</title>
			<rating>{$rating}</rating>
			<ratingComputed>{$ratingComputed}</ratingComputed>
		</track>
		)}
</tracks>
)

};


<albums>
{
let $ratedTracks := local:iTunes(/)/track[ratingComputed != "true" and album != ""]
for $x in distinct-values($ratedTracks/concat(local:assignedAlbumArtist(albumArtist,artist),"||", album))
	let $albumArtist := substring-before($x,"||")
	let $albumTitle := substring-after($x,"||")
	let $r1 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 1])
	let $r2 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 2])
	let $r3 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 3])
	let $r4 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 4])
	let $r5 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 5])
	let $total := $r1 + $r2 + $r3 + $r4 + $r5
	order by $x

return (
	<album>
		<albumArtist>{$albumArtist}</albumArtist>
		<albumTitle>{$albumTitle}</albumTitle>
		<rating1>{$r1}</rating1>
		<rating2>{$r2}</rating2>
		<rating3>{$r3}</rating3>
		<rating4>{$r4}</rating4>
		<rating5>{$r5}</rating5>
		<ratingTotal>{$total}</ratingTotal>
	</album>
)
}
</albums>






