// Que5
// 5. Write a program to check whether two given numbers are co-prime numbers or not

#include<stdio.h>
int main()
{
    int n, i, a, b;
    printf("This program check whether two given numbers are co-prime numbers or not.\n");
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    i=(a<b)?a:b;
    while(i>1)
    {
        if(a%i==0&&b%i==0)
        {
            printf("Numbers are not coprime.");
            exit(0);
        }
        i--;
        
    }
    printf("The number is coprime.");

}





// #include <stdio.h>

// int gcd(int a, int b) {
//     // Euclidean algorithm to find GCD
//     while (b != 0) {
//         int temp = a % b;
//         a = b;
//         b = temp;
//     }
//     return a;
// }

// int main() {
//     int a, b;
    
//     printf("This program checks whether two given numbers are co-prime numbers or not.\n");
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);

//     if (gcd(a, b) == 1) {
//         printf("Numbers are co-prime.\n");
//     } else {
//         printf("Numbers are not co-prime.\n");
//     }

//     return 0;
// }
