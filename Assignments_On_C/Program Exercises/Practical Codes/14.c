#include <stdio.h>

int main() {
    int n, i;
    unsigned long long int t1 = 0, t2 = 1, nextTerm;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Sequence: ");

    for (i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%llu ", t1);
            continue;
        }
        if (i == 2) {
            printf("%llu ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%llu ", nextTerm);
    }

    return 0;
}

/*
Explanation of the program:
- The program generates and prints the Fibonacci sequence up to a given number of terms.
- It includes the following steps:
  - Declares variables to store the number of terms, loop counter, and the first two terms of the Fibonacci sequence.
  - Prompts the user to enter a positive integer.
  - Reads the number of terms from the user.
  - Checks if the input is a positive integer:
    - If the input is not a positive integer, prints an error message and exits the program.
  - Prints the Fibonacci sequence:
    - Uses a for loop to generate and print the Fibonacci sequence up to the given number of terms.
    - Handles the first two terms separately.
    - Calculates the next term by adding the previous two terms.
    - Updates the previous two terms.
    - Prints the next term.
  - Returns 0 to indicate that the program executed successfully.
*/