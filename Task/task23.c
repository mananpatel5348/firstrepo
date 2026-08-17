#include<stdio.h>
int main()
{
    int marks,pass=0;
    
    for(int i = 1; i <= 5; i++)
    {
        printf("Enter marks :-");
        scanf("%d", &marks);
        
        if(marks >= 40 )
        {
            printf("pass\n");
            pass++;
        }
        else
        {
            printf("fail\n");
        }
    }
    
    printf("Total passed :%d",pass++);
    return 0;
}