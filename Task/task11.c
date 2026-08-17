#include<stdio.h>
int main()
{
    int arr[5];
    
    printf("Enter a 5 number :-");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);
    }
    int smallest = arr[0];

    for(int i = 1; i < 5; i++)
    {
        if(smallest > arr[i])
        {
            smallest = arr[i];
        }
    }

    printf("%d is smallest number",smallest);

    return 0;
}