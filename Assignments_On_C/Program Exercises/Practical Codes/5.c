#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate the factorial using a for loop
    for (i = 1; i <= num; i++)
        fact *= i; // Multiply fact by i in each iteration

    // Print the factorial of the entered number
    printf("Factorial of %d = %lld\n", num, fact);

    return 0;
}