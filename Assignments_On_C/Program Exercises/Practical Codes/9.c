#include <stdio.h>

int main() {
    int v, w, x, y, z;
    int lg, sm;

    // Prompt the user to enter 5 numbers
    printf("Enter 1st number: ");
    scanf("%d", &v);
    printf("Enter 2nd number: ");
    scanf("%d", &w);
    printf("Enter 3rd number: ");
    scanf("%d", &x);
    printf("Enter 4th number: ");
    scanf("%d", &y);
    printf("Enter 5th number: ");
    scanf("%d", &z);

    // Initialize lg and sm with the first number
    lg = sm = v;

    // Compare each number to find the largest and smallest
    if (w > lg) lg = w;
    if (x > lg) lg = x;
    if (y > lg) lg = y;
    if (z > lg) lg = z;

    if (w < sm) sm = w;
    if (x < sm) sm = x;
    if (y < sm) sm = y;
    if (z < sm) sm = z;

    // Print the largest and smallest numbers
    printf("Largest number: %d\n", lg);
    printf("Smallest number: %d\n", sm);

    return 0;
}