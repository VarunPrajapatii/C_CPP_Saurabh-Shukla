// 3. Write a recursive function to print first N odd natural numbers

#include<stdio.h>
void printodd(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printodd(n);

}


void printodd(int n)
{
    if(n==1)
    {
        printf("1 ");
        return;
    }
    else
    {
        printodd(n-1);
        printf("%d ", 2*n-1);
    }
}