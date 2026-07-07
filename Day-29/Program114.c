#include <stdio.h>

#define MAX_SIZE 100

void clear_input_buffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

void read_array(int arr[], int *size)
{
    printf("Enter number of elements (1-%d): ", MAX_SIZE);
    if (scanf("%d", size) != 1 || *size < 1 || *size > MAX_SIZE)
    {
        printf("Invalid size. Please enter a number between 1 and %d.\n", MAX_SIZE);
        clear_input_buffer();
        *size = 0;
        return;
    }

    printf("Enter %d elements:\n", *size);
    for (int i = 0; i < *size; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            printf("Invalid input.\n");
            clear_input_buffer();
            *size = 0;
            return;
        }
    }
}

void print_array(int arr[], int size)
{
    printf("Array elements: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int find_max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int find_min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < min)
            min = arr[i];
    return min;
}

int sum_array(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

void sort_array(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(void)
{
    int arr[MAX_SIZE];
    int size = 0;
    int choice;

    while (1)
    {
        printf("\nMenu Driven Array Operations System\n");
        printf("1. Read array\n");
        printf("2. Display array\n");
        printf("3. Find maximum element\n");
        printf("4. Find minimum element\n");
        printf("5. Calculate sum of elements\n");
        printf("6. Sort array\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }

        switch (choice)
        {
            case 1:
                read_array(arr, &size);
                break;
            case 2:
                if (size == 0)
                    printf("Array is empty.\n");
                else
                    print_array(arr, size);
                break;
            case 3:
                if (size == 0)
                    printf("Array is empty.\n");
                else
                    printf("Maximum element: %d\n", find_max(arr, size));
                break;
            case 4:
                if (size == 0)
                    printf("Array is empty.\n");
                else
                    printf("Minimum element: %d\n", find_min(arr, size));
                break;
            case 5:
                if (size == 0)
                    printf("Array is empty.\n");
                else
                    printf("Sum of elements: %d\n", sum_array(arr, size));
                break;
            case 6:
                if (size == 0)
                    printf("Array is empty.\n");
                else
                {
                    sort_array(arr, size);
                    printf("Array sorted successfully.\n");
                }
                break;
            case 7:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
