/* Write a C program to find the GCD (greatest common divisor) of two given
   integers.*/

#include <stdio.h>

// Function to calculate GCD using the Euclidean Algorithm
int gcd(int a, int b) {
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a; // When b is 0, a contains the GCD
}

int main() {
    int num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate the GCD of the two numbers
    int result = gcd(num1, num2);

    // Print the GCD
    printf("GCD of %d and %d is %d\n", num1, num2, result);

    return 0; // Indicate that the program executed successfully
}