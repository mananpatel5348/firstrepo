// Declare a 1D array called dailySteps with 7 elements to store your step count for each day of the week,
// assign sample values, and print each value using a loop.  

// Ans :-

#include <stdio.h>

int main()
{
    int dailySteps[7] = {
        5000, 7200, 6500, 8000, 9000, 7500, 6000
    };

    for(int i = 0; i < 7; i++)
    {
        printf("Day %d: %d steps\n", i + 1, dailySteps[i]);
    }

    return 0;
}