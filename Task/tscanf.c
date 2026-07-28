// create variable grade. and ask for what is the grade of student 
// if the grade is "A", print you're an elite achiever 
// or if the grade is anything other than "A" then print "you need improvement" .

#include<stdio.h>
int main()
{
    char grade;
    printf(" What is the grade of student :");
    scanf(" %c", &grade);

    if (grade == 'A')
    {
        printf(" You are an elite achiever ");
    }
    else
    {
        printf(" You need improvement ");
    }

    return 0;
}
