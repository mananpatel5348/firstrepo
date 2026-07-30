//Simple Login
// Ask the user to enter a PIN.
//If PIN is 1234, print “Login Successful”.
//Otherwise print “Invalid PIN”. 

#include <stdio.h>
int main()
{
    int pin = 1234;
    
    printf("Enter your pin :");
    scanf("%d", &pin);
    
    if (pin == 1234)
    {
        printf("Login successfull");
    }
    else
    {
        printf("Invalid pin");
    }
    
    return 0;
}

