#include <stdio.h>
int main()
{
    int arr[5];
    printf("Enter 5 values :");
    for (int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    printf("\n ------------------the given array values are------------------\n");

    for( int i = 0; i<5 ; i++){
        if ( i == 4)
        {
            printf(" %d", arr[i]);
        }
        else
        {
            printf(" %d,", arr[i]);
        }
    }
    return 0;
}