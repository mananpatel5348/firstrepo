// Build a Flipkart-style discount calculator: given product price, discount percentage, and a boolean isMember, use arithmetic and logical operators to calculate the final price (apply an extra 5% off if isMember is true).

// Ans :-
#include <stdio.h>

int main()
{
    float productPrice = 2000;
    float discountPercentage = 10;
    int isMember = 1;

    float discount;
    float finalPrice;

    // Normal discount
    discount = productPrice * discountPercentage / 100;
    finalPrice = productPrice - discount;

    // Extra 5% discount for members
    if (isMember == 1)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Product Price: %.2f\n", productPrice);
    printf("Discount: %.2f%%\n", discountPercentage);
    printf("Member: %s\n", isMember ? "Yes" : "No");
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}