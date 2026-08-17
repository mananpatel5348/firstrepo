#include <stdio.h>
int main()
{
    int budget;
    int price;

    printf("enter budget :-");
    scanf("%d",&budget);

    printf("enter price :-");
    scanf("%d",&price);
    {
        if(budget > price)
        {
            printf("You can buy this item");
        }else{
            printf("you can not buy this item");
        }
    }
    return 0;
}