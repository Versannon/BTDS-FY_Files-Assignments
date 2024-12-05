#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 50
#define MAX_GMAIL_LENGTH 50
#define MAX_PHONE_LENGTH 15

// Define a structure to hold employee information
struct Employee {
    char name[MAX_NAME_LENGTH];
    char gmail[MAX_GMAIL_LENGTH];
    char phone[MAX_PHONE_LENGTH];
    int yearsOfExperience;
};

// Function to save employee details to a file
void saveEmployee(struct Employee emp) {
    FILE *file = fopen("employees.txt", "a"); // Open file in append mode
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }
    fprintf(file, "%s,%s,%s,%d\n", emp.name, emp.gmail, emp.phone, emp.yearsOfExperience);
    fclose(file);
}

// Function to search for an employee by name
void searchEmployee(char *searchName) {
    FILE *file = fopen("employees.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char line[200];
    int found = 0;

    while (fgets(line, sizeof(line), file)) {
        struct Employee emp;
        sscanf(line, "%[^,],%[^,],%[^,],%d", emp.name, emp.gmail, emp.phone, &emp.yearsOfExperience);
        
        if (strcmp(emp.name, searchName) == 0) {
            printf("Employee Details:\n");
            printf("Name: %s\n", emp.name);
            printf("Gmail Address: %s\n", emp.gmail);
            printf("Phone Number: %s\n", emp.phone);
            printf("Years of Experience: %d\n", emp.yearsOfExperience);
            found = 1;
            break; // Exit the loop after finding the employee
        }
    }

    if (!found) {
        printf("Employee with name '%s' not found.\n", searchName);
    }

    fclose(file);
}

int main() {
    char registerAnother;

    do {
        struct Employee newEmployee;

        // Input employee information
        printf("Enter details for the employee:\n");
        
        printf("Name: ");
        scanf(" %[^\n]", newEmployee.name); // Read string with spaces
        
        printf("Gmail Address: ");
        scanf(" %[^\n]", newEmployee.gmail); // Read string with spaces
        
        printf("Phone Number: ");
        scanf(" %[^\n]", newEmployee.phone); // Read string with spaces
        
        printf("Years of Experience: ");
        scanf("%d", &newEmployee.yearsOfExperience);
        
        // Save the employee details to a file
        saveEmployee(newEmployee);
        
        // Ask if the user wants to register another employee
        printf("Want to register another employee? (Y/N): ");
        scanf(" %c", &registerAnother);
        
    } while (registerAnother == 'Y' || registerAnother == 'y');

    // Search for an employee by name
    char searchName[MAX_NAME_LENGTH];
    printf("Enter the name of the employee to search for: ");
    scanf(" %[^\n]", searchName); // Read string with spaces

    // Search for the employee
    searchEmployee(searchName);

    return 0;
}