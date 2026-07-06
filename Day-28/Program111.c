#include <stdio.h>
#include <string.h>

#define MAX_TICKETS 100
#define NAME_LENGTH 50

void clear_input_buffer(void)
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF)
        ;
}

int ticket_exists(int ticket_id[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (ticket_id[i] == id)
            return 1;
    }
    return 0;
}

int seat_exists(int seat[], int count, int seat_no)
{
    for (int i = 0; i < count; i++)
    {
        if (seat[i] == seat_no)
            return 1;
    }
    return 0;
}

int main(void)
{
    int choice;
    int count = 0;
    int ticket_id[MAX_TICKETS];
    int seat[MAX_TICKETS];
    char passenger[MAX_TICKETS][NAME_LENGTH];
    int search_id;

    while (1)
    {
        printf("\nTicket Booking System\n");
        printf("1. Book Ticket\n");
        printf("2. View Tickets\n");
        printf("3. Search Ticket\n");
        printf("4. Cancel Ticket\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid input. Please enter a number.\n");
            clear_input_buffer();
            continue;
        }

        switch (choice)
        {
            case 1:
                if (count >= MAX_TICKETS)
                {
                    printf("Booking limit reached.\n");
                    break;
                }

                printf("Enter Ticket ID: ");
                if (scanf("%d", &search_id) != 1)
                {
                    printf("Invalid ticket ID.\n");
                    clear_input_buffer();
                    break;
                }

                if (ticket_exists(ticket_id, count, search_id))
                {
                    printf("Ticket ID already exists. Please choose a different ID.\n");
                    break;
                }

                printf("Enter Seat Number: ");
                if (scanf("%d", &seat[count]) != 1)
                {
                    printf("Invalid seat number.\n");
                    clear_input_buffer();
                    break;
                }

                if (seat[count] <= 0)
                {
                    printf("Seat number must be positive.\n");
                    break;
                }

                if (seat_exists(seat, count, seat[count]))
                {
                    printf("Seat number already booked. Choose another seat.\n");
                    break;
                }

                clear_input_buffer();
                printf("Enter Passenger Name: ");
                if (fgets(passenger[count], NAME_LENGTH, stdin) == NULL)
                {
                    printf("Unable to read passenger name.\n");
                    break;
                }

                passenger[count][strcspn(passenger[count], "\n")] = '\0';
                if (passenger[count][0] == '\0')
                {
                    printf("Passenger name cannot be empty.\n");
                    break;
                }

                ticket_id[count] = search_id;
                count++;
                printf("Ticket booked successfully!\n");
                break;

            case 2:
                if (count == 0)
                {
                    printf("No tickets booked.\n");
                }
                else
                {
                    printf("\nBooked Tickets:\n");
                    for (int i = 0; i < count; i++)
                    {
                        printf("Ticket ID: %d | Passenger: %s | Seat: %d\n",
                               ticket_id[i], passenger[i], seat[i]);
                    }
                }
                break;

            case 3:
                if (count == 0)
                {
                    printf("No tickets booked yet.\n");
                    break;
                }

                printf("Enter Ticket ID to search: ");
                if (scanf("%d", &search_id) != 1)
                {
                    printf("Invalid ticket ID.\n");
                    clear_input_buffer();
                    break;
                }

                {
                    int found = 0;
                    for (int i = 0; i < count; i++)
                    {
                        if (ticket_id[i] == search_id)
                        {
                            printf("Ticket found: Passenger: %s | Seat: %d\n",
                                   passenger[i], seat[i]);
                            found = 1;
                            break;
                        }
                    }
                    if (!found)
                        printf("Ticket not found.\n");
                }
                break;

            case 4:
                if (count == 0)
                {
                    printf("No tickets to cancel.\n");
                    break;
                }

                printf("Enter Ticket ID to cancel: ");
                if (scanf("%d", &search_id) != 1)
                {
                    printf("Invalid ticket ID.\n");
                    clear_input_buffer();
                    break;
                }

                {
                    int found = 0;
                    for (int i = 0; i < count; i++)
                    {
                        if (ticket_id[i] == search_id)
                        {
                            printf("Ticket cancelled for %s.\n", passenger[i]);
                            for (int j = i; j < count - 1; j++)
                            {
                                ticket_id[j] = ticket_id[j + 1];
                                seat[j] = seat[j + 1];
                                strcpy(passenger[j], passenger[j + 1]);
                            }
                            count--;
                            found = 1;
                            break;
                        }
                    }
                    if (!found)
                        printf("Ticket not found.\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
