#include <stdio.h>

int main()
{
    char s_names[5][50];
    int roll_no[5];
    char grade[5];
    
    for(int i=0; i<5; i++){
        printf("Enter your name: ");
        fgets(s_names[i], 50, stdin); // \n 
        printf("Enter your roll no:- ");
        scanf(" %d",&roll_no[i]); // enter
        printf("Enter your grade: ");
        scanf(" %c",&grade[i]); //n
        
        getchar();
    }
    
    // print the names 
    printf("------Student information-----\n");
     for(int i=0; i<5; i++){
        printf("name:- %s", s_names[i]);
        printf("Roll no: %d\n",roll_no[i]);
        printf("Grade: %c\n",grade[i]);
        
        printf("\n------------------------------------\n");
        
    }

    return 0;
}