#include <stdio.h>
#include <string.h>

char* insertSubstring(char mainStr[], char subStr[], int position) {
    static char result[200];
    int i, j = 0;

    if (position > strlen(mainStr)) {
        printf("Position is out of bounds.\n");
        return mainStr;
    }

    for (i = 0; i < position; i++) {
        result[i] = mainStr[i];
    }

    while (subStr[j] != '\0') {
        result[i++] = subStr[j++];
    }

    while (mainStr[position] != '\0') {
        result[i++] = mainStr[position++];
    }

    result[i] = '\0';
    return result;
}

char* deleteCharacters(char str[], int position, int n) {
    static char result[200];
    int i, j = 0;

    if (position + n > strlen(str)) {
        printf("Position and number of characters to delete are out of bounds.\n");
        return str;
    }

    for (i = 0; i < position; i++) {
        result[j++] = str[i];
    }

    i += n;

    while (str[i] != '\0') {
        result[j++] = str[i++];
    }

    result[j] = '\0';
    return result;
}

int main() {
    char mainStr[100], subStr[50];
    int position, n;

    printf("Enter the main string: ");
    gets(mainStr);
    printf("Enter the sub-string to insert: ");
    gets(subStr);
    printf("Enter the position to insert the sub-string: ");
    scanf("%d", &position);

    printf("Resultant string after insertion: %s\n", insertSubstring(mainStr, subStr, position));

    printf("Enter the position to delete characters: ");
    scanf("%d", &position);
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    printf("Resultant string after deletion: %s\n", deleteCharacters(mainStr, position, n));

    return 0;
}

/*
Explanation of the program:
- The program performs two operations on strings using functions:
  a. Inserts a sub-string into a given main string from a given position.
  b. Deletes n characters from a given position in a given string.
- It includes the following steps:
  - Defines a function `insertSubstring` to insert a sub-string into a main string:
    - Declares a static resultant string to store the result after insertion.
    - Checks if the position is out of bounds.
    - Copies characters from the main string up to the insertion position.
    - Copies characters from the sub-string.
    - Copies the remaining characters from the main string.
    - Null-terminates the resultant string and returns it.
  - Defines a function `deleteCharacters` to delete n characters from a given position in a string:
    - Declares a static resultant string to store the result after deletion.
    - Checks if the position and number of characters to delete are out of bounds.
    - Copies characters from the string up to the deletion position.
    - Skips n characters from the position.
    - Copies the remaining characters from the string.
    - Null-terminates the resultant string and returns it.
  - In the `main` function:
    - Prompts the user to enter the main string, sub-string, and the position to insert the sub-string.
    - Calls `insertSubstring` to insert the sub-string and prints the resultant string.
    - Prompts the user to enter the position and number of characters to delete.
    - Calls `deleteCharacters` to delete the characters and prints the resultant string.
  - Returns 0 to indicate that the program executed successfully.
*/