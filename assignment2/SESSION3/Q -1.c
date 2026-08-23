// 1.Declare variables for a Flipkart product: productName (as a string), price (float), and rating (double). Assign sample values and print each variable with its data type

//Ans :-

#include <stdio.h>

int main()
{
    char productName[] = "Samsung Galaxy M15";
    float price = 14999.50;
    double rating = 4.5;

    printf("Product Name: %s\n", productName);
    printf("Data Type: string\n\n");

    printf("Price: %.2f\n", price);
    printf("Data Type: float\n\n");

    printf("Rating: %.1lf\n", rating);
    printf("Data Type: double\n");

    return 0;
}