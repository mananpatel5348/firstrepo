 //Grade Calculator
// Input marks.
//  90+ → A
// 75–89 → B
//60–74 → C
// Below 60 → Fail.

#include <stdio.h>
int main()
{
    int a;
    
    printf("Enter your marks :");
    scanf("%d", &a);
    
    if (a >= 90)
    {
        printf("Your grade is : A");
    }
    else if (a<=89 && a>=75)
    {
        printf("Your grade is : B");
    }
    else if (a<=74 && a>=60)
    {
        printf("Your grade is : C");
    }
    else
    {
        printf("fail");
    }

    return 0;
}