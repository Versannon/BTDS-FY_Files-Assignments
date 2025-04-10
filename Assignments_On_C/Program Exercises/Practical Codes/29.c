#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;
    char filename[20];

    printf("Enter the filename: ");
    scanf("%s", filename);

    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }

    printf("Enter the text (press Ctrl+z to end input): ");
    getchar(); // To consume the newline character left by scanf
    while ((ch = getchar()) != EOF) {
        putc(ch, fp);
    }
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("\nFile contents:\n");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("\nEnter additional text to append (press Ctrl+z to end input): ");
    getchar(); // To consume the newline character left by previous input
    while ((ch = getchar()) != EOF) {
        putc(ch, fp);
    }
    fclose(fp);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error in opening file\n");
        exit(1);
    }
    printf("\nUpdated file contents:\n");
    while ((ch = getc(fp)) != EOF) {
        putchar(ch);
    }
    fclose(fp);

    return 0;
}

/*
Explanation of the program:
- The program creates a text file, writes some user-inputted data into it, displays the contents, and appends additional text to the existing file without overwriting it.
- It includes the following steps:
  - Prompts the user to enter the filename.
  - Opens the file in write mode using `fopen`.
  - Checks if the file was opened successfully.
  - Prompts the user to enter text to write to the file.
  - Reads the text from the user until EOF (Ctrl+D) and writes it to the file using `putc`.
  - Closes the file using `fclose`.
  - Opens the file in read mode using `fopen`.
  - Checks if the file was opened successfully.
  - Reads and displays the contents of the file character by character using `getc` and `putchar`.
  - Closes the file using `fclose`.
  - Opens the file in append mode using `fopen`.
  - Checks if the file was opened successfully.
  - Prompts the user to enter additional text to append to the file.
  - Reads the additional text from the user until EOF (Ctrl+D) and appends it to the file using `putc`.
  - Closes the file using `fclose`.
  - Opens the file in read mode again using `fopen`.
  - Checks if the file was opened successfully.
  - Reads and displays the updated contents of the file character by character using `getc` and `putchar`.
  - Closes the file using `fclose`.
  - Returns 0 to indicate that the program executed successfully.
*/