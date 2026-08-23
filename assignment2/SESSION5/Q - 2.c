//Build a Zomato-style food suggestion tool: take the user's preferred meal time ('breakfast', 'lunch', 'dinner', or 'snack') and use a switch-case statement to suggest a popular dish for that time. If the input doesn't match any meal, suggest 'Try some fruits!'

//Ans :-
#include <stdio.h>
#include <string.h>

int main()
{
    char meal[20];
    int choice;

    printf("Enter meal time: ");
    scanf("%s", meal);

    if (strcmp(meal, "breakfast") == 0)
        choice = 1;
    else if (strcmp(meal, "lunch") == 0)
        choice = 2;
    else if (strcmp(meal, "dinner") == 0)
        choice = 3;
    else if (strcmp(meal, "snack") == 0)
        choice = 4;
    else
        choice = 0;

    switch (choice)
    {
        case 1:
            printf("Try some Masala Dosa!");
            break;

        case 2:
            printf("Try some Paneer Biryani!");
            break;

        case 3:
            printf("Try some Butter Chicken!");
            break;

        case 4:
            printf("Try some Samosa!");
            break;

        default:
            printf("Try some fruits!");
    }

    return 0;
}