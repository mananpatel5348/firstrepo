//Student Information
//Input:
//Name (single word)
//Age
//Percentage
//Print all the information in a neat format.

#include <stdio.h>
int main()
{
    char name[50];
    int age;
    int percentage;
    
    printf("Name :");
    scanf("%s", name);
    
    printf("Age :");
    scanf("%d", &age);
    
    printf("Percentage :");
    scanf("%d", &percentage);
    
    return 0;
}
