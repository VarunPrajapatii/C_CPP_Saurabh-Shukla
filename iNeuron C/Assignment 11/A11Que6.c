// Que6
// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>
#include<math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


void primebwtwo(int x, int y) {   
    
    if (x > y) {
        printf("Invalid range. The first number should be less than the second number.\n");
        return;
    }

    printf("Prime numbers between %d and %d are: ", x, y);
    for (int i = x + 1; i < y; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int l, u;
    printf("Enter two numbers: ");
    scanf("%d %d", &l, &u);
    primebwtwo(l, u);
    return 0;
}
