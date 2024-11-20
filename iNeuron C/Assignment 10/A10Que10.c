// Que10
// 10. Write a function to print all prime factors of a given number. For example, if the number is 36 then your result should be 2, 2, 3, 3. (TSRN)


#include<stdio.h>

int checkPrime(int);
void prifac(int);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors of %d are", n);
    prifac(n);

}


int checkPrime(int n)
{
    int i;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

void prifac(int n)
{
    int i, flag;
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            flag=checkPrime(i);
            if(flag==1)
            {
                printf(" %d", i);
            }
        }
    }
    printf(".");
}