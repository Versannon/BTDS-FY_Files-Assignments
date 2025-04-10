#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    int result = gcd(num1, num2);
    printf("GCD of %d and %d is %d\n", num1, num2, result);
    return 0;
}

/*
Explanation of the program:
- The program finds the GCD (greatest common divisor) of two given integers.
- It includes the following steps:
  - The gcd function:
    - This function calculates the GCD using the Euclidean Algorithm.
    - It takes two integers as arguments.
    - It uses a while loop to repeatedly replace the larger number by the remainder of the division of the two numbers until the remainder is 0.
    - When the remainder is 0, the other number contains the GCD.
  - The main function:
    - Prompts the user to enter two integers.
    - Reads the two integers from the user.
    - Calls the gcd function to calculate the GCD of the two integers.
    - Prints the GCD of the two integers.
    - Returns 0 to indicate that the program executed successfully.
*/