# include <stdio.h>
int main()
{
    int a = 3;
    int b = 5;
    int temp;

    printf(" a = %d and b = %d", a, b);
    temp = a;
    a = b;
    b = temp;

    printf(" \nAfter swapping : a = %d and b = %d", a, b);

    return 0;
}