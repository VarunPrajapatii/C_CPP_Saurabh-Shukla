// 5. Write a recursive function to print first N even natural numbers

#include<stdio.h>
void printneven(int);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printneven(n);

}

void printneven(int n)
{
    if(n==1)
    {
        printf("2 ");
    }
    else
    {
        printneven(n-1);
        printf("%d ", 2*n);
    }
}