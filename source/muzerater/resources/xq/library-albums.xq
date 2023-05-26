declare function local:albums($starttracks as node()*) as node()*
{
let $ratedTracks := $starttracks/track[ratingComputed != "true" and album != "" and rating != ""]
return(
<albums> {
for $x in distinct-values($ratedTracks/concat(local:assignedAlbumArtist(albumArtist,artist),"||", album))
	let $albumArtist := substring-before($x,"||")
	let $albumTitle := substring-after($x,"||")
	let $s1 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 1])
	let $s2 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 2])
	let $s3 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 3])
	let $s4 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 4])
	let $s5 := count($ratedTracks[albumArtist = local:assignedAlbumArtist(albumArtist,artist) and album = $albumTitle and local:starRating(rating) = 5])

	let $totalRatedTracks := ($s1 + $s2 + $s3 + $s4 + $s5)
	let $totalRatedTracks2 := $s1 + $s2 + $s3 + $s4 + $s5
	
	let $totalStars := ($s1 * 1 + $s2 * 2 + $s3 * 3 + $s4 * 4 + $s5 * 5)
	let $totalStars2 := ($s1 * 1 + $s2 * 2 + $s3 * 3 + $s4 * 4 + $s5 * 5)
	let $starsPerTrack := local:starsPerTrack($totalStars2, $totalTracks2)


	return (
	<album>
		<albumArtist>{$albumArtist}</albumArtist>
		<albumTitle>{$albumTitle}</albumTitle>
		<uncalculatedMuzeRating s1="{$s1}" s2="{$s2}" s3="{$s3}" s4="{$s4}" s5="{$s5}"></uncalculatedMuzeRating>
		<numberOfTracks>{$totalRatedTracks}</numberOfTracks>
		<starsPerTrack>{$starsPerTrack}</starsPerTrack>
		<numberOf5StarRatings>{$s5}</numberOf5StarRatings>
		<numberOf4StarRatings>{$s4}</numberOf4StarRatings>
		<numberOf3StarRatings>{$s3}</numberOf3StarRatings>
		<numberOf2StarRatings>{$s2}</numberOf2StarRatings>
		<numberOf1StarRatings>{$s1}</numberOf1StarRatings>
	</album>
	)}
</albums>
)

};


