#include <stdio.h>

int main()
{
    int choice;
    float balance = 10000.0, amount;

    while (1)
    {
        printf("\n========== ATM SIMULATION ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                printf("\nCurrent Balance: ₹%f\n", balance);
                break;

            case 2:
                printf("Enter amount to deposit: ₹");
                scanf("%f", &amount);

                if (amount > 0)
                {
                    balance += amount;
                    printf("₹%f deposited successfully.\n", amount);
                    printf("Updated Balance: ₹%f\n", balance);
                }
                else
                {
                    printf("Invalid deposit amount.\n");
                }
                break;

            case 3:
                printf("Enter amount to withdraw: ₹");
                scanf("%f", &amount);

                if (amount <= 0)
                {
                    printf("Invalid withdrawal amount.\n");
                }
                else if (amount > balance)
                {
                    printf("Insufficient balance!\n");
                }
                else
                {
                    balance -= amount;
                    printf("₹%f withdrawn successfully.\n", amount);
                    printf("Remaining Balance: ₹%f\n", balance);
                }
                break;

            case 4:
                printf("\nThank you for using the ATM!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}