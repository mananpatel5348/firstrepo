#include<stdio.h>
int main()
{
    int num,n;
    
    while(n){
        
        printf("Enter number :-");
        scanf("%d",&num);
        
        if(num > 42)
        {
            printf("too high !\n");
        }
        else if(num == 42)
        {
            printf("you got it !");
            break;
        }
        else
        {
            printf("too low !\n");
        }
    }
    
    return 0;
}