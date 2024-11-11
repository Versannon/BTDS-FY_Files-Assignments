#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {8, 1, 7}};
    int i,j;
    printf("Printing a Matrix\n\n");

    // Iterate through rows
    for (i = 0; i < 2; i++) {
        // Iterate through columns
        for (j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}
