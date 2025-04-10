#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

void write_records(const char *filename, struct Employee *employees, int n) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }
    fwrite(employees, sizeof(struct Employee), n, file);
    fclose(file);
}

void read_records(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    struct Employee employee;
    printf("\nEmployee Records:\n");
    while (fread(&employee, sizeof(struct Employee), 1, file)) {
        printf("ID: %d, Name: %s, Salary: %.2f\n", employee.id, employee.name, employee.salary);
    }
    fclose(file);
}

void update_salary(const char *filename, int record_num, float new_salary) {
    FILE *file = fopen(filename, "rb+");
    if (file == NULL) {
        printf("Error opening file for updating.\n");
        exit(1);
    }

    struct Employee employee;
    fseek(file, (record_num - 1) * sizeof(struct Employee), SEEK_SET);
    fread(&employee, sizeof(struct Employee), 1, file);
    employee.salary = new_salary;
    fseek(file, (record_num - 1) * sizeof(struct Employee), SEEK_SET);
    fwrite(&employee, sizeof(struct Employee), 1, file);
    fclose(file);
}

int main() {
    const char *filename = "employees.dat";
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &employees[i].id);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
    }

    write_records(filename, employees, n);
    read_records(filename);

    int record_num;
    float new_salary;
    printf("\nEnter the record number to update salary: ");
    scanf("%d", &record_num);
    printf("Enter the new salary: ");
    scanf("%f", &new_salary);

    update_salary(filename, record_num, new_salary);
    read_records(filename);

    return 0;
}

/*
Explanation of the program:
- The program demonstrates the use of `fseek`, `ftell`, and `rewind` to access specific records in a binary file and modify a specific record without rewriting the entire file.
- It includes the following steps:
  - Defines a structure named 'Employee' with three members: id, name, and salary.
  - Defines a function `write_records` to write an array of employee records to a binary file:
    - Opens the file in write binary mode using `fopen`.
    - Checks if the file was opened successfully.
    - Writes the array of employee records to the file using `fwrite`.
    - Closes the file using `fclose`.
  - Defines a function `read_records` to read and display the contents of the binary file:
    - Opens the file in read binary mode using `fopen`.
    - Checks if the file was opened successfully.
    - Reads and displays the employee records from the file using `fread` and `printf`.
    - Closes the file using `fclose`.
  - Defines a function `update_salary` to update the salary of a specific employee record in the binary file:
    - Opens the file in read-write binary mode using `fopen`.
    - Checks if the file was opened successfully.
    - Uses `fseek` to move the file pointer to the specific record.
    - Reads the employee record using `fread`.
    - Updates the salary of the employee record.
    - Uses `fseek` to move the file pointer back to the specific record.
    - Writes the updated employee record to the file using `fwrite`.
    - Closes the file using `fclose`.
  - In the `main` function:
    - Prompts the user to enter the number of employees.
    - Reads the number of employees from the user.
    - Uses a for loop to input details for each employee.
    - Calls `write_records` to write the employee records to the binary file.
    - Calls `read_records` to display the contents of the binary file.
    - Prompts the user to enter the record number and new salary to update.
    - Calls `update_salary` to update the salary of the specific employee record in the binary file.
    - Calls `read_records` again to display the updated contents of the binary file.
  - Returns 0 to indicate that the program executed successfully.
*/