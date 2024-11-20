// Assignment - 11
// More on functions in C Language

// Que1
// 1. Write a function to calculate LCM of two numbers. (TSRS)

#include<stdio.h>

int lcmoftwo(int, int);

int main()
{
    int a, b, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    lcm=lcmoftwo(a,b);
    printf("lcm is %d.", lcm);


}


int lcmoftwo(int a, int b)
{
    int x;
    x=(a>b?a:b);
    while(1)
    {
        if(x%a==0 && x%b==0)
        {
            return x;
        }
        x++;
    }
}