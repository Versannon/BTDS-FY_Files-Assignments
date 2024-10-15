#include <stdio.h>

int main() {
    int x = 10;
    int y = 5;
    int z = 0;

    // Logical AND (&&)
    if (x > y && z == 0) {
        printf("Both conditions are true: x > y AND z == 0\n");
    } else {
        printf("At least one condition is false.\n");
    }

    return 0;
}
