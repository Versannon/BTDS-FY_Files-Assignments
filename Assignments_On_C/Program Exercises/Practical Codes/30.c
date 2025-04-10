#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float marks;
};

void write_records(const char *filename, struct Student *students, int n) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
}

void append_record(const char *filename, struct Student student) {
    FILE *file = fopen(filename, "ab");
    if (file == NULL) {
        printf("Error opening file for appending.\n");
        exit(1);
    }
    fwrite(&student, sizeof(struct Student), 1, file);
    fclose(file);
}

void read_records(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    struct Student student;
    printf("\nStudent Records:\n");
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("ID: %d, Name: %s, Marks: %.2f\n", student.id, student.name, student.marks);
    }
    fclose(file);
}

int main() {
    const char *filename = "students.dat";
    int n;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Grade: ");
        scanf("%f", &students[i].marks);
    }

    write_records(filename, students, n);
    read_records(filename);

    struct Student new_student;
    printf("Enter new student record:\n");
    printf("ID: ");
    scanf("%d", &new_student.id);
    printf("Name: ");
    scanf(" %[^\n]", new_student.name);
    printf("Grade: ");
    scanf("%f", &new_student.marks);

    append_record(filename, new_student);
    read_records(filename);

    return 0;
}

/*
Explanation of the program:
- The program creates a binary file, writes an array of structures (student records) to the file, reads the contents of the binary file and displays them on the console, appends a new record to the binary file, and displays all records again.
- It includes the following steps:
  - Defines a structure named 'Student' with three members: id, name, and grade.
  - Defines a function `write_records` to write an array of student records to a binary file:
    - Opens the file in write binary mode using `fopen`.
    - Checks if the file was opened successfully.
    - Writes the array of student records to the file using `fwrite`.
    - Closes the file using `fclose`.
  - Defines a function `append_record` to append a new student record to the binary file:
    - Opens the file in append binary mode using `fopen`.
    - Checks if the file was opened successfully.
    - Writes the new student record to the file using `fwrite`.
    - Closes the file using `fclose`.
  - Defines a function `read_records` to read and display the contents of the binary file:
    - Opens the file in read binary mode using `fopen`.
    - Checks if the file was opened successfully.
    - Reads and displays the student records from the file using `fread` and `printf`.
    - Closes the file using `fclose`.
  - In the `main` function:
    - Prompts the user to enter the number of students.
    - Reads the number of students from the user.
    - Uses a for loop to input details for each student.
    - Calls `write_records` to write the student records to the binary file.
    - Calls `read_records` to display the contents of the binary file.
    - Prompts the user to enter details for a new student to append.
    - Calls `append_record` to append the new student record to the binary file.
    - Calls `read_records` again to display the updated contents of the binary file.
  - Returns 0 to indicate that the program executed successfully.
*/