#include <stdio.h>
struct Student
{
    char name[100];
    int roll;
    float marks;
};

int main()
{
    struct Student S1;

    printf("Enter the name of the student: ");
    fgets(S1.name, sizeof(S1.name), stdin);
    printf("Enter the roll number of the student: ");
    scanf("%d", &S1.roll);
    printf("Enter the marks of the student: ");
    scanf("%f", &S1.marks);

    printf("\nStudent Information:\n");
    printf("Name: %s", S1.name);
    printf("Roll Number: %d\n", S1.roll);
    printf("Marks: %f\n", S1.marks);

    return 0;
}
/*
Explanation of the program:
- The program defines a structure for storing student information and then takes input from the user, stores it in the structure, and displays the information.
- It includes the following steps:
  - Defines a structure named 'Student' with three members: name, roll_number, and marks.
  - Declares a variable of type 'Student' to store the student's information.
  - Prompts the user to enter the student's name, roll number, and marks.
  - Uses the fgets function to read the student's name from the user.
  - Uses the scanf function to read the student's roll number and marks from the user.
  - Displays the student's information using printf.
  - Returns 0 to indicate that the program executed successfully.
*/