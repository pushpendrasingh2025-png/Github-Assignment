#include <stdio.h>

int main() {
    int choice, count = 0;
    int empId[100];
    char name[100][50];
    float basic[100], hra[100], da[100], gross[100];

    do {
        printf("\n=== Salary Management System ===\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display Salary Details\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= 100) {
                printf("Salary list is full.\n");
            } else {
                printf("Enter Employee ID: ");
                scanf("%d", &empId[count]);
                printf("Enter Employee Name: ");
                scanf("%s", name[count]);
                printf("Enter Basic Salary: ");
                scanf("%f", &basic[count]);
                printf("Enter HRA: ");
                scanf("%f", &hra[count]);
                printf("Enter DA: ");
                scanf("%f", &da[count]);

                gross[count] = basic[count] + hra[count] + da[count];
                count++;
                printf("Salary added successfully.\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No salary records found.\n");
            } else {
                printf("\nSalary Records:\n");
                printf("ID\tName\tBasic\tHRA\tDA\tGross\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\t%.2f\t%.2f\t%.2f\n",
                           empId[i], name[i], basic[i], hra[i], da[i], gross[i]);
                }
            }
        } else if (choice == 3) {
            printf("Exiting program.\n");
        } else {
            printf("Invalid choice.\n");
        }
    } while (choice != 3);

    return 0;
}
