#include <stdio.h>

#define MAX 100

struct Record {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Record records[MAX];
    int n;

    printf("Enter the number of records: ");
    scanf("%d", &n);

    // Input details for each record
    for (int i = 0; i < n; i++) {
        printf("Enter details for record %d:\n", i + 1);
        printf("ID: ");
        scanf("%d", &records[i].id);
        printf("Name: ");
        scanf("%s", records[i].name);
        printf("Salary: ");
        scanf("%f", &records[i].salary);
    }

    // Display the records
    printf("\nDisplaying records:\n");
    for (int i = 0; i < n; i++) {
        printf("Record %d:\n", i + 1);
        printf("ID: %d\n", records[i].id);
        printf("Name: %s\n", records[i].name);
        printf("Salary: %.2f\n", records[i].salary);
    }

    return 0;
}

/*
Explanation of the program:
- The program creates multiple records using arrays of structures.
- It includes the following steps:
  - Defines a structure named 'Record' with three members: id, name, and salary.
  - Declares an array of structures to store multiple records.
  - Prompts the user to enter the number of records.
  - Reads the number of records from the user.
  - Uses a for loop to input details for each record:
    - Prompts the user to enter the ID, name, and salary for each record.
    - Reads the ID, name, and salary from the user and stores them in the corresponding structure members.
  - Uses another for loop to display the records:
    - Prints the ID, name, and salary for each record.
  - Returns 0 to indicate that the program executed successfully.
*/