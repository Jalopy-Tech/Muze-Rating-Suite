# Muze Rating<img src="./Muze-Rating.png"  style="float: right; margin-left: 10px; zoom: 20%" />
### Overview
The *Muze Rating* is a calculation created by Kester Falge and Robert J. Joynt to provide album ratings based on the star ratings of the tracks. It is used by the <a href="https://github.com/Jalopy-Tech/Muze-Rating-Suite/blob/master/README.md">Muze Rating Suite</a>: software which can be used to calculate the Muze Ratings of albums.

### Introduction

Rating an album by simply averaging stars per track is unsatisfactory for two important reasons: 

1. Shorter albums are preferentially weighted against longer albums.
2. It doesn't allow for the way a masterful song can elevate an album or the way a disastrous track can diminish it. 

The Muze Rating solves these problems, delivering ratings and rankings which, while sometimes surprising, feel more resonant and authentic.

The function outputs a single decimal number (a float) with the input consisting of the star-ratings for the tracks on the album. Tracks are expected to be rated as follows:

| Track Stars | Track Rating | Track Quality |
| ----------- | ------------ | ------------- |
| ★★★★★       | 5            | Very good     |
| ★★★★        | 4            | Good          |
| ★★★         | 3            | Average       |
| ★★          | 2            | Bad           |
| ★           | 1            | Very bad      |

Only relevant tracks should have a rating. Tracks that do not contribute to the overall quality such as intro, interlude or blank tracks should not have a star rating and thus not be included in the input.

### Characteristics

The Muze Rating calculation has the following characteristics:

- It is a decimal number with one decimal place. The display should be formatted to one decimal place including when that decimal place is 0.
- A ranking of 5.0 indicates average quality. This is equivalent to an album consisting of only 3-star tracks.  The higher the Muze Rating, the better the album. Conversely, the lower the Muze Rating, the worse the album.
- A ranking of 10.0 or higher indicates exceptionally high quality. A ranking of 0.0 or lower indicates exceptionally low quality.
- In theory, there is no upper or lower bound. In practice most albums will be rated between 0.0 and 10.0.
- 5-star and 1-star tracks are considered to deviate more than twice that of 4-star and 2-star tracks. Thus a 5-star and a 3-star track together will rate higher than two 4-star tracks together. Conversely a 1-star and a 3-star track together will rate lower than two 2-star tracks together.
- As the number of tracks increases, the more the Muze Rating will resist returning to the mean (5.0) through dilution. This means that a long album with many 5-star and 4-star tracks won't be dragged down by 3-star tracks as much as a shorter album. Conversely, a long album with many 1-star and 2-star tracks won't be dragged up by 3-star tracks  as much as a shorter album.
- The order of the tracks is irrelevant.

### Calculation

The Muze Rating is found by first calculating the *variance* and *deviation*. This result is then scaled, shifted and rounded to find the Muze Rating. The following formulas are used:

<img src="https://latex.codecogs.com/gif.latex?\sigma^\frac{3}{2}&space;=&space;\frac{\displaystyle\sum_{i=1}^{n}[{sgn(x_i&space;-&space;\mu)\times&space;\left&space;|x_i&space;-&space;\mu\right&space;|^\frac{3}{2}]}}{\sqrt{n}}" title="\sigma^\frac{3}{2} = \frac{\displaystyle\sum_{i=1}^{n}[{sgn(x_i - \mu)\times \left |x_i - \mu\right |^\frac{3}{2}]}}{\sqrt{n}}" />

σ<sup>3/2</sup> represents the variance. It is the equivalent to the variance σ² in a normal distribution. *n* is the number of tracks in the album. *𝑥<sub>i</sub>* is the rating for the *i<sup>th</sup>* track with a value in {1,2,3,4,5}. *μ* is the mean which is equal to 3 [stars]. The *sgn* function returns the sign: +1 for a positive input, 0 for a zero input and -1 for a negative input.

<img src="https://latex.codecogs.com/gif.latex?\sigma&space;=&space;sgn(\sigma^\frac{3}{2})&space;\times&space;\left&space;|\sigma^\frac{3}{2}\right&space;|^\frac{2}{3}" title="\sigma = sgn(\sigma^\frac{3}{2}) \times \left |\sigma^\frac{3}{2}\right |^\frac{2}{3}" />

σ represents the deviation. It is equivalent to the standard deviation σ in a normal distribution. The sgn function is the same as above.

<img src="https://latex.codecogs.com/gif.latex?m.r.=&space;round(&space;[\frac{3}{2}\sigma&space;&plus;&space;5]&space;,&space;1)" title="Muze\space Rating = round( [\frac{3}{2}\sigma + 5] , 1)" />

The muze rating *m.r.* is calculated from the deviation σ. It is scaled by a factor of 3/2 which will put most albums within a range of 10. It is shifted up by 5 to make the mean equal to 5. The *round* function rounds the final value to one decimal place. 

### Examples

The following are examples of the Muze Rating calculated from the number of 5-star, 4-star, 3-star, 2-star and 1-star tracks in the album:

| ★★★★★ | &nbsp;&nbsp;&nbsp;★★★★ | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;★★★ | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;★★ | &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;★ | Muze Rating |
| ----: | ---------------------: | --------------------------------------: | -------------------------------------------------------: | -----------------------------------------------------------: | ----------: |
|     7 |                      3 |                                       0 |                                                        1 |                                                            0 |        10.3 |
|     1 |                      4 |                                       5 |                                                        1 |                                                            0 |         7.2 |
|     2 |                      3 |                                       1 |                                                        5 |                                                            1 |         5.6 |
|     0 |                      0 |                                       8 |                                                        0 |                                                            0 |         5.0 |
|     1 |                      5 |                                       1 |                                                        3 |                                                            2 |         4.4 |
|     0 |                      1 |                                       5 |                                                        4 |                                                            1 |         2.2 |
|     0 |                      1 |                                       0 |                                                        3 |                                                            7 |        -0.3 |

The Muze Rating algorithm is implemented in the <a href="https://github.com/Jalopy-Tech/Muze-Rating-Suite/blob/master/README.md">Muze Rating Suite</a> software in C++ using the  C++ files: muzeratingcalculator.h and muzeratingcalculator.cpp.

### Further Applications

Although the Muze Rating was designed to rate music albums, it can be applied to any works, where the each work consists of subparts that can be star-rated independently. This can include works where the subparts are rated on an individual basis or are rated according to an aggregate such as on film, television, video and music websites.

Examples of such works include:

- Film franchises and TV series where each individual film or TV show is given a star rating.
- Authors, writers, directors, actors, and other artists where each individual work is given a star rating.
- Video channels where each video is given a star rating.
- Student assessments in education where each individual piece of assessment is given a star rating (which could correspond to A, B, C, D and F).

### Credits

Created by <br>**Kester Falge**

Algorithm by <br>**Robert J. Joynt**

Name by <br>**Katie Falge**

Artwork by <br>**Angie Eyles**
