#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age); 

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    } else if (age >= 0) {
        printf("You are not eligible to vote yet.\n");
    } else {
        printf("Age cannot be negative.\n");
    }

    return 0;
}
