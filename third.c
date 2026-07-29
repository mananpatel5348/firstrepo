#include <stdio.h>

// a is bigger than b 
// c is bigger than a 
// you can say that c is biggest , no need to compare a and b.
// NESTED IF ELSE STATEMENT


int main()
{
    int a=15,b=5,c=6;
    if(a>b)
    {
        if(a>c)
        {
            printf("a is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    else
    {
        if(b>c)
        {
            printf("b is greater");
        }
        else
        {
            printf("c is greater");
        }
    }
    return 0;
}