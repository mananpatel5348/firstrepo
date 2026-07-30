//Movie Ticket Eligibility
//Input age.
//If age is less than 5, print “Free Ticket”.
//Else if age is less than 18, print “Child Ticket”.
//Else print “Adult Ticket”.

#include <stdio.h>
int main ()
{
    int age;
    
    printf("Enter your age :");
    scanf("%d", &age);
    
    if (age < 5)
    {
        printf("Free ticket");
    }
    else if(age < 18)
    {
        printf("Child ticket");
    }
    else
    {
        printf("Adult ticket");
    }
    
    return 0;
}