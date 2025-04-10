#include <stdio.h>

int main() {
    int i, j, num;
    printf("Enter the number of rows: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
/*
Explanation of the program:
- The program displays a pattern like a right-angled triangle using asterisks (*).
- It includes the following steps:
  - Declares the variables i, j, and num.
  - Prompts the user to enter the number of rows for the triangle.
  - Reads the number of rows from the user.
  - Uses a nested for loop to print the pattern:
    - The outer loop runs from 1 to num (inclusive) to handle the number of rows.
    - The inner loop runs from 1 to i (inclusive) to handle the number of columns in each row.
    - In each iteration of the inner loop, an asterisk followed by a space is printed.
    - After the inner loop completes, a newline character is printed to move to the next row.
  - Returns 0 to indicate that the program executed successfully.
*/