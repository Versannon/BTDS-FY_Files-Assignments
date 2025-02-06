#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        fact *= i;

    printf("Factorial of %d = %lld\n", num, fact);

    return 0;
}

/*
Explanation of the program:
- The program calculates the factorial of a given number.
- It includes the following steps:
  - Declares variables to store the number, a loop counter, and the factorial result.
  - Initializes the factorial result to 1.
  - Prompts the user to enter a number.
  - Reads the number from the user.
  - Uses a for loop to calculate the factorial:
    - Iterates from 1 to the entered number.
    - Multiplies the factorial result by the loop counter in each iteration.
  - Prints the factorial of the entered number.
  - Returns 0 to indicate that the program executed successfully.
*/