#include <stdio.h>

int main() {
    int rollNo[100], count = 0, choice;
    char name[100][50];
    float marks[100][5], total[100], percentage[100];

    do {
        printf("\n=== Marksheet Generation System ===\n");
        printf("1. Enter Marks\n");
        printf("2. Display Marksheet\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            if (count >= 100) {
                printf("Storage is full.\n");
            } else {
                printf("Enter Roll Number: ");
                scanf("%d", &rollNo[count]);
                printf("Enter Student Name: ");
                scanf("%s", name[count]);

                printf("Enter 5 subject marks:\n");
                for (int i = 0; i < 5; i++) {
                    printf("Subject %d: ", i + 1);
                    scanf("%f", &marks[count][i]);
                }

                total[count] = 0;
                for (int i = 0; i < 5; i++) {
                    total[count] += marks[count][i];
                }

                percentage[count] = total[count] / 5;
                count++;
                printf("Marks entered successfully.\n");
            }
        } else if (choice == 2) {
            if (count == 0) {
                printf("No marksheet found.\n");
            } else {
                printf("\n=== Marksheet ===\n");
                for (int i = 0; i < count; i++) {
                    printf("\nRoll No: %d\n", rollNo[i]);
                    printf("Name: %s\n", name[i]);
                    printf("Marks:\n");
                    for (int j = 0; j < 5; j++) {
                        printf("Subject %d: %.2f\n", j + 1, marks[i][j]);
                    }
                    printf("Total: %.2f\n", total[i]);
                    printf("Percentage: %.2f\n", percentage[i]);
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
