// Declare an integer variable called likes and a pointer variable called ptrLikes;
// assign likes a value, point ptrLikes to likes, and print both the value and the address stored in ptrLikes.

// Ans :-

#include <stdio.h>

int main()
{
    int likes = 500;
    int *ptrLikes;

    ptrLikes = &likes;

    printf("Likes value: %d\n", likes);
    printf("Address stored in ptrLikes: %p\n", (void *)ptrLikes);

    return 0;
}