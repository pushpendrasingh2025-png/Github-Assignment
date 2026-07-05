#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[100];
    int count = 0;
    int choice;

    do {
        printf("\n=== Student Record Management System ===\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student\n");
        printf("4. Update Student\n");
        printf("5. Delete Student\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= 100) {
                printf("\nStudent list is full.\n");
            } else {
                printf("\nEnter Roll Number: ");
                scanf("%d", &students[count].rollNo);
                printf("Enter Name: ");
                scanf("%s", students[count].name);
                printf("Enter Marks: ");
                scanf("%f", &students[count].marks);
                count++;
                printf("\nStudent record added successfully!\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("\nNo student records found.\n");
            } else {
                printf("\nStudent Records:\n");
                printf("-----------------------------------\n");
                printf("Roll No\tName\t\tMarks\n");
                printf("-----------------------------------\n");
                for (int i = 0; i < count; i++) {
                    printf("%d\t\t%s\t\t%f\n", students[i].rollNo, students[i].name, students[i].marks);
                }
            }
        } else if (choice == 3) {
            int rollNo, found = 0;
            printf("\nEnter Roll Number to search: ");
            scanf("%d", &rollNo);
            for (int i = 0; i < count; i++) {
                if (students[i].rollNo == rollNo) {
                    printf("\nStudent found!\n");
                    printf("Roll No: %d\n", students[i].rollNo);
                    printf("Name: %s\n", students[i].name);
                    printf("Marks: %f\n", students[i].marks);
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("\nStudent not found.\n");
            }
        } else if (choice == 4) {
            int rollNo, found = 0;
            printf("\nEnter Roll Number to update: ");
            scanf("%d", &rollNo);
            for (int i = 0; i < count; i++) {
                if (students[i].rollNo == rollNo) {
                    printf("Enter new Name: ");
                    scanf("%s", students[i].name);
                    printf("Enter new Marks: ");
                    scanf("%f", &students[i].marks);
                    printf("\nStudent record updated successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("\nStudent not found.\n");
            }
        } else if (choice == 5) {
            int rollNo, found = 0;
            printf("\nEnter Roll Number to delete: ");
            scanf("%d", &rollNo);
            for (int i = 0; i < count; i++) {
                if (students[i].rollNo == rollNo) {
                    for (int j = i; j < count - 1; j++) {
                        students[j] = students[j + 1];
                    }
                    count--;
                    printf("\nStudent record deleted successfully!\n");
                    found = 1;
                    break;
                }
            }
            if (!found) {
                printf("\nStudent not found.\n");
            }
        } else if (choice == 6) {
            printf("\nExiting program. Goodbye!\n");
        } else {
            printf("\nInvalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}