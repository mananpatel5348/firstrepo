//Create a constant variable to store the GST rate (for example, 18%) and use it to calculate the final price of a Zomato order with a given base price.
//<br><br><em><strong>Constraint:</strong> The GST rate must not be changeable after its initial assignment.</em>

//Ans :-
#include <stdio.h>

int main()
{
    const float GST_RATE = 18.0;

    float basePrice, gst, finalPrice;

    printf("Enter base price: ");
    scanf("%f", &basePrice);

    gst = basePrice * GST_RATE / 100;
    finalPrice = basePrice + gst;

    printf("Base Price: %.2f\n", basePrice);
    printf("GST (18%%): %.2f\n", gst);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}