// Create a function addToCart that takes a shopping cart array and a product name,
// adds the product to the cart,
// and prints the updated cart. 
//Demonstrate how passing the cart array by reference allows changes to persist outside the function.
//<br><br><em><strong>Hint:</strong> In languages like JavaScript, arrays are passed by reference.
// In C/C++, use pointers for reference behavior.</em>

// Ans :-

#include <stdio.h>
#include <string.h>

void addToCart(char cart[][50], int *count, char product[])
{
    strcpy(cart[*count], product);
    (*count)++;

    printf("\nUpdated Cart:\n");

    for(int i = 0; i < *count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main()
{
    char cart[10][50] = {
        "T-Shirt",
        "Jeans"
    };

    int count = 2;

    printf("Original Cart:\n");

    for(int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    addToCart(cart, &count, "Shoes");

    printf("\nCart outside function:\n");

    for(int i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}