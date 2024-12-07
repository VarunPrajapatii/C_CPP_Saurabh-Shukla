// Que9
// 9. Write a program to check whether a given number is an Armstrong number or not

#include<stdio.h>
#include<math.h>

int main()
{
    int n, a, u, sum = 0, digits = 0, i;
    printf("This program checks whether a given number is an Armstrong number or not.\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    a = n;

    while (a != 0)
    {
        digits++;
        a /= 10;
    }
    a = n;
    while (a != 0)
    {
        u = a % 10;
        int power = 1;
        for (i = 1; i <= digits; i++) {
            power *= u;
        }
        sum += power;
        a /= 10;
    }
    if (sum == n)
    {
        printf("The number is an Armstrong number.\n");
    }
    else
    {
        printf("The number is not an Armstrong number.\n");
    }

    return 0;
}