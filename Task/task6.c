#include <stdio.h>
int main()
{
    int n;
    
    printf("enter a number ;-");
    scanf("%d",&n);
    
    for(int i=n; i>=1; i--)
    {
        if( i % 2)
        {
            printf("%d is even\n",i);
        }else{
            printf("%d is odd\n",i);
        }
    }
    
    return 0;
}