// Build a structure called InstaProfile with fields: username (string), followers (integer), 
//and a nested structure Bio with fields: description (string) and age (integer). 
//Initialize an InstaProfile variable with your own details and display all fields.

// Ans :-

#include <stdio.h>

struct InstaProfile
{
    char username[50];
    int followers;

    struct Bio
    {
        char description[100];
        int age;
    } bio;
};

int main()
{
    struct InstaProfile profile = {
        "manan_patel",
        5000,
        {"C Programming Learner", 20}
    };

    printf("Instagram Profile\n");
    printf("-----------------\n");
    printf("Username    : %s\n", profile.username);
    printf("Followers   : %d\n", profile.followers);
    printf("Description : %s\n", profile.bio.description);
    printf("Age         : %d\n", profile.bio.age);

    return 0;
}