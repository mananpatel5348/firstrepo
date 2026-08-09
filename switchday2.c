#include <stdio.h>
int main()
{
    int weekday;

    do{
        printf("Enter a number between 1-7 :-");
        scanf("%d", &weekday);
        switch(weekday)
        {
            case 1 : printf("This day is Monday\n");
            break;
            case 2 : printf("This day is Tuesday\n");
            break;
            case 3 : printf("This day is Wednesday\n");
            break;
            case 4 : printf("This day is Thursday\n");
            break;
            case 5 : printf("This day is Friday\n");
            break;
            case 6 : printf("This day is Saturday\n");
            break;
            case 7 : printf("This day is Sunday\n");
            break;

            default : printf("please enter a valid number\n");
        }
    }
    while(weekday != -1);
    return 0;
}