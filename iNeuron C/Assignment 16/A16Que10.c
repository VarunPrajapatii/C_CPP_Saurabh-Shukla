// Que10. Write a program in C to find the row with maximum number of 1s

#include<stdio.h>

#define MAX_ROWS 100
#define MAX_COLS 100

int rowWithMaxOnes(int arr[][MAX_COLS], int rows, int columns);

int main() {
    int rows, columns;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &columns);
    if (rows > MAX_ROWS || columns > MAX_COLS) {
        printf("Error: Matrix size exceeds the allowed limits.\n");
        return 1;
    }
    int arr[MAX_ROWS][MAX_COLS];
    printf("Enter the elements of the matrix (0 or 1):\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int row = rowWithMaxOnes(arr, rows, columns);
    printf("The row with maximum number of 1s is: %d\n", row);
    return 0;
}

int rowWithMaxOnes(int arr[][MAX_COLS], int rows, int columns) {
    int maxRow = -1;
    int maxCount = -1;
    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < columns; j++) {
            if (arr[i][j] == 1) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxRow = i;
        }
    }
    return maxRow;
}
