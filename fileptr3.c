#include<stdio.h>
int main()
{

    FILE *fptr;
    char buffer[50];
    
    fptr = fopen("first.txt","r");

    while(fgets(buffer,50,fptr)!= NULL){
        printf("%s",buffer);
    }

    fclose(fptr);

    return 0;
    
}