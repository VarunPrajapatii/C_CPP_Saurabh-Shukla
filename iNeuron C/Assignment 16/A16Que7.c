// Que7. Write a program in C to print or display the lower triangular of a given matrix

#include<stdio.h>

void displayLowerTri(int [10][10], int);

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
    displayLowerTri(arr, n);
    return 0;
}

void displayLowerTri(int arr[10][10], int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            if(i>=j) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}