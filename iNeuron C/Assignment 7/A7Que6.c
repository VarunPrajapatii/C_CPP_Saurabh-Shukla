// Que6
// 6. Write a program to print all Prime numbers under 100

#include<stdio.h>
int main()
{
    int n, i, flag=0;
    printf("This program print all Prime numbers under 100.\n");
    for(n=2;n<=100;n++)
    {
        for(i=2; i<=n/2; i++)
        {
            if(n%i==0)
                flag=1;
        }
        if (flag==0)
        {
            printf("%d ", n);
        }
        flag=0;
        
        
    }


}
