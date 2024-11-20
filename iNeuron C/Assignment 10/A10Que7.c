// Que7
// 7. Write a function to calculate the number of combinations one can make from n items and r selected at a time. (TSRS)


#include<stdio.h>

int fact(int);
int nCr(int, int);

int main()
{
    int n, r, ans;
    printf("Enter values of n and r: ");
    scanf("%d %d", &n, &r);
    ans = nCr(n, r);
    printf("nCr is %d.", ans);
    return 0;
}

int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}

int nCr(int n, int r)
{
    int a;
    a=fact(n)/(fact(n-r)*fact(r));
    return a;
}