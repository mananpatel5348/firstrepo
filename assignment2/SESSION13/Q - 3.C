// Add two more song names to playlist.txt without deleting the existing ones by opening the file in append mode (a).

// Ans :-

#include <stdio.h>

int main()
{
    FILE *file;

    file = fopen("playlist.txt", "a");

    if(file == NULL)
    {
        printf("File could not be opened.\n");
        return 1;
    }

    fprintf(file, "Chaleya\n");
    fprintf(file, "O Maahi\n");

    fclose(file);

    printf("Two songs added successfully.\n");

    return 0;
}