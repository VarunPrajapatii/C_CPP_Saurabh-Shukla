// Que6. Write a program in C to find the sum of rows and columns of a Matrix.

#include<stdio.h>

void sumRowsAndColumns(int arr[10][10], int n, int m) {
    int rowSum[10] = {0}, colSum[10] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            rowSum[i] += arr[i][j];
            colSum[j] += arr[i][j];
        }
    }
    printf("Sum of rows:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d: %d\n", i + 1, rowSum[i]);
    }
    printf("Sum of columns:\n");
    for (int j = 0; j < m; j++) {
        printf("Column %d: %d\n", j + 1, colSum[j]);
    }
}

int main() {
    int n, m;
    printf("Enter the number of rows and columns of the matrix (max 10x10): ");
    scanf("%d %d", &n, &m);
    int arr[10][10];
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    sumRowsAndColumns(arr, n, m);
    return 0;
}
