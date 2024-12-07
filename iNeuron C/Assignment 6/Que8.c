// Que8
// 8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>
#include<math.h>

int main() {
    int n, i;
    int isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) {
        printf("It's a prime number.\n");
    } else {
        printf("It's not a prime number.\n");
    }

    return 0;
}
