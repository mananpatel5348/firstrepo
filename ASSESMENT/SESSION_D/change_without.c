#include <stdio.h>

int main()
{
    int arr[10], max, min, temp;
    float sum = 0, mean;

    // Input 10 integers
    for (int i = 0; i < 10; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Find minimum and maximum
    min = max = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    // Calculate mean
    mean = sum / 10.0;

    printf("\nMaximum: %d", max);
    printf("\nMinimum: %d", min);
    printf("\nMean: %.2f", mean);

    // Sort in ascending order
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    // Check mean position
    if ((mean - min) < (max - mean))
        printf("\nMean is closer to the minimum.");
    else if ((mean - min) > (max - mean))
        printf("\nMean is closer to the maximum.");
    else
        printf("\nMean is exactly midway between minimum and maximum.");

    return 0;
}