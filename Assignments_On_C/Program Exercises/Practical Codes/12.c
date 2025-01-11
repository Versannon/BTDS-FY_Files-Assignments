#include <stdio.h>

// Function to print pattern 1
int p1() {
    printf("Pattern 1:\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

// Function to print pattern 2
int p2() {
    printf("Pattern 2:\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

// Function to print pattern 3
int p3() {
    printf("Pattern 3:\n");
    int num = 1;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}

// Function to print pattern 4
int p4() {
    printf("Pattern 4:\n");
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

// Function to print pattern 5
int p5() {
    printf("Pattern 5:\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i = 2; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}

int main() {
    // Print all patterns one below the other
    p1();
    p2();
    p3();
    p4();
    p5();

    return 0;
}