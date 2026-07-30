//Temperature Check
//Input temperature.
//If temperature is greater than 30, print “Hot”.
//Otherwise print “Pleasant”.

#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter temperature :");
    scanf("%d", &a);
    
    if(a>30)
    {
        printf("Hot");
    }
    else
    {
        printf("pleasant");
    }
    
    return 0;
}