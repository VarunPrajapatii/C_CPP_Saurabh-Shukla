// Que2
// 2. Write a program to calculate the product of two matrices each of order 3x3.


#include <stdio.h>

void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]);

int main() {
    int mat1[3][3], mat2[3][3], result[3][3];
    int i, j;

    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    multiplyMatrices(mat1, mat2, result);

    printf("Product of the matrices:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            result[i][j] = 0;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                result[i][j] = result[i][j] + (mat1[i][k] * mat2[k][j]);
            }
        }
    }
}