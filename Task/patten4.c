#include<stdio.h>
int main()
{
    for (int i =1 ; i<=6 ;i++)
    {
        if ( i % 2 == 0)
        {
            for (int j = 1; j<=5 ; j++)
            {
                printf("* ");
            }
        }else{
            for ( int j = 1; j<=6 ; j++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}