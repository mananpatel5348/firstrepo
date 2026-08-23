// Create a structure called FoodItem to store Zomato-style menu data: itemName (string), price (float), and rating (float).
// Initialize an array of 3 FoodItem variables with real menu items and display their details using a loop.

//Ans :-

#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem menu[3] = {
        {"Margherita Pizza", 299.00, 4.5},
        {"Veg Burger", 149.00, 4.2},
        {"Paneer Tikka", 249.00, 4.7}
    };

    for(int i = 0; i < 3; i++)
    {
        printf("\nFood Item %d\n", i + 1);
        printf("Name   : %s\n", menu[i].itemName);
        printf("Price  : Rs. %.2f\n", menu[i].price);
        printf("Rating : %.1f/5\n", menu[i].rating);
    }

    return 0;
}