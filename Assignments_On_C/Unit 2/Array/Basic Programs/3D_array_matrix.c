#include <stdio.h>

int main() {
    int matrix[2][3][3] = {
        {{1, 2, 3}, {8, 1, 7}, {3, 5, 7}},
        {{6, 9, 2}, {3, 5, 1}, {8, 4, 9}}  // Added a second 3x3 matrix
    };
    int i, j, k;
    printf("Printing a Matrix\n\n");

    // Iterate through the first "part" (i = 0)
    for (i = 0; i < 1; i++) { 
        // Iterate through rows of the 3x3 matrix
        for (j = 0; j < 3; j++) {
            // Iterate through columns of the 3x3 matrix
            for (k = 0; k < 3; k++) {
                printf("%d ", matrix[i][j][k]); // Print the element
            }
            printf("\n"); // Move to the next line after each row
        }
        printf("\n"); // Add a line break between pages
    }
    return 0;
}
