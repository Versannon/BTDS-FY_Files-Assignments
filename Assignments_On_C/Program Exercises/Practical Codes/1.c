#include <stdio.h>

int main() {
    int sub1, sub2, sub3, sub4, sub5, total;
    float pmarks;

    printf("Enter the marks obtained by the student in 5 subjects:\n");
    printf("Subject 1: ");
    scanf("%d", &sub1);
    printf("Subject 2: ");
    scanf("%d", &sub2);
    printf("Subject 3: ");
    scanf("%d", &sub3);
    printf("Subject 4: ");
    scanf("%d", &sub4);
    printf("Subject 5: ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;

    pmarks = (float)total / 5;

    printf("Total marks obtained: %d\n", total);
    printf("Percentage marks: %.2f%%\n", pmarks);

    return 0;
}

/*
Explanation of the program:
- The program calculates the total and percentage marks obtained by a student in 5 subjects.
- It includes the following steps:
  - Declares variables to store the marks obtained in 5 subjects, the total marks, and the percentage marks.
  - Prompts the user to enter the marks obtained in each of the 5 subjects.
  - Reads the marks from the user.
  - Calculates the total marks obtained by summing the marks of the 5 subjects.
  - Calculates the percentage marks by dividing the total marks by 5.
  - Prints the total marks obtained.
  - Prints the percentage marks.
  - Returns 0 to indicate that the program executed successfully.
*/