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
