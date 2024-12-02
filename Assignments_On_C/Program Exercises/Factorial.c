#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, i;
    printf("Give Number To Get It's Factorial: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else if (num == 0) {
        printf("Factorial of 0 is 1.\n");
    } else {
        long long factorial = 1; // Use long long for larger values
        for (i = 1; i <= num; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", num, factorial); // Use %lld for long long
    }
    return 0;
}
