// Que9. Write a program in C to accept a matrix and determine whether it is a sparse matrix. 


#include <stdio.h>

void acceptMatrix(int arr[10][10], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

int isSparseMatrix(int arr[10][10], int rows, int cols) {
    int zeroCount = 0, totalElements = rows * cols;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    return (zeroCount > totalElements / 2);
}

void displayMatrix(int arr[10][10], int rows, int cols) {
    printf("The matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    int matrix[10][10];

    printf("Enter the number of rows and columns of the matrix (max size 10x10): ");
    scanf("%d %d", &rows, &cols);

    acceptMatrix(matrix, rows, cols);

    displayMatrix(matrix, rows, cols);

    if (isSparseMatrix(matrix, rows, cols)) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}
