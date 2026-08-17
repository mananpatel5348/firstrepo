#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter a temprature :-");
    scanf("%d", &a);
    
    if(a > 35)
    {
        printf("it is hot today");
    }
    else
    {
        printf("the temprature is okay");
    }
    return 0;
}