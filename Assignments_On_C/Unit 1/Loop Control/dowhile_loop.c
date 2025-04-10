#include <stdio.h>

int main() {
    int num, i = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    /* This program will calculate the sum of the first 'num' natural numbers */
    do {
        sum += i;
        ++i;
    } while (i <= num);

    printf("Sum of the first %d natural numbers from your given number is: %d\n", num, sum);

    return 0;
}
