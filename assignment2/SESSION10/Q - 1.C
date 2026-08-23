// Declare a string variable called songTitle and assign it the value 'Tum Hi Ho'.
// Print the length of the string using strlen().

// Ans :-

#include <stdio.h>
#include <string.h>

int main()
{
    char songTitle[] = "Tum Hi Ho";

    printf("Song: %s\n", songTitle);
    printf("Length: %lu\n", strlen(songTitle));

    return 0;
}