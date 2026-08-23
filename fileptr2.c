#include<stdio.h>
int main()
{
    FILE *fptr;
    char name[50];

    fptr = fopen("first.txt","a");

    fprintf("Enter your name :- ");
    fgets(name,50,stdin);

    if(fptr == NULL)
    {
        printf("no file exist");
        return 1;
    }

    fprinter(fptr);

    fclose(fptr);

    return 0;
}