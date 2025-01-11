#include<stdio.h>
#include<string.h>

struct employee {
    char name[50];
    int id;
    float salary;
    char email[50];
};

void addEmployee(FILE *fptr) {
    struct employee emp;
    printf("Enter Employee Name : ");
    scanf(" %[^\n]", emp.name);
    printf("Enter Employee ID : ");
    scanf("%d", &emp.id);
    printf("Enter Employee Salary : ");
    scanf("%f", &emp.salary);
    printf("Enter Employee Email : ");
    scanf("%s", emp.email);
    fprintf(fptr, "%s %d %.2f %s\n", emp.name, emp.id, emp.salary, emp.email);
}

void displayEmployee(FILE *fptr, int id) {
    struct employee emp;
    rewind(fptr);
    while (fscanf(fptr, "%s %d %f %s", emp.name, &emp.id, &emp.salary, emp.email) != EOF) {
        if (emp.id == id) {
            printf("\nEmployee Details\nName: %s\nID: %d\nSalary: %.2f\nEmail: %s\n", emp.name, emp.id, emp.salary, emp.email);
            return;
        }
    }
    printf("Employee with ID %d not found.\n", id);
}

int main() {
    FILE *fptr = fopen("employee_data.txt", "a+");
    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    char choice;
    int id;

    printf("Add a new employee? (Y/N): ");
    scanf(" %c", &choice);
    if (choice == 'Y' || choice == 'y') {
        addEmployee(fptr);
    }

    printf("Display an employee's information? (Y/N): ");
    scanf(" %c", &choice);
    if (choice == 'Y' || choice == 'y') {
        printf("Enter Employee ID: ");
        scanf("%d", &id);
        displayEmployee(fptr, id);
    }

    fclose(fptr);
    return 0;
}