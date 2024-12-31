#include <stdio.h>
#include <math.h>

int main() {
    int num, r, result = 0, n, digits = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    temp = num;

    // Calculate the number of digits
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;

    // Calculate the sum of the digits raised to the power of the number of digits
    while (temp != 0) {
        r = temp % 10;
        result += pow(r, digits);
        temp /= 10;
    }

    // Check if the result is equal to the original number
    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}