#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;

    // Logical NOT (!)
    if (!(x == y)) {
        printf("x is not equal to y: !(x == y)\n");
    } else {
        printf("x is equal to y.\n");
    }

    return 0;
}
