#include <stdio.h>

int main() {
    int num, sum = 0, x, rem, rev = 0;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    x = num; // Store the original number in x

    // Loop to calculate the sum of digits and reverse the number
    while (x != 0) {
        rem = x % 10; // Get the last digit
        sum += rem; // Add the digit to the sum
        rev = rev * 10 + rem; // Build the reversed number
        x /= 10; // Remove the last digit
    }

    // Print the sum of the digits
    printf("Sum of digits of %d = %d\n", num, sum);

    // Check if the original number is equal to the reversed number
    if (num == rev)
        printf("%d is a palindrome number.\n", num);
    else
        printf("%d is not a palindrome number.\n", num);

    return 0;
}