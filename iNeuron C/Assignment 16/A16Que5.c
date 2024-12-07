// Que5. Write a program in C to find the sum of left diagonals of a matrix

#include<stdio.h>

int leftDiagonalSum(int arr[10][10], int n) {
    int sum=0;
    for(int i=0; i<n; i++) {
        sum += arr[i][n-1-i];
    }
    return sum;
}

int main() {
    int n, result;
    printf("Enter size of the matrix(Matrix size shouldn't exceed 10x10): ");
    scanf("%d", &n);
    int arr[10][10];
    printf("Enter values of matrix:\n");
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    result = leftDiagonalSum(arr, n);
    printf("The diagonal sum is: %d", result);
    return 0;
}
