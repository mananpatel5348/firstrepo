// Declare a function called getUserInitials that takes a user's full name (like 'Virat Kohli') and returns their initials in uppercase (e.g., 'VK'). 
//Call this function with your favorite cricketer's name and print the result.

// Ans :-

#include <stdio.h>
#include <ctype.h>

void getUserInitials(char name[], char initials[])
{
    int j = 0;

    // First letter
    initials[j++] = toupper(name[0]);

    // Find first letter after space
    for(int i = 0; name[i] != '\0'; i++)
    {
        if(name[i] == ' ' && name[i + 1] != '\0')
        {
            initials[j++] = toupper(name[i + 1]);
        }
    }

    initials[j] = '\0';
}

int main()
{
    char name[] = "Virat Kohli";
    char initials[10];

    getUserInitials(name, initials);

    printf("Initials: %s\n", initials);

    return 0;
}