//Write a code snippet that demonstrates the difference between pre-increment (++count) and post-increment (count++) by logging the values before and after using both on a followerCount variable.

//Ans :-

#include <stdio.h>

int main()
{
    int followerCount = 100;

    printf("Initial value: %d\n", followerCount);

    // Pre-increment
    printf("Pre-increment: %d\n", ++followerCount);
    printf("After pre-increment: %d\n", followerCount);

    // Reset value
    followerCount = 100;

    // Post-increment
    printf("Post-increment: %d\n", followerCount++);
    printf("After post-increment: %d\n", followerCount);

    return 0;
}