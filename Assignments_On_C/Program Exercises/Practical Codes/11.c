#include <stdio.h>
#include <stdlib.h>

void writeFile(const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    char data[100];
    printf("Enter data to write to the file: ");
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);
    fclose(file);
}

void appendToFile(const char *filename) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        exit(1);
    }

    char data[100];
    printf("Enter data to append to the file: ");
    fgets(data, sizeof(data), stdin);

    fprintf(file, "%s", data);
    fclose(file);
}

void readFile(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    char ch;
    printf("\nFile contents:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
}

int main() {
    const char *filename = "example.txt";

    writeFile(filename);
    readFile(filename);

    appendToFile(filename);
    readFile(filename);

    return 0;
}

/*
Explanation of the program:
- The program creates a text file, writes some user-inputted data into it, displays the contents, and appends additional text to the existing file without overwriting it.
- It includes the following steps:
  - Defines a function `writeFile` to write data to a file:
    - Opens the file in write mode using `fopen`.
    - Checks if the file was opened successfully.
    - Prompts the user to enter data to write to the file.
    - Writes the data to the file using `fprintf`.
    - Closes the file using `fclose`.
  - Defines a function `appendToFile` to append data to a file:
    - Opens the file in append mode using `fopen`.
    - Checks if the file was opened successfully.
    - Prompts the user to enter data to append to the file.
    - Appends the data to the file using `fprintf`.
    - Closes the file using `fclose`.
  - Defines a function `readFile` to read and display the contents of a file:
    - Opens the file in read mode using `fopen`.
    - Checks if the file was opened successfully.
    - Reads and displays the contents of the file character by character using `fgetc` and `putchar`.
    - Closes the file using `fclose`.
  - In the `main` function:
    - Calls `writeFile` to write data to the file.
    - Calls `readFile` to display the contents of the file.
    - Calls `appendToFile` to append data to the file.
    - Calls `readFile` again to display the updated contents of the file.
  - Returns 0 to indicate that the program executed successfully.
*/