#include<stdio.h>
int main()
{
    int i, j;
    char a;
    for(i=0; i<5; i++)
    {
        a = 64;
        for(j=0; j<9; j++)
        {
            if(j>=(4-i) && j<=(4+i))
            {
                if(j<=4)
                {
                    a++;
                    printf("%c", a);
                    
                }
                else
                {
                    a--;
                    printf("%c", a);
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }

}