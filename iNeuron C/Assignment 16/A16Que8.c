// Que8. Write a program in C to print or display an upper triangular matrix

#include<stdio.h>

void displayUpperTri(int [10][10], int);

int main() {
    int n;
    printf("Enter the size of matrix(maximum 10): ");
    scanf("%d", &n);
    printf("Enter the matrix terms: ");
    int arr[10][10];
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    displayUpperTri(arr, n);
    return 0;
}

void displayUpperTri(int arr[10][10], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i<=j) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}