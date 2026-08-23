// Write two functions: increaseFollowersByValue and increaseFollowersByReference.
// Each should take a followers count and add 1000 to it, 
//but one should use pass-by-value and the other pass-by-reference.
// Show how the original followers count changes (or doesn't) after calling each function.

// Ans :-

#include <stdio.h>

// Pass-by-value
void increaseFollowersByValue(int followers)
{
    followers = followers + 1000;
    printf("Inside value function: %d\n", followers);
}

// Pass-by-reference using pointer
void increaseFollowersByReference(int *followers)
{
    *followers = *followers + 1000;
    printf("Inside reference function: %d\n", *followers);
}

int main()
{
    int followers = 5000;

    printf("Original followers: %d\n", followers);

    // Pass-by-value
    increaseFollowersByValue(followers);

    printf("After pass-by-value: %d\n", followers);

    // Pass-by-reference
    increaseFollowersByReference(&followers);

    printf("After pass-by-reference: %d\n", followers);

    return 0;
}