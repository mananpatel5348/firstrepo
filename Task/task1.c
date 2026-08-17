#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter a number :-");
    scanf("%d", &a);
    
    if(a == 50)
    {
        printf("correct number");
    }
    else
    {
        printf("wrong number");
    }
    return 0;
}