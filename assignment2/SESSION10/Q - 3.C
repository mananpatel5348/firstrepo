// Copy the string 'Flipkart' into another string variable called shoppingApp using strcpy(),
// then print the value of shoppingApp.
//<br><br><em><strong>Hint:</strong> Make sure to declare enough space for the destination string.</em>

// Ans :-

#include <stdio.h>
#include <string.h>

int main()
{
    char shoppingApp[20];

    strcpy(shoppingApp, "Flipkart");

    printf("Shopping App: %s\n", shoppingApp);

    return 0;
}