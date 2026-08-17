#include<stdio.h>
int main()
{
    int num,n;
    
    while(n){
        printf("Enter floor number :-");
        scanf("%d",&num);
        
        if(num >= 1 && num <= 10)
        {
            printf("going to floor %d\n",num);
        }
        else if(num == 0)
        {
            break;
        }
        else
        {
            printf("Invalid floor\n");
        }

    }
    return 0;
}