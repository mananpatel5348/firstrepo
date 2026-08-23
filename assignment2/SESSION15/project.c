#include <stdio.h>

int main()
{
    int minutes[7] = {0, 0, 0, 0, 0, 0, 0};
    int choice;
    int total, highest;
    float average;
    char confirm;

    // Menu keeps running until user selects Exit
    while(1)
    {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Weekly Report\n");
        printf("4. Reset Weekly Data\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        // Option 1: Enter listening minutes
        if(choice == 1)
        {
            printf("\nEnter listening minutes for 7 days:\n");

            for(int i = 0; i < 7; i++)
            {
                printf("Day %d: ", i + 1);
                scanf("%d", &minutes[i]);
            }

            // Open file in write mode
            FILE *file = fopen("music_log.txt", "w");

            if(file == NULL)
            {
                printf("Error: File could not be opened.\n");
            }
            else
            {
                // Save all 7 days into the file
                for(int i = 0; i < 7; i++)
                {
                    fprintf(file, "%d\n", minutes[i]);
                }

                fclose(file);

                printf("Music listening data saved successfully.\n");
            }
        }

        // Option 2: View weekly summary
        else if(choice == 2)
        {
            printf("\n===== Weekly Summary =====\n");

            for(int i = 0; i < 7; i++)
            {
                printf("Day %d: %d minutes\n",
                       i + 1, minutes[i]);
            }
        }

        // Option 3: Generate weekly report
        else if(choice == 3)
        {
            FILE *file = fopen("music_log.txt", "r");

            if(file == NULL)
            {
                printf("No music data found.\n");
            }
            else
            {
                total = 0;
                highest = 0;

                // Read data from file
                for(int i = 0; i < 7; i++)
                {
                    fscanf(file, "%d", &minutes[i]);

                    total = total + minutes[i];

                    if(minutes[i] > highest)
                    {
                        highest = minutes[i];
                    }
                }

                fclose(file);

                average = (float)total / 7;

                printf("\n===== Weekly Report =====\n");
                printf("Total Listening   : %d minutes\n", total);
                printf("Average Listening : %.2f minutes\n", average);
                printf("Highest Listening : %d minutes\n", highest);
            }
        }

        // Option 4: Reset data
        else if(choice == 4)
        {
            printf("\nAre you sure you want to reset all data? (Y/N): ");
            scanf(" %c", &confirm);

            if(confirm == 'Y' || confirm == 'y')
            {
                // Clear the array
                for(int i = 0; i < 7; i++)
                {
                    minutes[i] = 0;
                }

                // Open file in write mode and close it.
                // This clears all existing content.
                FILE *file = fopen("music_log.txt", "w");

                if(file != NULL)
                {
                    fclose(file);
                }

                printf("Weekly data has been reset successfully.\n");
            }
            else
            {
                printf("Reset cancelled.\n");
            }
        }

        // Option 5: Exit
        else if(choice == 5)
        {
            printf("Thank you for using Music Listening Logger!\n");
            break;
        }

        // Invalid choice
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}