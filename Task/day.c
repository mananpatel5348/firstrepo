#include<stdio.h>
int main()
// basically this program is used to print the day of the week based on the number entered by the user. The user is prompted to enter a number (1-7), and the program uses a series of if-else statements to determine which day corresponds to that number. If the input is not between 1 and 7, it prints "Invalid input".
{
    int a;

    printf("Enter a number A : ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf(" This day is Monday");
    }
    else if (a == 2)
    {
        printf(" This day is Tuesday");
    }
    else if (a == 3)
    {
        printf(" This day is Wednesday");
    }
    else if (a == 4)
    {
        printf(" This day is Thursday");
    }
    else if (a == 5)
    {
        printf(" This day is Friday");
    }
    else if (a == 6)
    {
        printf(" This day is Saturday");
    }
    else 
    {
        printf(" This day is Sunday");
    }
   
    return 0;
}