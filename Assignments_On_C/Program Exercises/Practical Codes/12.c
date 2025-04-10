#include <stdio.h>

int p1() {
    printf("Pattern 1:\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

int p2() {
    printf("Pattern 2:\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int main() {
    p1();
    p2();
    return 0;
}

/*
Explanation of the program:
- The program prints two different patterns using functions.
- It includes the following steps:
  - Defines a function `p1` to print the first pattern:
    - Uses nested loops to print a pattern of numbers.
    - The outer loop iterates through the rows.
    - The inner loop prints numbers from 1 to the current row number.
  - Defines a function `p2` to print the second pattern:
    - Uses nested loops to print a pattern of asterisks.
    - The outer loop iterates through the rows.
    - The inner loop prints asterisks from 1 to the current row number.
  - In the `main` function:
    - Calls `p1` to print the first pattern.
    - Calls `p2` to print the second pattern.
  - Returns 0 to indicate that the program executed successfully.
*/