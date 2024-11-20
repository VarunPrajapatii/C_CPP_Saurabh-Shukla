// Que6
// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

#include<stdio.h>

void primebwtwo(int, int);
int main()
{
    int l, u;
    printf("Enter two numbers: ");
    scanf("%d %d", &l, &u);
    primebwtwo(l,u);
    return 0;

}


void primebwtwo(int x, int y)
{   
    int i, j, flag=0;
    for(i=x+1; i<y; i++)
    {
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(j==(i/2)+1)
            printf("%d ", i);
        flag=0;
    }
}