/* Write a C program that uses functions to perform the following operations:
   a-To insert a sub-string into a given main string from a given position.
   b-To delete n characters from a given position in a given string.
   Add comments to explain the code */
#include <stdio.h>
#include <string.h>

// Function to insert a sub-string into a given main string from a given position
char* insertSubstring(char mainStr[], char subStr[], int position) {
    static char result[200]; // Resultant string after insertion
    int i, j = 0;

    // Copy characters from mainStr up to the position
    for (i = 0; i < position; i++) {
        result[i] = mainStr[i];
    }

    // Copy characters from subStr
    while (subStr[j] != '\0') {
        result[i++] = subStr[j++];
    }

    // Copy the remaining characters from mainStr
    while (mainStr[position] != '\0') {
        result[i++] = mainStr[position++];
    }

    result[i] = '\0'; // Null-terminate the resultant string

    return result; // Return the resultant string
}

// Function to delete n characters from a given position in a given string
char* deleteCharacters(char str[], int position, int n) {
    static char result[200]; // Resultant string after deletion
    int len = strlen(str);
    int i, j = 0;

    // Copy characters up to the position
    for (i = 0; i < position; i++) {
        result[j++] = str[i];
    }

    // Skip n characters from the position
    for (i = position + n; i < len; i++) {
        result[j++] = str[i];
    }

    result[j] = '\0'; // Null-terminate the resultant string

    return result; // Return the resultant string
}

int main() {
    char mainStr[200], subStr[100];
    int position, n;

    // Prompt the user to enter the main string
    printf("Enter the main string: ");
    gets(mainStr);

    // Prompt the user to enter the sub-string
    printf("Enter the sub-string to insert: ");
    gets(subStr);

    // Prompt the user to enter the position to insert the sub-string
    printf("Enter the position to insert the sub-string: ");
    scanf("%d", &position);

    // Insert the sub-string into the main string
    strcpy(mainStr, insertSubstring(mainStr, subStr, position));

    // Print the resultant string after insertion
    printf("String after insertion: %s\n", mainStr);

    // Prompt the user to enter the position to delete characters
    printf("Enter the position to delete characters: ");
    scanf("%d", &position);

    // Prompt the user to enter the number of characters to delete
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    // Delete n characters from the given position in the main string
    strcpy(mainStr, deleteCharacters(mainStr, position, n));

    // Print the resultant string after deletion
    printf("String after deletion: %s\n", mainStr);

    return 0;
}