#include <stdio.h>
int main()
{
    int weekday;
    printf("Enter a number between 1-7 :-");
    scanf("%d", &weekday);
    switch(weekday)
    {
        case 1 : printf("This day is Monday");
        break;
        case 2 : printf("This day is Tuesday");
        break;
        case 3 : printf("This day is Wednesday");
        break;
        case 4 : printf("This day is Thursday");
        break;
        case 5 : printf("This day is Friday");
        break;
        case 6 : printf("This day is Saturday");
        break;
        case 7 : printf("This day is Sunday");
        break;

        default : printf("please enter a valid number");
    }

    return 0;
}