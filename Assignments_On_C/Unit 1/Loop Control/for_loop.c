#include <stdio.h>

int main() {
    int i, num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // This loop will print numbers from 1 to 'num'
    for (i = 1; i <= num; ++i) {
        printf("%d ", i);
    }

    printf("\n"); // Add a newline for cleaner output

    return 0;
}
