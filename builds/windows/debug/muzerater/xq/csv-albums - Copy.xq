"Album Artist","Album Title","numberOf1StarRatings","numberOf2StarRatings","numberOf13StarRatings","numberOf4StarRatings","numberOf5StarRatings","numberOfRatedTracks","numberOfTracks","rating","scaledRating","starsPerTrack"
{
	let $albums := ./albums/album
	for $album in $albums

	return("{$album/albumArtist/node()}","{$album/albumTitle/node()}",{$album/numberOf1StarRatings/node()},{$album/numberOf2StarRatings/node()},{$album/numberOf3StarRatings/node()},{$album/numberOf4StarRatings/node()},{$album/numberOf5StarRatings/node()},{$album/numberOfRatedTracks/node()},{$album/numberOfTracks/node()},{$album/rating/node()},{$album/scaledRating/node()},{$album/starsPerTrack/node()})
}


