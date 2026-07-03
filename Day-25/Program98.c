#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, found = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters are: ");

    for(i = 0; str1[i] != '\0'; i++)
    {
        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                printf("%c ", str1[i]);
                found = 1;
                break;
            }
        }
    }

    if(found == 0)
        printf("No common characters");

    return 0;
}