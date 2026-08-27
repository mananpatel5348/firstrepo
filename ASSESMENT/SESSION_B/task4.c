// Persnoal expence logger

#include <stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

int main()
{
    struct Expense expenses[10];
    int count = 0;
    int choice;
    float total;

    do
    {
        printf("\n===== Expense Manager =====\n");
        printf("1. Add Expense\n");
        printf("2. View All Expenses\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            if (count >= 10)
            {
                printf("Expense limit reached! Cannot add more.\n");
            }
            else
            {
                printf("Enter category: ");
                scanf(" %[^\n]", expenses[count].category);

                printf("Enter amount: ");
                scanf("%f", &expenses[count].amount);

                count++;
                printf("Expense added successfully!\n");
            }
        }
        else if (choice == 2)
        {
            total = 0;

            if (count == 0)
            {
                printf("No expenses logged yet.\n");
            }
            else
            {
                printf("\n%-20s %-10s\n", "Category", "Amount");
                printf("-------------------------------\n");

                for (int i = 0; i < count; i++)
                {
                    printf("%-20s %.2f\n",
                           expenses[i].category,
                           expenses[i].amount);

                    total += expenses[i].amount;
                }

                printf("-------------------------------\n");
                printf("Running Total: %.2f\n", total);
            }
        }
        else if (choice == 3)
        {
            FILE *file = fopen("expenses.txt", "w");

            if (file == NULL)
            {
                printf("Error: Could not open file.\n");
                return 1;
            }

            for (int i = 0; i < count; i++)
            {
                fprintf(file, "%s,%.2f\n",
                        expenses[i].category,
                        expenses[i].amount);
            }

            fclose(file);
            printf("Expenses saved to expenses.txt. Goodbye!\n");
        }
        else
        {
            printf("Invalid choice! Please select 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}