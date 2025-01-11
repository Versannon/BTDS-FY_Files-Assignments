#include <stdio.h>

int main() {
    int n;

    // Prompt the user to enter a number
    printf("Enter the number: ");
    scanf("%d", &n);

    // Loop to print the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i); // Print the result of n multiplied by i
    }

    return 0;
}