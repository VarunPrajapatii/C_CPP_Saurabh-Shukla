// Que10
// 10. Write a program to print all Armstrong numbers under 1000


#include<stdio.h>

int main()
{
    int i, sum, a, temp;

    printf("This program prints all Armstrong numbers under 1000: ");
    for(i = 1; i < 1000; i++)
    {
        sum = 0;
        temp = i;

        while(temp != 0)
        {
            a = temp % 10;
            sum = sum + (a * a * a);
            temp = temp / 10;
        }

        if(sum == i)
            printf("%d ", i);
    }

    return 0;
}
