#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

struct Student s[100];
int n = 0;

void addStudent()
{
    printf("\nEnter Roll No: ");
    scanf("%d", &s[n].roll);

    printf("Enter Name: ");
    scanf("%s", s[n].name);

    printf("Enter Marks: ");
    scanf("%f", &s[n].marks);

    n++;
}

void displayStudents()
{
    int i;

    if(n == 0)
    {
        printf("No Records Found!\n");
        return;
    }

    printf("\nStudent Records\n");

    for(i = 0; i < n; i++)
    {
        printf("\nRoll : %d", s[i].roll);
        printf("\nName : %s", s[i].name);
        printf("\nMarks: %.2f\n", s[i].marks);
    }
}

void searchStudent()
{
    int roll, i;

    printf("Enter Roll No: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == roll)
        {
            printf("\nRecord Found");
            printf("\nName : %s", s[i].name);
            printf("\nMarks: %.2f\n", s[i].marks);
            return;
        }
    }

    printf("Record Not Found!\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n------ MENU ------\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                displayStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                return 0;

            default:
                printf("Invalid Choice\n");
        }
    }
}