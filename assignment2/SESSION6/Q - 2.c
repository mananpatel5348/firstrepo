// Create a menu-driven console app that lets the user: 1) View your favorite 3 IPL teams,
// 2) Add a new team, 
//3) Exit. 
//Use a while loop to keep showing the menu until the user chooses Exit.
//<br><br><em><strong>Hint:</strong> Use input() (or Scanner in Java) to get the user's choice each time.</em>

// Ans :-

#include <stdio.h>

int main()
{
    int choice;
    char teams[4][50] = {
        "CSK",
        "MI",
        "RCB"
    };
    char newTeam[50];

    while(1)
    {
        printf("\n--- IPL Team Menu ---\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            printf("\nFavorite IPL Teams:\n");
            printf("1. %s\n", teams[0]);
            printf("2. %s\n", teams[1]);
            printf("3. %s\n", teams[2]);
        }
        else if(choice == 2)
        {
            printf("Enter new team: ");
            scanf("%s", newTeam);

            printf("%s added successfully!\n", newTeam);
        }
        else if(choice == 3)
        {
            printf("Exiting program...\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}