#include <stdio.h>

#define MAX_EMPLOYEES 10

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Input details for each employee
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Enter employee ID: ");
        scanf("%d", &employees[i].id);
        printf("Enter employee name: ");
        scanf(" %[^\n]", employees[i].name); // To read string with spaces
        printf("Enter employee salary: ");
        scanf("%f", &employees[i].salary);
    }

    // Display the employee details
    printf("\nDisplaying employee details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee ID: %d\n", employees[i].id);
        printf("Employee Name: %s\n", employees[i].name);
        printf("Employee Salary: %.2f\n", employees[i].salary);
    }

    return 0;
}

/*
Explanation of the program:
- The program manages and tracks employee information for a company using structures.
- It includes the following steps:
  - Defines a structure named 'Employee' with three members: id, name, and salary.
  - Declares an array of structures to store multiple employee records.
  - Prompts the user to enter the number of employees.
  - Reads the number of employees from the user.
  - Uses a for loop to input details for each employee:
    - Prompts the user to enter the employee's ID, name, and salary.
    - Uses scanf to read the ID and salary, and scanf with a format specifier to read the name with spaces.
  - Uses another for loop to display the employee details:
    - Prints the employee's ID, name, and salary.
  - Returns 0 to indicate that the program executed successfully.
*/