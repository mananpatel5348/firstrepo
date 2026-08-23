// Given an array of 5 order amounts (e.g., Zomato orders), 
//use a pointer to iterate through the array and print each amount along with its memory address.
//<br><br><em><strong>Hint:</strong> Use pointer arithmetic to move to the next element.</em>

// Ans :-

#include <stdio.h>

int main()
{
    int orders[5] = {250, 180, 320, 450, 200};

    int *ptr = orders;

    for(int i = 0; i < 5; i++)
    {
        printf("Order Amount: %d\n", *ptr);
        printf("Memory Address: %p\n\n", (void *)ptr);

        ptr++;
    }

    return 0;
}