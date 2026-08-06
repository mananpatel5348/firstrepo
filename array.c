#include <stdio.h>
int main()
{
    // perfomance optimization
    // array - collection of things/ items
    //c --> array --> same type --> static
    // index --> 0 --> 0 based indexing
    // index --> 1 --> fortran
    //array size :- 5
    // last element index=  size -1
    /**/
    int marks[5] = { 10, 20, 30, 40, 50 };
    printf("%d",marks[3]);


    int marks[5];
    marks[0] = 10;
    marks[1] = 20; // 
    marks[2] = 30;  
    marks[4] = 40;

    return 0;
}