// Que9
// 9. Write a function to check whether a given number contains a given digit or not. (TSRS)


#include<stdio.h>

int checkdigit(int, int);

int main()
{
    int n, d, ans;
    printf("Enter number and digit: ");
    scanf("%d %d", &n, &d);
    ans = checkdigit(n, d);
    if(ans==1)
    {
        printf("Yes the digit is present in the number.");
    }
    if(ans==0)
    {
        printf("The digit is not in the number.");
    }
}

int checkdigit(int n, int d)
{
    int i;
    while(n!=0)
    {
        i=n%10;
        if(i==d)
            return 1;
        n=n/10;
    }
    return 0;
}