// Create a simple IPL Fan Bot that takes your favorite IPL team name as input and uses if-else-if statements to print a unique cheer message for each team (e.g., 'Go Mumbai Indians!', 'Chennai Super Kings for the win!'). If the team is not recognized, print 'Team not found!'
//Ans :-

#include <stdio.h>
#include <string.h>

int main()
{
    char team[50];

    printf("Enter your favorite IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "Mumbai") == 0)
    {
        printf("Go Mumbai Indians!");
    }
    else if (strcmp(team, "Chennai") == 0)
    {
        printf("Chennai Super Kings for the win!");
    }
    else if (strcmp(team, "Bangalore") == 0)
    {
        printf("Go Royal Challengers Bengaluru!");
    }
    else if (strcmp(team, "Kolkata") == 0)
    {
        printf("Come on Kolkata Knight Riders!");
    }
    else if (strcmp(team, "Delhi") == 0)
    {
        printf("Go Delhi Capitals!");
    }
    else if (strcmp(team, "Hyderabad") == 0)
    {
        printf("Sunrisers Hyderabad, let's go!");
    }
    else if (strcmp(team, "Punjab") == 0)
    {
        printf("Punjab Kings for the win!");
    }
    else if (strcmp(team, "Rajasthan") == 0)
    {
        printf("Go Rajasthan Royals!");
    }
    else if (strcmp(team, "Lucknow") == 0)
    {
        printf("Come on Lucknow Super Giants!");
    }
    else if (strcmp(team, "Gujarat") == 0)
    {
        printf("Go Gujarat Titans!");
    }
    else
    {
        printf("Team not found!");
    }

    return 0;
}