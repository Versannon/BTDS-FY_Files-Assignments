#include <stdio.h>

// Function to calculate the Least Common Multiple (LCM)
int lcm(int a, int b) {
    int max = (a > b) ? a : b; // Find the maximum of the two numbers

    // Loop to find the LCM
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max; // Return the LCM if max is divisible by both a and b
        }
        ++max; // Increment max to check the next number
    }
}

int main() {
    int num1, num2;
    printf("Enter two integers: "); // Prompt user for input
    scanf("%d %d", &num1, &num2); // Read two integers from user
    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2)); // Print the LCM
    return 0; // Return 0 to indicate successful execution
}