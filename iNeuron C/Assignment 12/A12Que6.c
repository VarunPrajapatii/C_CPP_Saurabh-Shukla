// 6. Write a recursive function to print first N even natural numbers in reverse order

#include<stdio.h>
void printevenrev(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printevenrev(n);

}
void printevenrev(int n)

{
    if(n==1)
    {
        printf("2 ");
    }
    else
    {
        printf("%d ", 2*n);
        printevenrev(n-1);
    }
}