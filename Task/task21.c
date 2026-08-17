#include<stdio.h>
int main()
{
    int n,num;
    
    while(n){
        
        printf("Enter number :");
        scanf("%d",&num);
        
        if(num == 1)
        {
            printf("pizza\n");
        }
        else if(num == 2)
        {
            printf("burger\n");
        }
        else if(num == 3)
        {
            printf("sandwich\n");
        }
        else if(num == 4)
        {
            printf("Exit !");
            break;
        }
        else
        {
            printf("Invalid choice\n");
        }
    }
    return 0;
}