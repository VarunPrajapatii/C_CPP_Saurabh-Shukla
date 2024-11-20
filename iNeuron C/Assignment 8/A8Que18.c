#include<stdio.h>
int main()
{
    int i, j;
    for(i=0; i<9; i++)
    {
        for(j=0; j<9; j++)
        {
            if(i<=4)
            {
                if(j>=(4-i)&&j<=(4+i))
                    printf("*");
                else
                    printf(" ");
            }
            else
            {
                if(j>=(i-4) && j<=(8-(i-4)))
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}