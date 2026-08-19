#include <stdio.h>
#include<string.h>
int main()
{
    char name[20];
    printf("enter your name :-");
    fgets(name, sizeof(name),stdin);
    
    printf("%s",name);

    return 0;

}