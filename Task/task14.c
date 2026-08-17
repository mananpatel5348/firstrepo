#include<stdio.h>
int main()
{
    int num,n;
    
    while(n){
        
        printf("enter number :-");
        scanf("%d",&num);
        
        if(num > 100)
        {
            printf("too high\n");
        }
        else if(num == 100 )
        {
            printf("perfect\n");
        }
        else if(num == 0)
        {
            break;
        }
        else
        {
            printf("too low\n");
        }
    }
    return 0;
}