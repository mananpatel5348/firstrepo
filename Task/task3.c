#include <stdio.h>
int main()
{
    int pin;
    
    printf(" Enter a pin :-");
    scanf("%d", &pin);
    
    if (pin == 1234)
    {
        printf("Login successful");
    }else{
        printf("Wrong pin");
    }
    return 0;
}