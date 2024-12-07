// Que4
// 4. Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>
#include<math.h>

int isPrime(int);
int nextprime(int);

int main()
{
    int n, ans; 
    printf("Enter a number: ");
    scanf("%d", &n);
    ans = nextprime(n);
    printf("Next prime number is %d.\n", ans);
    return 0;
}


int isPrime(int n)
{
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}


int nextprime(int n)
{
    int a = n + 1;
    while (1) {
        if (isPrime(a)) {
            return a;
        }
        a++;
    }
}