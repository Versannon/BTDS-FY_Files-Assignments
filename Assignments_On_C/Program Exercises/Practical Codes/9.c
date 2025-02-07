#include <stdio.h>

int main() {
    int v, w, x, y, z;
    int lg, sm;

    printf("Enter 1st number: ");
    scanf("%d", &v);
    printf("Enter 2nd number: ");
    scanf("%d", &w);
    printf("Enter 3rd number: ");
    scanf("%d", &x);
    printf("Enter 4th number: ");
    scanf("%d", &y);
    printf("Enter 5th number: ");
    scanf("%d", &z);

    lg = sm = v;

    if (w > lg) lg = w;
    if (x > lg) lg = x;
    if (y > lg) lg = y;
    if (z > lg) lg = z;

    if (w < sm) sm = w;
    if (x < sm) sm = x;
    if (y < sm) sm = y;
    if (z < sm) sm = z;

    printf("Largest number: %d\n", lg);
    printf("Smallest number: %d\n", sm);

    return 0;
}

/*
Explanation of the program:
- The program finds the largest and smallest numbers among five given numbers.
- It includes the following steps:
  - Declares variables to store the five numbers (v, w, x, y, z) and the largest (lg) and smallest (sm) numbers.
  - Uses the `printf` function to prompt the user to enter five numbers.
  - Uses the `scanf` function to read the five numbers from the user.
  - Initializes the largest and smallest numbers with the first number (v).
  - Uses a series of `if` statements to compare each of the remaining numbers (w, x, y, z) with the current largest and smallest numbers:
    - Updates the largest number (lg) if a larger number is found.
    - Updates the smallest number (sm) if a smaller number is found.
  - Uses the `printf` function to print the largest and smallest numbers.
  - Returns 0 to indicate that the program executed successfully.
- Functions used:
  - `printf`: Used to print messages to the console.
  - `scanf`: Used to read input from the user.
- No loops are used in this program. Instead, a series of `if` statements are used to compare the numbers.
*/