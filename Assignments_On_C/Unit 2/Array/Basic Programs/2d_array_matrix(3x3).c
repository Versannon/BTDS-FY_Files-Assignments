#include <stdio.h>

int main() 
{
    int matrix[3][3] = {{1, 2, 3}, {8, 1, 7},{2,5,4}};
    int i,j,k;
    printf("Printing a Matrix\n\n");

    // Iterate through rows
    for (i = 0; i < 3; i++) {
        // Iterate through columns
        for (j = 0; j < 3; j++) 
        {
            for(k=0;k<3;k++)
            {
            printf("%d ", matrix[i][j]);
            }
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;
}