// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
void printoddrev(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printoddrev(n);
}


void printoddrev(int n)
{
    if(n==1)
    {
        printf("1");
        return;
    }
    else
    {
        printf("%d ", 2*n-1);
        printoddrev(n-1);
    }
}