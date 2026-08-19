#include<stdio.h>
#include<string.h>

//built in funcrion.

int main ()
{
    char username[10];
    printf("Enter username :- ");
    scanf("%s",username);

    if(strcmp(username, "abc")==0)
    {
        printf("you type abc");
    }else{
        printf("wrong username !");
    }
    return 0;
}