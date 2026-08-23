// Given a 2D array called cricketScores where each row represents an IPL match and columns represent runs scored by each team,
// write code to print the highest score from each match.

// Ans :-

#include <stdio.h>

int main()
{
    int cricketScores[4][2] = {
        {185, 172},
        {150, 165},
        {210, 198},
        {175, 180}
    };

    for(int i = 0; i < 4; i++)
    {
        int highest = cricketScores[i][0];

        for(int j = 1; j < 2; j++)
        {
            if(cricketScores[i][j] > highest)
            {
                highest = cricketScores[i][j];
            }
        }

        printf("Match %d highest score: %d\n", i + 1, highest);
    }

    return 0;
}