#include <stdio.h>
#include <string.h>
#include <ctype.h>

void displayMenu() {
    printf("\n========== STRING OPERATION MENU ==========\n");
    printf("1. Display String\n");
    printf("2. String Length\n");
    printf("3. Reverse String\n");
    printf("4. Check Palindrome\n");
    printf("5. Convert to Uppercase\n");
    printf("6. Convert to Lowercase\n");
    printf("7. Concatenate Strings\n");
    printf("8. Compare Strings\n");
    printf("9. Find Substring\n");
    printf("10. Count Vowels\n");
    printf("11. Count Consonants\n");
    printf("12. Remove Spaces\n");
    printf("13. String Copy\n");
    printf("14. Exit\n");
    printf("===========================================\n");
    printf("Enter your choice (1-14): ");
}

void displayString(char str[]) {
    printf("String: %s\n", str);
}

void stringLength(char str[]) {
    printf("Length of string: %d\n", strlen(str));
}

void reverseString(char str[]) {
    char reversed[100];
    int len = strlen(str);
    
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - 1 - i];
    }
    reversed[len] = '\0';
    
    printf("Reversed string: %s\n", reversed);
}

void checkPalindrome(char str[]) {
    int len = strlen(str);
    int isPalindrome = 1;
    
    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - 1 - i])) {
            isPalindrome = 0;
            break;
        }
    }
    
    if (isPalindrome)
        printf("String is a Palindrome!\n");
    else
        printf("String is NOT a Palindrome!\n");
}

void convertToUppercase(char str[]) {
    printf("Uppercase: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", toupper(str[i]));
    }
    printf("\n");
}

void convertToLowercase(char str[]) {
    printf("Lowercase: ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c", tolower(str[i]));
    }
    printf("\n");
}

void concatenateStrings(char str1[]) {
    char str2[100];
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);
}

void compareStrings(char str1[]) {
    char str2[100];
    printf("Enter second string to compare: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("Strings are EQUAL\n");
    else if (result < 0)
        printf("First string comes BEFORE second string\n");
    else
        printf("First string comes AFTER second string\n");
}

void findSubstring(char str[]) {
    char sub[100];
    printf("Enter substring to find: ");
    fgets(sub, sizeof(sub), stdin);
    sub[strcspn(sub, "\n")] = '\0';
    
    char *pos = strstr(str, sub);
    if (pos != NULL)
        printf("Substring found at position: %ld\n", pos - str);
    else
        printf("Substring NOT found!\n");
}

void countVowels(char str[]) {
    int vowelCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowelCount++;
    }
    printf("Number of vowels: %d\n", vowelCount);
}

void countConsonants(char str[]) {
    int consonantCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = tolower(str[i]);
        if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            consonantCount++;
    }
    printf("Number of consonants: %d\n", consonantCount);
}

void removeSpaces(char str[]) {
    char result[100];
    int j = 0;
    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j++] = str[i];
        }
    }
    result[j] = '\0';
    
    printf("String without spaces: %s\n", result);
}

void stringCopy(char str[]) {
    char copied[100];
    strcpy(copied, str);
    printf("Copied string: %s\n", copied);
}

int main() {
    char str[100];
    int choice;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    while (1) {
        displayMenu();
        scanf("%d", &choice);
        getchar();  // Clear the newline from input buffer
        
        switch (choice) {
            case 1:
                displayString(str);
                break;
            case 2:
                stringLength(str);
                break;
            case 3:
                reverseString(str);
                break;
            case 4:
                checkPalindrome(str);
                break;
            case 5:
                convertToUppercase(str);
                break;
            case 6:
                convertToLowercase(str);
                break;
            case 7:
                concatenateStrings(str);
                break;
            case 8:
                compareStrings(str);
                break;
            case 9:
                findSubstring(str);
                break;
            case 10:
                countVowels(str);
                break;
            case 11:
                countConsonants(str);
                break;
            case 12:
                removeSpaces(str);
                break;
            case 13:
                stringCopy(str);
                break;
            case 14:
                printf("Exiting program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice! Please enter a valid option (1-14).\n");
        }
    }
    
    return 0;
}
