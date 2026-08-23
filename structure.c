#include<stdio.h>
int main()
{
    //code performance - x
    // code readebality achi rehti he
    // easy to debug
    //memory allocation

    struct mydatatype{
        int a;
        float b;
    };

    struct mydatatype m1; // variable

    m1.a = 4;
    m1.b = 5.7;

    printf("%d\n",m1.a);
    printf("%f",m1.b);

    return 0;
}