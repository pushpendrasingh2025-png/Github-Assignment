#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int secretNumber;
    int guess;
    int attempts = 0;

    /* Seed the random number generator using current time */
    srand((unsigned int)time(NULL));
    secretNumber = rand() % 10 + 1; /* Random number from 1 to 10 */

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 10.\n");
    printf("Try to guess it.\n\n");

    do {
        printf("Enter your guess: ");
        if (scanf("%d", &guess) != 1) {
            /* Handle invalid input */
            printf("Please enter a valid integer.\n");
            /* Clear invalid input from stdin */
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            continue;
        }

        attempts++;

        if (guess < secretNumber) {
            printf("Too low. Try again.\n\n");
        } else if (guess > secretNumber) {
            printf("Too high. Try again.\n\n");
        } else {
            printf("Congratulations! You guessed the number %d in %d attempt%s.\n",
                   secretNumber, attempts, attempts == 1 ? "" : "s");
        }
    } while (guess != secretNumber);

    return 0;
}
