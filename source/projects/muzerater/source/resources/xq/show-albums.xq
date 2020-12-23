let $startTracks := .
let $tracks := local:iTunes($startTracks)
return local:albums($tracks)