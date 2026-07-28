#include<stdio.h>
int main()
{
    int a;
    printf("Enter a how old are you: ");
    scanf("%d",&a);

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