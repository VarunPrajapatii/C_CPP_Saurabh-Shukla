// Que3
// 3. Write a program in C to find the transpose of a given matrix

#include <stdio.h>

void findTranspose(int mat[10][10], int transpose[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[10][10], transpose[10][10];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d%d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    findTranspose(mat, transpose, rows, cols);

    printf("Original Matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Transpose of the Matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
