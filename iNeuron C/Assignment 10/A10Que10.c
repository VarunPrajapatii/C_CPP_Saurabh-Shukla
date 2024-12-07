// Que10
// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)


// #include<stdio.h>

// int checkPrime(int);
// void prifac(int);

// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     printf("Prime factors of %d are", n);
//     prifac(n);

// }


// int checkPrime(int n)
// {
//     int i;
//     for(i=2; i<n; i++)
//     {
//         if(n%i==0)
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// void prifac(int n)
// {
//     int i, flag;
//     for(i=2; i<=n/2; i++)
//     {
//         if(n%i==0)
//         {
//             flag=checkPrime(i);
//             if(flag==1)
//             {
//                 printf(" %d", i);
//             }
//         }
//     }
//     printf(".");
// }


#include<stdio.h>

// Function to print all prime factors of a given number
void prifac(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    prifac(n);
    return 0;
}

// Function to print all prime factors of a number
void prifac(int n)
{
    int i;
    
    // Check for the number of 2s that divide n
    while (n % 2 == 0) {
        printf("%d ", 2);
        n = n / 2;
    }

    // Check for odd factors from 3 up to sqrt(n)
    for (i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d ", n);
    }

    printf("\n");
}



/**
Detailed Explanation of Each Step:
Factorizing by 2:

The number 2 is the smallest prime number. We first check if the given number is divisible by 2.
If the number can be divided by 2, we print 2 and divide the number by 2.
We repeat this process (i.e., keep dividing by 2) until the number is no longer divisible by 2. For example, if the number is 36, it’s divisible by 2, so we print 2 and divide it by 2, resulting in 18. We continue dividing 18 by 2, which gives 9. Now, 9 is not divisible by 2 anymore, so we stop.
Factorizing by Odd Numbers (Starting from 3):

After dividing by 2 as much as possible, we now check for odd factors, starting from 3.
We check if the number is divisible by 3. If yes, we print 3 and divide the number by 3. We keep doing this as long as the number is divisible by 3.
For example, after dividing 36 by 2 twice (getting 9), we check if 9 is divisible by 3. Since it is, we print 3 and divide 9 by 3, getting 3. We divide 3 by 3 again to get 1. Now, 1 means we have finished the factorization.
Check for Remaining Prime Factor:

After we have checked all possible factors (up to the square root of the number), if the remaining number is greater than 2, it means that number itself is a prime factor and should be printed.
For example, if we were working with a number like 37, we would find that it’s not divisible by any smaller prime numbers, so 37 itself is a prime factor and would be printed.
 */