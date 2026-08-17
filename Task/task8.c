// Online C compiler to run C program online
#include <stdio.h>

int main() {

    int pin;
    int n;
    
    printf("Enter a pin :-");

    for(int i = 1; i <= n; i++){
        scanf("%d",&pin);
        {
            if(pin == 1234)
            {
                printf("access granted");
                break;
            }
            else
            {
                printf("Enter valid pin : ");
            }
        }
    }
    return 0;
}