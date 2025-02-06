#include <stdio.h>

int main() {
    int n, i;
    unsigned long long int t1 = 0, t2 = 1, nextTerm;

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the input is a positive integer
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Fibonacci Sequence: ");

    for (i = 1; i <= n; ++i) {
        if (i == 1) {
            printf("%llu ", t1);
            continue;
        }
        if (i == 2) {
            printf("%llu ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        printf("%llu ", nextTerm);
    }
    printf("\n");

    return 0;
}