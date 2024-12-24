#include <stdio.h>

int main() {
    int num, Onum, remainder, result = 0;
    printf("Enter an integer: ");
    scanf("%d", &num); // Read the input number from the user
    Onum = num; // Store the original number for comparison later
    while (Onum != 0) {
        remainder = Onum % 10; // Get the last digit
        result += remainder * remainder * remainder; // Add the cube of the digit to the result
        Onum /= 10; // Remove the last digit
    }
    if (result == num)
        printf("%d is an Armstrong number.\n", num); // Print if it is an Armstrong number
    else
        printf("%d is not an Armstrong number.\n", num); // Print if it is not an Armstrong number
    return 0;
}