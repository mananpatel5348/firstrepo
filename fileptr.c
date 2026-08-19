#include<stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("first.txt","w");

    if(fptr == NULL)
    {
        printf("no file exist");
        return 1;
    }

    fprintf(fptr, "This is my message\n");
    fprintf(fptr,"second message");

    fclose(fptr);

    return 0;
}