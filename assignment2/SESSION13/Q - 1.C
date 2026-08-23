// Create a file called playlist.txt and write the names of your top 3 favorite songs from Spotify into it using write mode (w).

// Ans :-

#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "w");

    if(file == NULL)
    {
        printf("File could not be created.\n");
        return 1;
    }

    fprintf(file, "Tum Hi Ho\n");
    fprintf(file, "Kesariya\n");
    fprintf(file, "Apna Bana Le\n");

    fclose(file);

    printf("Songs successfully written to playlist.txt\n");

    return 0;
}