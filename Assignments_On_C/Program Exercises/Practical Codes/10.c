#include <stdio.h>
#include <string.h>

void insertSubstring(char mainStr[], char subStr[], int position, char result[]) {
    int i, j = 0;

    if (position > strlen(mainStr)) {
        printf("Position is out of bounds.\n");
        strcpy(result, mainStr);
        return;
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
}

void deleteCharacters(char str[], int position, int n, char result[]) {
    int i, j = 0;

    if (position + n > strlen(str)) {
        printf("Position and number of characters to delete are out of bounds.\n");
        strcpy(result, str);
        return;
    }

    for (i = 0; i < position; i++) {
        result[j++] = str[i];
    }

    i += n;

    while (str[i] != '\0') {
        result[j++] = str[i++];
    }

    result[j] = '\0';
}

int main() {
    char mainStr[100], subStr[50], result[200];
    int position, n;

    printf("Enter the main string: ");
    gets(mainStr);
    printf("Enter the sub-string to insert: ");
    gets(subStr);
    printf("Enter the position to insert the sub-string: ");
    scanf("%d", &position);

    insertSubstring(mainStr, subStr, position, result);
    printf("Resultant string after insertion: %s\n", result);

    printf("Enter the position to delete characters: ");
    scanf("%d", &position);
    printf("Enter the number of characters to delete: ");
    scanf("%d", &n);

    deleteCharacters(mainStr, position, n, result);
    printf("Resultant string after deletion: %s\n", result);

    return 0;
}

/*
Explanation of the program:
- The program performs two operations on strings using void functions:
  a. Inserts a sub-string into a given main string from a given position.
  b. Deletes n characters from a given position in a given string.
- It includes the following steps:
  - Defines a function `insertSubstring` to insert a sub-string into a main string:
    - Takes the main string, sub-string, position, and a result array as arguments.
    - Checks if the position is out of bounds.
    - Uses a for loop to copy characters from the main string up to the insertion position.
    - Uses a while loop to copy characters from the sub-string.
    - Uses a while loop to copy the remaining characters from the main string.
    - Null-terminates the resultant string.
  - Defines a function `deleteCharacters` to delete n characters from a given position in a string:
    - Takes the string, position, number of characters to delete, and a result array as arguments.
    - Checks if the position and number of characters to delete are out of bounds.
    - Uses a for loop to copy characters from the string up to the deletion position.
    - Skips n characters from the position.
    - Uses a while loop to copy the remaining characters from the string.
    - Null-terminates the resultant string.
  - In the `main` function:
    - Prompts the user to enter the main string, sub-string, and the position to insert the sub-string.
    - Calls `insertSubstring` to insert the sub-string and prints the resultant string.
    - Prompts the user to enter the position and number of characters to delete.
    - Calls `deleteCharacters` to delete the characters and prints the resultant string.
  - Returns 0 to indicate that the program executed successfully.
- Functions used:
  - `printf`: Used to print messages to the console.
  - `scanf`: Used to read input from the user.
  - `gets`: Used to read a string from the user.
  - `strlen`: Used to get the length of a string.
  - `strcpy`: Used to copy a string.
- Loops used:
  - For loop: Used to copy characters from the main string up to the insertion position and to copy characters from the string up to the deletion position.
  - While loop: Used to copy characters from the sub-string, to copy the remaining characters from the main string, and to copy the remaining characters from the string.
*/