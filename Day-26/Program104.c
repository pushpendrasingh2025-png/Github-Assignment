#include <stdio.h>

int main()
{
    int score = 0, answer;

    printf("\n==================================");
    printf("\n       QUIZ APPLICATION");
    printf("\n==================================\n");

    // Question 1
    printf("\n1. What is the capital of India?\n");
    printf("1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is Delhi.\n");
    }

    // Question 2
    printf("\n2. Which language is used for system programming?\n");
    printf("1. C\n2. HTML\n3. CSS\n4. SQL\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 1)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is C.\n");
    }

    // Question 3
    printf("\n3. How many bits are there in a byte?\n");
    printf("1. 4\n2. 16\n3. 8\n4. 32\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is 8.\n");
    }

    // Question 4
    printf("\n4. Which symbol is used to end a statement in C?\n");
    printf("1. :\n2. ;\n3. .\n4. ,\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 2)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is ;\n");
    }

    // Question 5
    printf("\n5. Which loop executes at least once?\n");
    printf("1. for\n2. while\n3. do-while\n4. None\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if(answer == 3)
    {
        printf("Correct!\n");
        score++;
    }
    else
    {
        printf("Wrong! Correct answer is do-while.\n");
    }

    // Result
    printf("\n==================================");
    printf("\n          QUIZ RESULT");
    printf("\n==================================");
    printf("\nYour Score = %d/5\n", score);

    if(score == 5)
        printf("Excellent! You got all answers correct.\n");
    else if(score >= 3)
        printf("Good Job! Keep practicing.\n");
    else
        printf("Better Luck Next Time!\n");

    return 0;
}