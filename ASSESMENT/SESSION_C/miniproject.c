// Mini capstone project
// Student producrivity tracker.

#include <stdio.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

// Function to calculate and display weekly total and average
void showWeeklyReport(struct StudyLog logs[], int n)
{
    printf("\n========== WEEKLY REPORT ==========\n");

    for (int i = 0; i < n; i++)
    {
        float total = 0;

        for (int j = 0; j < 7; j++)
        {
            total += logs[i].hours[j];
        }

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", total / 7);
    }
}

// Function to display progress chart
void showProgressChart(struct StudyLog logs[], int n)
{
    printf("\n========== PROGRESS CHART ==========\n");

    for (int i = 0; i < n; i++)
    {
        printf("\n%s:\n", logs[i].subject);

        for (int j = 0; j < 7; j++)
        {
            printf("Day %d: ", j + 1);

            // Truncate decimal part
            int dots = (int)logs[i].hours[j];

            for (int k = 0; k < dots; k++)
            {
                printf("•");
            }

            printf(" (%.2f hrs)\n", logs[i].hours[j]);
        }
    }
}

// Function to save data to file
void saveToFile(struct StudyLog logs[], int n)
{
    FILE *file = fopen("productivity_log.txt", "w");

    if (file == NULL)
    {
        printf("Error: Could not open file!\n");
        return;
    }

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%s", logs[i].subject);

        for (int j = 0; j < 7; j++)
        {
            fprintf(file, ",%.2f", logs[i].hours[j]);
        }

        fprintf(file, "\n");
    }

    fclose(file);

    printf("\nData saved successfully to productivity_log.txt\n");
}

int main()
{
    struct StudyLog logs[3] =
    {
        {"Programming", {0, 0, 0, 0, 0, 0, 0}},
        {"Mathematics",  {0, 0, 0, 0, 0, 0, 0}},
        {"English",     {0, 0, 0, 0, 0, 0, 0}}
    };

    int choice;
    int day;
    float hours;

    do
    {
        printf("\n========== STUDENT PRODUCTIVITY TRACKER ==========\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nEnter day number (1-7): ");
                scanf("%d", &day);

                if (day < 1 || day > 7)
                {
                    printf("Invalid day! Please enter 1-7.\n");
                    break;
                }

                for (int i = 0; i < 3; i++)
                {
                    do
                    {
                        printf("Enter study hours for %s: ",
                               logs[i].subject);
                        scanf("%f", &hours);

                        if (hours < 0 || hours > 24)
                        {
                            printf("Invalid! Hours must be between 0 and 24.\n");
                        }

                    } while (hours < 0 || hours > 24);

                    logs[i].hours[day - 1] = hours;
                }

                printf("Today's study hours recorded successfully!\n");
                break;

            case 2:
                showWeeklyReport(logs, 3);
                showProgressChart(logs, 3);
                break;

            case 3:
                saveToFile(logs, 3);
                printf("Program exited successfully.\n");
                break;

            default:
                printf("Invalid choice! Please select 1, 2, or 3.\n");
        }

    } while (choice != 3);

    return 0;
}