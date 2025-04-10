#include <stdio.h>

int main() {
    int x[5] = {1, 2, 3, 4, 5};
    int *y = &x[0];
    y=&x[1];
    y=&x[2];
    return 0;
}