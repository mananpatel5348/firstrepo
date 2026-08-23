//Create a Flipkart discount calculator that asks the user for the total cart amount. 
//Use nested if statements to check: if amount > 2000, apply 20% discount; else if amount > 1000, apply 10% discount; else, no discount. 
//Print the final amount to pay.<br><br><em><strong>Hint:</strong> Use nested ifs to check each discount slab.</em>

//Ans :-

#include <stdio.h>

int main()
{
    float amount, discount, finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount > 2000)
    {
        discount = amount * 20 / 100;
        
        if (discount > 0)
        {
            finalAmount = amount - discount;
        }
    }
    else
    {
        if (amount > 1000)
        {
            discount = amount * 10 / 100;
            finalAmount = amount - discount;
        }
        else
        {
            discount = 0;
            finalAmount = amount;
        }
    }

    printf("Discount: %.2f\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    return 0;
}