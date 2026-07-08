#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n, i, choice, id;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    while(1)
    {
        printf("\n---- Employee Menu ----\n");
        printf("1. Display Employees\n");
        printf("2. Search Employee\n");
        printf("3. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                for(i = 0; i < n; i++)
                {
                    printf("\nID     : %d", emp[i].id);
                    printf("\nName   : %s", emp[i].name);
                    printf("\nSalary : %.2f\n", emp[i].salary);
                }
                break;

            case 2:
                printf("Enter Employee ID: ");
                scanf("%d", &id);

                for(i = 0; i < n; i++)
                {
                    if(emp[i].id == id)
                    {
                        printf("\nEmployee Found");
                        printf("\nName   : %s", emp[i].name);
                        printf("\nSalary : %.2f\n", emp[i].salary);
                        break;
                    }
                }

                if(i == n)
                    printf("Employee Not Found!\n");

                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}