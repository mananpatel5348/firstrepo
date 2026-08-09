#include<stdio.h>

void tableprinter (int a)
{
    for ( int i = 1; i<11 ; i++ )
    {
        printf("%d x %d = %d\n", a, i, a*i);
    }
}

int main()
{
   tableprinter(5);
   printf("\n--------------------------\n");
   tableprinter(10);
   printf("\n--------------------------\n");
   tableprinter(15);

    return 0;
}