// Que9
// 9. Write a program in C to find the square of any number using the function.

#include<stdio.h>
int findsqr(int);

int main()
{
    int n, ans;
    printf("Enter a number: ");
    scanf("%d", &n);
    ans=findsqr(n);
    printf("The square of %d is %d.", n, ans);
    return 0;

}


int findsqr(int n)
{
    int ans;
    ans=n*n;
    return ans;
}