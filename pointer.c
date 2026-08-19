#include<stdio.h>

// function :- a piece of reusable code.

// pointer :- it is a variable that stores the address of another variable.

int main()
{
    int a = 5;

    int *ptr = &a;

    printf("%d",*ptr);

    return 0;
}