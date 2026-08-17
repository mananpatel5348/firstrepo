#include <stdio.h>

int main()
{
    int n, num, count = 0;

    printf("how many number are print: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);

        if(num > 10)
        {
            count++;
        }
    }

    printf("Numbers greater than 10 = %d", count);

    return 0;
}