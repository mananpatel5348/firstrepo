// Create a 2D array called playlistRatings to store ratings for 3 Spotify playlists over 5 days (rows = playlists, columns = days). 
//Fill it with sample numbers and print the ratings for the second playlist.

// Ans :-

#include <stdio.h>

int main()
{
    int playlistRatings[3][5] = {
        {4, 5, 3, 4, 5},
        {5, 4, 5, 5, 4},
        {3, 4, 4, 5, 3}
    };

    printf("Ratings of Second Playlist:\n");

    for(int j = 0; j < 5; j++)
    {
        printf("Day %d: %d\n", j + 1, playlistRatings[1][j]);
    }

    return 0;
}