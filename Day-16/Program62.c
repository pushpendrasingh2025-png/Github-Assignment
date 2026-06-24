#include <stdio.h>

int main()
{
    int array[20], frequency[20], n, i, j;
    int maxCount = 0, maxElement = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n <= 0 || n > 20)
    {
        printf("Invalid input\n");
        return 0;
    }

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
        frequency[i] = -1;
    }

    for (i = 0; i < n; i++)
    {
        int count = 1;

        if (frequency[i] == 0)
        {
            continue;
        }

        for (j = i + 1; j < n; j++)
        {
            if (array[i] == array[j])
            {
                count++;
                frequency[j] = 0;
            }
        }

        frequency[i] = count;

        if (count > maxCount)
        {
            maxCount = count;
            maxElement = array[i];
        }
    }

    printf("Element with maximum frequency is: %d\n", maxElement);
    printf("Frequency is: %d\n", maxCount);

    return 0;
}
