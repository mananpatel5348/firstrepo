#include<stdio.h>
int main()
{
    int budget,price,n;
    
    printf("Enter your budget :-");
    scanf("%d",&budget);
    
    while(n){
        printf("Enter price :-");
        scanf("%d", &price);
        
        if(price == 0)
        {
            break;
        }
        else if(budget > price)
        {
            printf("you can buy this item\n");
        }
        else
        {
            printf("you can not buy this item\n");
        }
    }
    return 0;
}