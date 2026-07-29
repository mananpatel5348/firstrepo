#include <stdio.h>
int main()
{
    char username[50];
    char password[50];

    printf("Enter your username: ");
    scanf("%s", username);

    printf("Enter your password: ");
    scanf("%s", password);

    if (username == "admin" && password == "abc123")
    {
        printf(" welcome to website");
    }
    else
    {
        printf("Invalid username or password");
    }

    return 0;
    }

  