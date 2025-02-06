#include <stdio.h>
#define MAX 10

void ipMt(int matrix[MAX][MAX], int row, int col) {
    printf("Enter elements of the matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int row, int col) {
    printf("Matrix (%dx%d):\n", row, col);
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void addMT(int m1[MAX][MAX], int m2[MAX][MAX], int result[MAX][MAX], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void mulMT(int m1[MAX][MAX], int m2[MAX][MAX], int result[MAX][MAX], int row1, int col1, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

int main() {
    int m1[MAX][MAX], m2[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);
    if (row1 != row2 || col1 != col2) {
        printf("Matrices cannot be added. Dimensions do not match.\n");
    } else {
        ipMt(m1, row1, col1);
        ipMt(m2, row2, col2);
        addMT(m1, m2, result, row1, col1);
        printf("Result of matrix addition:\n");
        printMatrix(result, row1, col1);
    }
    if (col1 != row2) {
        printf("Matrices cannot be multiplied. Invalid dimensions.\n");
    } else {
        mulMT(m1, m2, result, row1, col1, col2);
        printf("Result of matrix multiplication:\n");
        printMatrix(result, row1, col2);
    }
    return 0;
}

/*
Explanation of the program:
- The program performs addition and multiplication of two matrices.
- It defines a constant MAX to set the maximum size of the matrices.
- It includes the following functions:
  - ipMt: To input elements of a matrix.
    - This function takes a matrix and its dimensions as arguments.
    - It uses nested loops to prompt the user to enter each element of the matrix.
  - printMatrix: To print a matrix.
    - This function takes a matrix and its dimensions as arguments.
    - It uses nested loops to print each element of the matrix in a formatted way.
  - addMT: To add two matrices.
    - This function takes two matrices, a result matrix, and their dimensions as arguments.
    - It uses nested loops to add corresponding elements of the two matrices and store the result in the result matrix.
  - mulMT: To multiply two matrices.
    - This function takes two matrices, a result matrix, and their dimensions as arguments.
    - It uses nested loops to multiply corresponding elements of the two matrices and store the result in the result matrix.
- In the main function:
  - The user is prompted to enter the dimensions of the two matrices.
  - It checks if the matrices can be added or multiplied based on their dimensions.
  - If the dimensions are valid for addition, it inputs the matrices, adds them, and prints the result.
  - If the dimensions are valid for multiplication, it inputs the matrices, multiplies them, and prints the result.
- The use of void functions:
  - Void functions are used because they perform actions (input, print, add, multiply) without needing to return a value.
  - This makes the code modular and easier to read and maintain.
- We use one set of matrices for both addition and multiplication to avoid redundant input operations.
*/