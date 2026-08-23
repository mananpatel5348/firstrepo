// Write a function isEligibleForOffer that takes a user's age and total order value, and returns true if the user is 18 or older AND the order value is above 500, otherwise false.<br><br><em><strong>Hint:</strong> Use relational and logical operators together.</em>

//Ans :-

#include<stdio.h>
int main()
{
    int age;
    int price;

    printf("Enter your age :- ");
    scanf("%d",&age);

    printf("Enter your order value :-");
    scanf("%d",&price);

    if(age > 18 && price > 500)
    {
        printf("You are eligible");
    }else{
        printf("you are not eligible");
    }

    return 0;

}