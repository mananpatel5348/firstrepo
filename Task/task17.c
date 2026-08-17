#include<stdio.h>
int main()
{
    int num,n,present=0,absent=0;
    
    printf("Enter number of student :-");
    scanf("%d",&num);
    
    for( int i = 1; i<=num;i++)
    {
        printf("student %d :",i);
        scanf("%d",&n);
        
        if(n == 1)
        {
            present++;
        }
        else if(n == 0)
        {
            absent++;
        }
    }
    printf("present : %d\n",present++);
    printf("absent : %d", absent++);

    
    return 0;
}