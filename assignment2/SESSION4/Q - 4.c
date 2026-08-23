//Given three variables: likes, comments, and shares (all numbers), write code to check if a post is 'trending' on Instagram (at least 1000 likes OR more than 200 comments AND at least 50 shares). Print the result.

//ans :-

#include<stdio.h>
int main()
{
    int likes,share,comment;

    printf("Enter your number of likes :-");
    scanf("%d",&likes);

    printf("Enter your number of shares :-");
    scanf("%d",&share);

    printf("Enter your number of comment :-");
    scanf("%d",&comment);

    if(likes >= 1000 && share >= 50 && comment >= 200)
    {
        printf("trending");
    }else{
        printf("not trending");
    }

    return 0;
}