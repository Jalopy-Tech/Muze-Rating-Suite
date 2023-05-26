<html lang="en">
<meta charset="utf-16"/>
<head>
<script src="https://ajax.googleapis.com/ajax/libs/jquery/2.1.3/jquery.min.js"><div></div></script>
<script src="./js/sort-table-on-click.js"><div></div></script>
</head>
<body>
<form>
<table style="width: 100%">
<tbody>
<tr>
<th class="sort_click" style="text-align:left"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">Album Artist</a></th>
<th class="sort_click" style="text-align:left"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">Album Title</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">Muze Rating</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">Rated Tracks</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">Total Tracks</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">Stars per Rated Track</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">5-star Ratings</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">4-star Ratings</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">3-star Ratings</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">2-star Ratings</a></th>
<th class="sort_click" style="text-align:right"><a href="http://localhost" onclick="return false;" title="Sort by column (toggle ascending/descending)">1-star Ratings</a></th>
</tr>
{
	let $albums := ./albums/album
	for $album in $albums

	return( <tr>
			<td style="text-align:left">{$album/albumArtist/node()}</td>
			<td style="text-align:left">{$album/albumTitle/node()}</td>
			<td style="text-align:right">{$album/muzeRating/node()}</td>
			<td style="text-align:right">{$album/numberOfRatedTracks/node()}</td>
			<td style="text-align:right">{$album/numberOfTracks/node()}</td>
			<td style="text-align:right">{$album/starsPerRatedTrack/node()}</td>	
			<td style="text-align:right">{$album/numberOf5StarRatings/node()}</td>	
			<td style="text-align:right">{$album/numberOf4StarRatings/node()}</td>
			<td style="text-align:right">{$album/numberOf3StarRatings/node()}</td>
			<td style="text-align:right">{$album/numberOf2StarRatings/node()}</td>			
			<td style="text-align:right">{$album/numberOf1StarRatings/node()}</td>

			</tr>
		)
}
</tbody>
</table>
</form>
</body>
</html>



