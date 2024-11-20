// Que4
// 4. Write a function to find the next prime number of a given number. (TSRS)

#include<stdio.h>

int nextprime(int);

int main()
{
    int n, ans; 
    printf("Enter a number: ");
    scanf("%d", &n);
    ans=nextprime(n);
    printf("Next prime number is %d.", ans);
}


int nextprime(int n)
{
    int i, a=n+1, flag=0;
    while(1)
    {
        for(i=a/2; i>=2; i--)
        {
            if(a%i==0)
            {
                flag=1;
            }
        }
        if(flag==0)
            return a;
        a++;
        flag=0;
    }
}