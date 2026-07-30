//Small Calculator
//-   Input two integers.
//-   Print:
    //-   Sum
    //-   Difference
    //  Product


#include <stdio.h>
int main()
{
    int a,b;
    
    printf("Enter a first number :");
    scanf("%d", &a);
    
    printf("Enter a second number :");
    scanf("%d",&b);
    
    printf(" %d + %d = %d\n",a,b,a+b);
    printf(" %d - %d = %d\n",a,b,a-b);
    printf(" %d * %d = %d\n",a,b,a*b);
    
    return 0;
}