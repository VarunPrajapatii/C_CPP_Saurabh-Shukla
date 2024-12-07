// Que5
// 5. Write a function to print first N prime numbers (TSRN)

#include<stdio.h>
#include<math.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

void firstNprime(int n) {
    int count = 0;
    int num = 2;

    while (count < n) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("First %d prime numbers are: ", n);
        firstNprime(n);
    } else {
        printf("Please enter a positive number.");
    }
    return 0;
}