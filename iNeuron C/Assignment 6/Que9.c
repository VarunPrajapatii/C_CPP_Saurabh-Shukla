// Que9
// 9. Write a program to calculate LCM of two numbers

#include<stdio.h>
int main()
{
    int a,b, x;
    printf("Enter two number: ");
    scanf("%d %d", &a,&b);
    x=(a>b?a:b);
    while(1)
    {
        if(x%a==0 && x%b==0)
        {
            printf("Lcm is %d.", x);
            break;
        }
        x++;
    }

    return 0;
}