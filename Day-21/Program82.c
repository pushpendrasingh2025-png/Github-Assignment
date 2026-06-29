#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    int i, j, length;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for (i = length - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }
    rev[j] = '\0';

    printf("Reversed string: %s\n", rev);
    return 0;
}
