//6.  Maximum of Three Numbers

 //Input three integers.
// Print the largest using nested if-else.

#include <stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter value of A :");
    scanf("%d", &a);
    
    printf("Enter value of B :");
    scanf("%d", &b);
    
    printf("Enter value of C :");
    scanf("%d", &c);
    
    if(a>b)
    {
        if (a>c)
        {
            printf(" a is bigger number");
        }
        else
        {
            printf(" c is bigger number");
        }
    }
    else if (b>c)
    {
        printf("b is bigger number");
    }
    else
    {
        printf(" c is bigger number");
    }
    
    return 0;
}
