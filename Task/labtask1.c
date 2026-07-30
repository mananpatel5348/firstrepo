//Positive, Negative or Zero
// Take an integer from the user.
//Print whether it is Positive, Negative, or Zero.

#include <stdio.h>
int main()
{
    int a;
    
    printf("enter a number :");
    scanf("%d", &a);
    
    if (a>0)
    {
        printf("positive");
    }
    else if (a<0)
    {
        printf("negative");
    }
    else
    {
        printf("zero");
    }
    
    return 0;
}