#include <stdio.h>

void clear_input_buffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    return (double)a / b;
}

int factorial(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
        result *= i;
    return result;
}

int main(void)
{
    int choice;
    int a, b;

    while (1)
    {
        printf("\nMenu Driven Program\n");
        printf("1. Add two numbers\n");
        printf("2. Subtract two numbers\n");
        printf("3. Multiply two numbers\n");
        printf("4. Divide two numbers\n");
        printf("5. Find factorial of a number\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }

        switch (choice)
        {
            case 1:
                printf("Enter two integers: ");
                if (scanf("%d %d", &a, &b) != 2)
                {
                    printf("Invalid input.\n");
                    clear_input_buffer();
                    break;
                }
                printf("Result: %d\n", add(a, b));
                break;
            case 2:
                printf("Enter two integers: ");
                if (scanf("%d %d", &a, &b) != 2)
                {
                    printf("Invalid input.\n");
                    clear_input_buffer();
                    break;
                }
                printf("Result: %d\n", subtract(a, b));
                break;
            case 3:
                printf("Enter two integers: ");
                if (scanf("%d %d", &a, &b) != 2)
                {
                    printf("Invalid input.\n");
                    clear_input_buffer();
                    break;
                }
                printf("Result: %d\n", multiply(a, b));
                break;
            case 4:
                printf("Enter two integers: ");
                if (scanf("%d %d", &a, &b) != 2)
                {
                    printf("Invalid input.\n");
                    clear_input_buffer();
                    break;
                }
                if (b == 0)
                {
                    printf("Cannot divide by zero.\n");
                    break;
                }
                printf("Result: %.2f\n", divide(a, b));
                break;
            case 5:
                printf("Enter a non-negative integer: ");
                if (scanf("%d", &a) != 1)
                {
                    printf("Invalid input.\n");
                    clear_input_buffer();
                    break;
                }
                if (a < 0)
                {
                    printf("Factorial is not defined for negative numbers.\n");
                    break;
                }
                printf("Factorial of %d is %d\n", a, factorial(a));
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
