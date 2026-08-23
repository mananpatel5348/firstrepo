// Build a function formatPrice that takes a price in rupees and returns a string formatted like Flipkart's price tag (e.g., '₹1,599').
// Use this function to display prices for three different products.

// Ans :-

#include <stdio.h>

char* formatPrice(int price)
{
    static char formatted[50];

    if(price >= 1000)
    {
        sprintf(formatted, "₹%d,%03d", price / 1000, price % 1000);
    }
    else
    {
        sprintf(formatted, "₹%d", price);
    }

    return formatted;
}

int main()
{
    int price1 = 1599;
    int price2 = 2499;
    int price3 = 799;

    printf("T-Shirt: %s\n", formatPrice(price1));
    printf("Shoes: %s\n", formatPrice(price2));
    printf("Cap: %s\n", formatPrice(price3));

    return 0;
}