#include <stdio.h>
#include <string.h>
#include <ctype.h>

void showAddress(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        printf("Character: %c, Address: %p\n", str[i], &str[i]);
    }
}

void concatenateWithoutStrcat(char *str1, char *str2, char *result) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        result[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        result[i] = str2[j];
        i++;
        j++;
    }
    result[i] = '\0';
}

void compareStrings(char *str1, char *str2) {
    int res = strcmp(str1, str2);
    if (res == 0)
        printf("Strings are equal.\n");
    else if (res > 0)
        printf("String 1 is greater than String 2.\n");
    else
        printf("String 2 is greater than String 1.\n");
}

void calculateLength(char *str) {
    char *ptr = str;
    int length = 0;
    while (*ptr != '\0') {
        length++;
        ptr++;
    }
    printf("Length of the string: %d\n", length);
}

void toUppercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Uppercase: %s\n", str);
}

void toLowercase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lowercase: %s\n", str);
}

void countVowels(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
            str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
            count++;
        }
    }
    printf("Number of vowels: %d\n", count);
}

void reverseString(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}

int main() {
    char str1[100], str2[100], result[200];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Show address of each character in string\n");
        printf("2. Concatenate two strings without using strcat function\n");
        printf("3. Concatenate two strings using strcat function\n");
        printf("4. Compare two strings\n");
        printf("5. Calculate length of the string (use pointers)\n");
        printf("6. Convert all lowercase characters to uppercase\n");
        printf("7. Convert all uppercase characters to lowercase\n");
        printf("8. Calculate number of vowels\n");
        printf("9. Reverse the string\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a string: ");
                scanf("%s", str1);
                showAddress(str1);
                break;
            case 2:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                concatenateWithoutStrcat(str1, str2, result);
                printf("Concatenated string: %s\n", result);
                break;
            case 3:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                strcat(str1, str2);
                printf("Concatenated string using strcat: %s\n", str1);
                break;
            case 4:
                printf("Enter first string: ");
                scanf("%s", str1);
                printf("Enter second string: ");
                scanf("%s", str2);
                compareStrings(str1, str2);
                break;
            case 5:
                printf("Enter a string: ");
                scanf("%s", str1);
                calculateLength(str1);
                break;
            case 6:
                printf("Enter a string: ");
                scanf("%s", str1);
                toUppercase(str1);
                break;
            case 7:
                printf("Enter a string: ");
                scanf("%s", str1);
                toLowercase(str1);
                break;
            case 8:
                printf("Enter a string: ");
                scanf("%s", str1);
                countVowels(str1);
                break;
            case 9:
                printf("Enter a string: ");
                scanf("%s", str1);
                reverseString(str1);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice, try again.\n");
        }
    } while (choice != 0);

    return 0;
}
