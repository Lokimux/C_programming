#include <stdio.h>

// Function to add two matrices
void addMatrices(int mat1[][2], int mat2[][2], int result[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int mat[][2]) {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix1[2][2], matrix2[2][2], result[2][2];

    // Input for first matrix
    printf("Enter elements of first matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Input for second matrix
    printf("Enter elements of second matrix (2x2):\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding matrices
    addMatrices(matrix1, matrix2, result);

    // Displaying result
    printf("Resultant Matrix:\n");
    displayMatrix(result);

    return 0;
}
