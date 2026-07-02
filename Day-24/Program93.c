#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    int len1, len2;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("No, the second string is not a rotation of the first string.\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        printf("Yes, the second string is a rotation of the first string.\n");
    } else {
        printf("No, the second string is not a rotation of the first string.\n");
    }

    return 0;
}
