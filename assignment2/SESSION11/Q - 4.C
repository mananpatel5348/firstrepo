// Create a function incrementFollowers(int *followers, int n) that increases each follower count in an array (representing Instagram followers for 5 friends) by 100 using pointer arithmetic,
// then print the updated counts.

// Ans :-

#include <stdio.h>

void incrementFollowers(int *followers, int n)
{
    for(int i = 0; i < n; i++)
    {
        *(followers + i) = *(followers + i) + 100;
    }
}

int main()
{
    int followers[5] = {1200, 2500, 1800, 3200, 1500};

    incrementFollowers(followers, 5);

    printf("Updated Followers:\n");

    for(int i = 0; i < 5; i++)
    {
        printf("Friend %d: %d\n", i + 1, followers[i]);
    }

    return 0;
}