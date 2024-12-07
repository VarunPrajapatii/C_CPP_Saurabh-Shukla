// 10. Write a recursive function to print reverse of a given number

#include<stdio.h>

void Rev(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0");  // Print "0" if the number is zero
    } else {
        Rev(n);  // Call the recursive function
    }
}

void Rev(int n)
{
    if(n==0)
    {
        return;
    }
    printf("%d", n%10);
    Rev(n/10);
}