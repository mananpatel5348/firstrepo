// Write a program that reads all song names from playlist.txt and prints only those that contain the word 'love' (case-insensitive).
//<br><br><em><strong>Hint:</strong> Use the 'in' keyword or equivalent string method for filtering.</em>

// Ans :-

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    FILE *file;
    char song[100];
    char lowerSong[100];

    file = fopen("playlist.txt", "r");

    if(file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    while(fgets(song, sizeof(song), file) != NULL)
    {
        // Convert song name to lowercase
        strcpy(lowerSong, song);

        for(int i = 0; lowerSong[i] != '\0'; i++)
        {
            lowerSong[i] = tolower(lowerSong[i]);
        }

        // Check if "love" is present
        if(strstr(lowerSong, "love") != NULL)
        {
            printf("%s", song);
        }
    }

    fclose(file);

    return 0;
}