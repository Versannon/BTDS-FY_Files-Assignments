#include <stdio.h>

int main() {
    int x = 10; // Declare an integer variable x and initialize it to 10
    int *y = &x; // Declare a pointer y and assign it the address of x

    // Print the value of x
    printf("Value of X: %d\n", x);
    // Print the memory address of x
    printf("Memory Address of X: %p\n", (void*)&x);
    // Print the memory address stored in y (which is the address of x)
    printf("Memory reference of x to y: %p\n", (void*)y);
    // Dereference y to get the value of x and print it
    printf("Dereferencing the pointer y: %d\n", *y);
    // Print the memory address of the pointer y itself
    printf("Reference of y: %p\n", (void*)&y);

    return 0;
}