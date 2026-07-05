#include <stdio.h>

int main() {
    int empId[100], choice, count = 0, i;
    char name[100][50];
    float salary[100];

    do {
        printf("\n=== Employee Management System ===\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= 100) {
                printf("Employee list is full.\n");
            } else {
                printf("Enter Employee ID: ");
                scanf("%d", &empId[count]);
                printf("Enter Employee Name: ");
                scanf("%s", name[count]);
                printf("Enter Salary: ");
                scanf("%f", &salary[count]);
                count++;
                printf("Employee added successfully.\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No employees found.\n");
            } else {
                printf("\nEmployee Records:\n");
                for (i = 0; i < count; i++) {
                    printf("%d\t%s\t%.2f\n", empId[i], name[i], salary[i]);
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
