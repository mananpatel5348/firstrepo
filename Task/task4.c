#include<stdio.h>
int main()
{
    int pin;

    for(int i = 1; i <= 3; i++)
    {
        printf("Enter a pin :-");
        scanf("%d", &pin);

        if(pin == 7777)
        {
            printf("Login successful");
            break;
        }
        else if(i == 3)
        {
            printf("Your account is blocked.");
        }
        else
        {
            printf("Wrong pin. Please try again.");
        }
        
    }
    return 0;
}