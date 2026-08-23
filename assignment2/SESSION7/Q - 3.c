// Create a pattern that prints a pyramid of stars (*) with 6 rows,
// centered like the loading animation you see on BookMyShow when a page is loading.
//<br><br><em><strong>Hint:</strong> Use spaces to align the stars in the center for each row.</em>

// Ans :-

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 6; i++)
    {
        // Print spaces
        for(int j = 1; j <= 6 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(int j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}