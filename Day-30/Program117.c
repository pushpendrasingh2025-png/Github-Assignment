#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[100];
    int n, i, choice, searchRoll;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    while(1)
    {
        printf("\n----- MENU -----\n");
        printf("1. Display All\n");
        printf("2. Search by Roll No\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nStudent Records\n");
                for(i = 0; i < n; i++)
                {
                    printf("\nRoll : %d", s[i].roll);
                    printf("\nName : %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                }
                break;

            case 2:
                printf("Enter Roll No: ");
                scanf("%d", &searchRoll);

                for(i = 0; i < n; i++)
                {
                    if(s[i].roll == searchRoll)
                    {
                        printf("\nRecord Found");
                        printf("\nName : %s", s[i].name);
                        printf("\nMarks: %.2f\n", s[i].marks);
                        break;
                    }
                }

                if(i == n)
                    printf("Record Not Found!\n");

                break;

            case 3:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}