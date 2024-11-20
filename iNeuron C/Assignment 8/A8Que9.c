#include<stdio.h>
int main()
{
    int i, j, a;
    for(i=0; i<=3; i++)
    {
        a=0;
        for(j=0;j<=7;j++)
        {
            if(j>=i && j<(7-i))
            {
                if(j<4)
                {
                    a++;
                    printf("%d",a);                    
                }
                else
                {
                    a--;
                    printf("%d", a);
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}