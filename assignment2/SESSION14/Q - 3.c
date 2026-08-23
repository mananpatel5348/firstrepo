// Write a function formatFollowersCount(count) that takes a number and returns a formatted string like Instagram: 1500 as '1.5K', 1200000 as '1.2M', and numbers below 1000 as-is. Add clear comments and use proper indentation.

//Ans :-

#include <stdio.h>

int main()
{
    int count;
    float result;

    printf("Enter followers count: ");
    scanf("%d", &count);

    // If followers are 1,000,000 or more
    if(count >= 1000000)
    {
        result = count / 1000000.0;
        printf("Followers: %.1fM\n", result);
    }

    // If followers are 1,000 or more
    else if(count >= 1000)
    {
        result = count / 1000.0;
        printf("Followers: %.1fK\n", result);
    }

    // If followers are below 1000
    else
    {
        printf("Followers: %d\n", count);
    }

    return 0;
}