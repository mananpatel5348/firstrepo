#include<stdio.h>
int main()
{
    int count = 0;
    int n;

    printf("Enter a number to count the digits :-");
    scanf("%d", &n);

    while(n != 0)
    {
        n = n / 10;
        count++;
    }
 
    printf("The number of digits in the given number is %d\n", count);

    return 0;

}