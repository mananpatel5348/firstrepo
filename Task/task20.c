#include<stdio.h>
int main()
{
    int pin;
    
    for (int i = 1; i <= 5; i++)
    {
        printf("Enter pin :-");
        scanf("%d",&pin);
        
        if(pin == 2468)
        {
            printf("Login successfull\n");
            break;
        }
        else if(i == 5)
        {
            printf("Too many attempts");
        }
        else
        {
            printf("wrong pin\n");
        }
    }
    return 0;
}