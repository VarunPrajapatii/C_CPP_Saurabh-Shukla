// 10. Write a recursive function to print reverse of a given number

#include<stdio.h>

void Rev(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    Rev(n);
    return 0;
}

void Rev(int n)
{
    if(n/10==0)
    {
        printf("%d", n%10);
        return;
    }
    printf("%d", n%10);
    Rev(n/10);
}