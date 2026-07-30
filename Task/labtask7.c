//Character Check
//Input a character.
//If it is ‘A’, print “Excellent”.
// Otherwise print “Keep Learning”.

#include <stdio.h>
int main()
{
    char grade;
    
    printf("Enter your grade :");
    scanf("%c", &grade);
    
    if(grade == 'A')
    {
        printf("Exellent");
    }
    else
    {
        printf("keep learning");
    }
    return 0;
}
