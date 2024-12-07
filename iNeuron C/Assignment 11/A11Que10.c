// Que10
// 10. Write a program in C to find the sum of the series 1!/1+  2!/2 + 3!/3 + 4!/4 + 5!/5 using the function.

#include<stdio.h>
int fact(int);
void seriescal();

int main()
{
    seriescal();
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

// 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5

void seriescal()
{
    int n=1, ans=0;
    while(n<=5)
    {
        ans= ans+ (fact(n)/n);
        n++;
    }
    printf("%d", ans);
}