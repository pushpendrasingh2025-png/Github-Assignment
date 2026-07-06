#include <stdio.h>
#include <string.h>

#define MAX_CONTACTS 100
#define NAME_LENGTH 50
#define PHONE_LENGTH 20
#define EMAIL_LENGTH 50

void clear_input_buffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

void add_contact(char names[][NAME_LENGTH], char phones[][PHONE_LENGTH], char emails[][EMAIL_LENGTH], int *count)
{
    if (*count >= MAX_CONTACTS)
    {
        printf("Contact list is full.\n");
        return;
    }

    printf("Enter name: ");
    if (fgets(names[*count], NAME_LENGTH, stdin) == NULL)
    {
        printf("Failed to read name.\n");
        return;
    }
    names[*count][strcspn(names[*count], "\n")] = '\0';
    if (names[*count][0] == '\0')
    {
        printf("Name cannot be empty.\n");
        return;
    }

    printf("Enter phone: ");
    if (fgets(phones[*count], PHONE_LENGTH, stdin) == NULL)
    {
        printf("Failed to read phone number.\n");
        return;
    }
    phones[*count][strcspn(phones[*count], "\n")] = '\0';
    if (phones[*count][0] == '\0')
    {
        printf("Phone number cannot be empty.\n");
        return;
    }

    printf("Enter email: ");
    if (fgets(emails[*count], EMAIL_LENGTH, stdin) == NULL)
    {
        printf("Failed to read email.\n");
        return;
    }
    emails[*count][strcspn(emails[*count], "\n")] = '\0';

    (*count)++;
    printf("Contact added successfully.\n");
}

void view_contacts(char names[][NAME_LENGTH], char phones[][PHONE_LENGTH], char emails[][EMAIL_LENGTH], int count)
{
    if (count == 0)
    {
        printf("No contacts available.\n");
        return;
    }

    printf("\nContact List:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d. Name: %s | Phone: %s | Email: %s\n", i + 1, names[i], phones[i], emails[i]);
    }
}

int find_contact(char names[][NAME_LENGTH], char phones[][PHONE_LENGTH], int count, const char *query)
{
    for (int i = 0; i < count; i++)
    {
        if (strcasecmp(names[i], query) == 0 || strcmp(phones[i], query) == 0)
        {
            return i;
        }
    }
    return -1;
}

void search_contact(char names[][NAME_LENGTH], char phones[][PHONE_LENGTH], char emails[][EMAIL_LENGTH], int count)
{
    if (count == 0)
    {
        printf("No contacts available.\n");
        return;
    }

    char query[NAME_LENGTH];
    printf("Enter name or phone to search: ");
    if (fgets(query, NAME_LENGTH, stdin) == NULL)
    {
        printf("Failed to read search query.\n");
        return;
    }
    query[strcspn(query, "\n")] = '\0';

    int index = find_contact(names, phones, count, query);
    if (index >= 0)
    {
        printf("Contact found: Name: %s | Phone: %s | Email: %s\n", names[index], phones[index], emails[index]);
    }
    else
    {
        printf("Contact not found.\n");
    }
}

void update_contact(char names[][NAME_LENGTH], char phones[][PHONE_LENGTH], char emails[][EMAIL_LENGTH], int count)
{
    if (count == 0)
    {
        printf("No contacts available.\n");
        return;
    }

    char query[NAME_LENGTH];
    printf("Enter name or phone of the contact to update: ");
    if (fgets(query, NAME_LENGTH, stdin) == NULL)
    {
        printf("Failed to read query.\n");
        return;
    }
    query[strcspn(query, "\n")] = '\0';

    int index = find_contact(names, phones, count, query);
    if (index < 0)
    {
        printf("Contact not found.\n");
        return;
    }

    printf("Updating contact %s (phone: %s, email: %s)\n", names[index], phones[index], emails[index]);
    printf("Enter new name (leave blank to keep current): ");
    char buffer[NAME_LENGTH];
    if (fgets(buffer, NAME_LENGTH, stdin) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0';
        if (buffer[0] != '\0')
            strncpy(names[index], buffer, NAME_LENGTH - 1), names[index][NAME_LENGTH - 1] = '\0';
    }

    printf("Enter new phone (leave blank to keep current): ");
    if (fgets(buffer, PHONE_LENGTH, stdin) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0';
        if (buffer[0] != '\0')
            strncpy(phones[index], buffer, PHONE_LENGTH - 1), phones[index][PHONE_LENGTH - 1] = '\0';
    }

    printf("Enter new email (leave blank to keep current): ");
    if (fgets(buffer, EMAIL_LENGTH, stdin) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0';
        if (buffer[0] != '\0')
            strncpy(emails[index], buffer, EMAIL_LENGTH - 1), emails[index][EMAIL_LENGTH - 1] = '\0';
    }

    printf("Contact updated successfully.\n");
}

void delete_contact(char names[][NAME_LENGTH], char phones[][PHONE_LENGTH], char emails[][EMAIL_LENGTH], int *count)
{
    if (*count == 0)
    {
        printf("No contacts available.\n");
        return;
    }

    char query[NAME_LENGTH];
    printf("Enter name or phone of the contact to delete: ");
    if (fgets(query, NAME_LENGTH, stdin) == NULL)
    {
        printf("Failed to read query.\n");
        return;
    }
    query[strcspn(query, "\n")] = '\0';

    int index = find_contact(names, phones, *count, query);
    if (index < 0)
    {
        printf("Contact not found.\n");
        return;
    }

    printf("Deleting contact %s.\n", names[index]);
    for (int i = index; i < *count - 1; i++)
    {
        strcpy(names[i], names[i + 1]);
        strcpy(phones[i], phones[i + 1]);
        strcpy(emails[i], emails[i + 1]);
    }
    (*count)--;
    printf("Contact deleted successfully.\n");
}

int main(void)
{
    char names[MAX_CONTACTS][NAME_LENGTH];
    char phones[MAX_CONTACTS][PHONE_LENGTH];
    char emails[MAX_CONTACTS][EMAIL_LENGTH];
    int count = 0;
    int choice;

    while (1)
    {
        printf("\nContact Management System\n");
        printf("1. Add Contact\n");
        printf("2. View Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Update Contact\n");
        printf("5. Delete Contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }

        clear_input_buffer();
        switch (choice)
        {
            case 1:
                add_contact(names, phones, emails, &count);
                break;
            case 2:
                view_contacts(names, phones, emails, count);
                break;
            case 3:
                search_contact(names, phones, emails, count);
                break;
            case 4:
                update_contact(names, phones, emails, count);
                break;
            case 5:
                delete_contact(names, phones, emails, &count);
                break;
            case 6:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
