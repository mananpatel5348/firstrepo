#include <stdio.h>
int main()
{
    // continue - skip , break - exit
    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}