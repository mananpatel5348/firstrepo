#include<stdio.h>
void swap (int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 4, b =5;

    printf("before swap :- %d %d\n" , a ,b);
    swap(&a,&b); // pass by value / pass by refrence.
    printf("a :- %d\n",a);
    printf("b :- %d\n",b);

    return 0;
}