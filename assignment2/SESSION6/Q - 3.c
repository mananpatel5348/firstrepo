// Build a 'Guess the Song' game like Spotify — the program randomly picks a song name from a list and asks the user to guess it.
// Use a do-while loop so the user can keep guessing until they get it right.
//<br><br><em><strong>Constraint:</strong> Use at least 3 song names of your choice.</em>

// Ans :-

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main()
{
    char songs[3][50] = {
        "Kesariya",
        "Apna Bana Le",
        "Tum Hi Ho"
    };

    char guess[50];
    
    srand(time(0));

    int randomSong = rand() % 3;

    printf("===== Guess the Song =====\n");
    printf("Guess the song name!\n");

    do
    {
        printf("Enter your guess: ");
        scanf(" %[^\n]", guess);

        if(strcmp(guess, songs[randomSong]) == 0)
        {
            printf("Correct! You guessed the song! 🎵\n");
        }
        else
        {
            printf("Wrong guess! Try again.\n");
        }

    } while(strcmp(guess, songs[randomSong]) != 0);

    return 0;
}