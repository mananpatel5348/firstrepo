 //Age Eligibility
//Input age.
//If age is 18 or above, print “Eligible to Vote”.
// Otherwise print “Not Eligible”.

#include <stdio.h>
int main()
{
    int a;
    
    printf("enter your age");
    scanf("%d", &a);
    
    if(a>18)
    {
        printf("you are eligible for votting");
    }
    else
    {
        printf("you are not eligible for votting");
    }
    
    
    return 0;
}
