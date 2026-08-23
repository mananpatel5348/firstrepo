// Build a small script that takes the user's full name as input and creates a username by copying only the first 5 characters using strcpy().
// Print the generated username.<br><br><em><strong>Constraint:</strong> If the name is shorter than 5 characters, 
//use the full name as the username.</em>

// Ans :-

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    char username[100];
    char temp[6];

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline
    name[strcspn(name, "\n")] = '\0';

    if(strlen(name) < 5)
    {
        strcpy(username, name);
    }
    else
    {
        for(int i = 0; i < 5; i++)
        {
            temp[i] = name[i];
        }

        temp[5] = '\0';

        strcpy(username, temp);
    }

    printf("Generated Username: %s\n", username);

    return 0;
}