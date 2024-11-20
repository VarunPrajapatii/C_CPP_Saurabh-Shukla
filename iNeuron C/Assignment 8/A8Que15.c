#include<stdio.h>
int main()
{
    int i, j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(j==(4-i)||j==4||i==4)
            {
                printf("*");
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}