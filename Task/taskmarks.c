// find out if a number is in between 50 to 80
//if it is in between print accordingly
// if more than 80 : print 'exelent'
//if less than 50 : print 'retest'

#include <stdio.h>
int main()
{
    int a;

    printf("Enter your marks :");
    scanf("%d",&a);

    if(a>80)
    {
        printf("Exellent");
    }
    else if(a<50)
    {
        printf("Retest");
    }
    else{
        printf("is in between 50 to 80");
    }

    return 0;
}