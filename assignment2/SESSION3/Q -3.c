//Write a program that stores your favorite Spotify playlist's name (string), total number of songs (int), and average song duration in minutes (float). Print all values in a single formatted sentence.

//Ans :-

#include <stdio.h>

int main()
{
    char playlistName[] = "My Favorite Songs";
    int totalSongs = 25;
    float averageDuration = 3.5;

    printf("My favorite Spotify playlist is \"%s\", it has %d songs, and the average song duration is %.1f minutes.",
           playlistName, totalSongs, averageDuration);

    return 0;
    
}