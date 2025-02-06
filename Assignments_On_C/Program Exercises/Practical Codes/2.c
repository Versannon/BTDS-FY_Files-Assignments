#include <stdio.h>

int main() {
    int n;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

/*
Explanation of the program:
- The program prints the multiplication table of a given number from 1 to 10.
- It includes the following steps:
  - Declares a variable to store the number.
  - Prompts the user to enter a number.
  - Reads the number from the user.
  - Uses a for loop to iterate from 1 to 10.
  - In each iteration, calculates the product of the number and the loop variable.
  - Prints the result of the multiplication in the format "n x i = result".
  - Returns 0 to indicate that the program executed successfully.
*/