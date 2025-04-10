#include <stdio.h>
#include <math.h>

int main() {
    double number, base, exponent, result;

    // Calculate the square root of a number
    printf("Enter a number to calculate its square root: ");
    scanf("%lf", &number);
    result = sqrt(number);
    printf("The square root of %.2f is %.2f\n", number, result);

    // Calculate the power of a number
    printf("Enter the base number: ");
    scanf("%lf", &base);
    printf("Enter the exponent: ");
    scanf("%lf", &exponent);
    result = pow(base, exponent);
    printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent, result);

    return 0;
}

/*
Explanation of the program:
- The program uses the `math.h` library to calculate the square root and power of numbers.
- It includes the following steps:
  - Includes the `math.h` library to use the `sqrt` and `pow` functions.
  - Declares variables to store the number, base, exponent, and result.
  - Prompts the user to enter a number to calculate its square root.
  - Reads the number from the user.
  - Uses the `sqrt` function to calculate the square root of the number.
  - Prints the square root of the number.
  - Prompts the user to enter the base number and exponent to calculate the power.
  - Reads the base number and exponent from the user.
  - Uses the `pow` function to calculate the power of the base number raised to the exponent.
  - Prints the result of the base number raised to the power of the exponent.
  - Returns 0 to indicate that the program executed successfully.
*/