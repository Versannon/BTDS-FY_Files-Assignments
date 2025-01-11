#include <stdio.h>
#include <stdlib.h>

void createAndWriteFile(char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    char line[256];
    printf("Enter text (enter a blank line to stop):\n");
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (line[0] == '\n') break; // Stop if a blank line is entered
        fputs(line, file);
    }

    fclose(file);
}

void readFile(char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    char line[256];
    printf("Contents of the file:\n");
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
}

void appendToFile(char *filename) {
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        exit(1);
    }

    char line[256];
    printf("Enter text to append (enter a blank line to stop):\n");
    while (1) {
        fgets(line, sizeof(line), stdin);
        if (line[0] == '\n') break; // Stop if a blank line is entered
        fputs(line, file);
    }

    fclose(file);
}

int main() {
    char filename[100];

    // Prompt the user to enter the file name
    printf("Enter the file name: ");
    scanf("%s", filename);
    getchar(); // Clear the newline character left by scanf

    // Create and write to the file
    createAndWriteFile(filename);

    // Read and display the contents of the file
    readFile(filename);

    // Append additional text to the file
    appendToFile(filename);

    // Read and display the contents of the file again
    readFile(filename);

    return 0;
}