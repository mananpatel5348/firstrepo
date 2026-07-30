  //Even or Odd
//Input an integer.
//  Print whether it is Even or Odd.

#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter a value :");
    scanf("%d", &a);
    
    if (a % 2 ==0)
    {
        printf(" given number is even");
    }
    else
    {
        printf("given number is odd");
    }
    return 0;
}