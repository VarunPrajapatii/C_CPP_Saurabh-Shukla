// Que8
// 8. Write a function to print PASCAL Triangle. (TSRN)

#include <stdio.h>

int fact(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++) {
        f *= i;
    }
    return f;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

void pascaltriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        for (int space = 0; space < rows - i - 1; space++) {
            printf(" ");
        }
        for (int j = 0; j <= i; j++) {
            printf("%d ", nCr(i, j));
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows of Pascal's Triangle: ");
    scanf("%d", &rows);
    pascaltriangle(rows);
    return 0;
}
