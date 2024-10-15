#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;
    int z = 0;

    // Logical OR (||)
    if (x > y || z == 10) {
        printf("At least one condition is true: x > y OR z == 10\n");
    } else {
        printf("Both conditions are false.\n");
    }

    return 0;
}
