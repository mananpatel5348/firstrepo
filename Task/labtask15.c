//Find the Youngest
//Input ages of three friends.
//Print the youngest using nested if-else.

#include<stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter of your age : A =");
    scanf("%d", &a);
    
    printf("Enter of your age : B =");
    scanf("%d", &b);
    
    printf("Enter of your age : C =");
    scanf("%d", &c);
    
    if (a < b)
    {
        if (a < c)
        {
            printf("person A is youngest");
        }
        else
        {
            printf("person C is youngest");
        }
    } 
    else if (b < c)
    {
        printf("person B is youngest");
    }
    else
    {
        printf("person C is youngest");
    }
    
    return 0;
}