/*#include<stdio.h>
int main()
{
    int i, j, a;
    for(i=0; i<4; i++)
    {
        a=0;
        for(j=1;j<=7;j++)
        {
            if(j>=4-i && j<=4+i)
            {
                if(j>=(4-i) && j<=4)
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
*/





#include<stdio.h>
int main()
{
    int i, j, count=1;
    for(i=0; i<4; i++)
    {
        for(j=0; j<=(2-i); j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%d", count++);
        }
        count--;
        while(count!=1)
        {
            printf("%d", --count);
        }
        printf("\n");
    }
}