#include<stdio.h>
 
// function - a peace of reusable code
//return type - function name (parameter list)
//parameter -: (int a, int b) - formal parameter
//arugument :- addition(a,b)

//printf - addition
//userdefined function
//pre-defined function
int addition (int a, int b) //function definition
{
    return a + b;
}

int main()
{
    printf("%d\n", addition(12, 15));

    printf("%d\n", addition(100, 200));

    printf("%d\n", addition(5348, 9598));

    return 0;
}