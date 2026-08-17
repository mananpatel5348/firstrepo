#include<stdio.h>
int main()
{
    int arr[5];
    
    for(int i = 0; i <5; i++)
    {
        printf("Enter number :-");
        scanf("%d",&arr[i]);
    }
    int bigger = arr[0];
    
    for(int i = 1; i < 5; i++)
    {
        if(bigger < arr[i])
        {
            bigger = arr[i];
        }
    }
    
    printf("%d is bigger number", bigger);

    return 0;
    
}