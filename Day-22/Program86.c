#include <stdio.h>

int main()
{
    char sentence[200];
    int i, words = 0;

    printf("Enter a sentence: ");
    gets(sentence);

    for (i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ' && sentence[i + 1] != ' ' && sentence[i + 1] != '\0')
        {
            words++;
        }
    }

    if (sentence[0] != '\0')
    {
        words++;
    }

    printf("Number of words: %d\n", words);
    return 0;
}
