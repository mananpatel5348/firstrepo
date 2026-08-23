// Rewrite the following code to improve its indentation and add comments explaining each step, so that a beginner can understand what it does:<br><br>function isEven(num){if(num%2==0){return true;}else{return false;}}

// Ans :-

#include <stdio.h>

// Function to check whether a number is even or odd
int isEven(int num)
{
    // Check if the number is divisible by 2
    if(num % 2 == 0)
    {
        // Return 1 if the number is even
        return 1;
    }
    else
    {
        // Return 0 if the number is odd
        return 0;
    }
}

int main()
{
    int num = 10;

    // Call the isEven function
    if(isEven(num))
    {
        printf("%d is Even\n", num);
    }
    else
    {
        printf("%d is Odd\n", num);
    }

    return 0;
}