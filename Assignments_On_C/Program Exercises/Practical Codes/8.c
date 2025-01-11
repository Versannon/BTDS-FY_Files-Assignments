#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        // Loop to check for factors from 2 to sqrt(num)
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Set isPrime to 0 if a factor is found
                break; // Exit the loop if a factor is found
            }
        }
    }

    // Print the result based on the isPrime flag
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}