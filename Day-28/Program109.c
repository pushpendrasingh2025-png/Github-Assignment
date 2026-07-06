#include <stdio.h>
#include <string.h>

int main()
{
    struct Book
    {
        int id;
        char title[50];
        char author[50];
        int available;
    };

    struct Book books[100];
    int count = 0, choice, i, found, bookId;

    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("Enter Book ID: ");
            scanf("%d", &books[count].id);
            printf("Enter Title: ");
            scanf("%s", books[count].title);
            printf("Enter Author: ");
            scanf("%s", books[count].author);
            books[count].available = 1;
            count++;
            printf("Book added successfully!\n");
        }
        else if (choice == 2)
        {
            if (count == 0)
                printf("No books available.\n");
            else
            {
                printf("\nBooks in library:\n");
                for (i = 0; i < count; i++)
                {
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                           books[i].id, books[i].title, books[i].author,
                           books[i].available ? "Available" : "Issued");
                }
            }
        }
        else if (choice == 3)
        {
            printf("Enter Book ID to search: ");
            scanf("%d", &bookId);
            found = 0;
            for (i = 0; i < count; i++)
            {
                if (books[i].id == bookId)
                {
                    printf("Book found!\n");
                    printf("ID: %d | Title: %s | Author: %s | Status: %s\n",
                           books[i].id, books[i].title, books[i].author,
                           books[i].available ? "Available" : "Issued");
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Book not found.\n");
        }
        else if (choice == 4)
        {
            printf("Enter Book ID to issue: ");
            scanf("%d", &bookId);
            found = 0;
            for (i = 0; i < count; i++)
            {
                if (books[i].id == bookId)
                {
                    if (books[i].available == 1)
                    {
                        books[i].available = 0;
                        printf("Book issued successfully!\n");
                    }
                    else
                    {
                        printf("Book is already issued.\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Book not found.\n");
        }
        else if (choice == 5)
        {
            printf("Enter Book ID to return: ");
            scanf("%d", &bookId);
            found = 0;
            for (i = 0; i < count; i++)
            {
                if (books[i].id == bookId)
                {
                    if (books[i].available == 0)
                    {
                        books[i].available = 1;
                        printf("Book returned successfully!\n");
                    }
                    else
                    {
                        printf("Book is already available.\n");
                    }
                    found = 1;
                    break;
                }
            }
            if (!found)
                printf("Book not found.\n");
        }
        else if (choice == 6)
        {
            printf("Thank you for using Library Management System!\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
