// Modify your pyramid pattern code to accept the number of rows as user input,
// so the user can set the height of the pyramid before printing.

// Ans :-

#include <stdio.h>

int main()
{
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for(int i = 1; i <= rows; i++)
    {
        // Print spaces
        for(int j = 1; j <= rows - i; j++)
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