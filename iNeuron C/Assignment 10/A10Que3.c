// Que3
// 3. Write a function to check whether a given number is even or odd. Return 1 if the number is even, otherwise return 0. (TSRS)

#include<stdio.h>

int check(int);

int main()
{
    int a;
    printf("Enter two numbers: ");
    scanf("%d", &a);
    check(a)==1?printf("Number is even."):printf("Number is Odd.");
    
    return 0;

}


int check(int a)
{
    if(a%2==0)
        return 1;
    else
        return 0;
}