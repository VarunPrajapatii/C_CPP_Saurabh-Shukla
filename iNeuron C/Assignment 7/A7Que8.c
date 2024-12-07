// Que8
// 8. Write a program to find next Prime number of a given number


#include<stdio.h>
#include<math.h>
int main()
{
    int n, i, j, flag;
    printf("This program find next Prime number of a given number.\n");
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=n+1;1;i++)
    {
        for(j=2; j<sqrt(i); j++)
        {
            if(i%j==0)
                flag=1;
        }
        if (flag==0)
        {
            printf("%d is the next prime number", i);
            break;
        }
        flag=0;
    }
}