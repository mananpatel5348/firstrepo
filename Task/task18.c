#include<stdio.h>
int main()
{
    int num,n,pizza=0,burger=0;
    
    printf("how many people are voting :-");
    scanf("%d",&num);
    
    for (int i = 1; i<=num ; i++)
    {
        printf("people %d:",i);
        scanf("%d",&n);
        
        if(n == 1)
        {
            pizza++;
        }
        else if(n == 2)
        {
            burger++;
        }
    }
    printf("pizza : %d\n",pizza++);
    printf("burger : %d",burger++);
    
    return 0;
}