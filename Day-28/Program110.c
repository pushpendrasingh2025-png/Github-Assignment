#include <stdio.h>

int main()
{
    int account_no[100], choice, i, count = 0, found, search_acc;
    char name[100][50];
    float balance[100], amount;

    while (1)
    {
        printf("\nBank Account System\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (count < 100)
            {
                printf("Enter Account Number: ");
                scanf("%d", &account_no[count]);
                printf("Enter Name: ");
                scanf("%s", name[count]);
                printf("Enter Initial Balance: ");
                scanf("%f", &balance[count]);
                count++;
                printf("Account created successfully!\n");
            }
            else
            {
                printf("Account limit reached.\n");
            }
            break;

        case 2:
            printf("Enter Account Number: ");
            scanf("%d", &search_acc);
            found = 0;
            for (i = 0; i < count; i++)
            {
                if (account_no[i] == search_acc)
                {
                    printf("Enter amount to deposit: ");
                    scanf("%f", &amount);
                    balance[i] += amount;
                    printf("Deposit successful!\n");
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Account not found.\n");
            }
            break;

        case 3:
            printf("Enter Account Number: ");
            scanf("%d", &search_acc);
            found = 0;
            for (i = 0; i < count; i++)
            {
                if (account_no[i] == search_acc)
                {
                    printf("Enter amount to withdraw: ");
                    scanf("%f", &amount);
                    if (amount <= balance[i])
                    {
                        balance[i] -= amount;
                        printf("Withdrawal successful!\n");
                    }
                    else
                    {
                        printf("Insufficient balance.\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Account not found.\n");
            }
            break;

        case 4:
            printf("Enter Account Number: ");
            scanf("%d", &search_acc);
            found = 0;
            for (i = 0; i < count; i++)
            {
                if (account_no[i] == search_acc)
                {
                    printf("Account Holder: %s\n", name[i]);
                    printf("Balance: %.2f\n", balance[i]);
                    found = 1;
                    break;
                }
            }
            if (!found)
            {
                printf("Account not found.\n");
            }
            break;

        case 5:
            printf("Exiting program.\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}
