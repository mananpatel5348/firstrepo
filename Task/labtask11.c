//Largest Among Two Floats
//Input two float values.
// Print which one is greater.

#include <stdio.h>
int main()
{
    float a,b;
    
    printf("Enter the value of A :");
    scanf("%f", &a);
    
    printf("Enter the value of B :");
    scanf("%f", &b);
    
    if (a>b)
    {
        printf("A is greater");
    }
    else
    {
        printf("B is greater");
    }
    
    return 0;
}