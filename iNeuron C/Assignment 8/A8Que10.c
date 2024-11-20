#include<stdio.h>
int main()
{
    int i, j, a=1;
    for(i=0; i<4; i++)
    {
        a=1;
        for(j=1;j<=7;j++)
        {            
            if(j>=1&&j<=(4-i) || j>=(4+i))
            {

                if(j<4)
                {
                    printf("%d", a++);
                    
                }
                else
                {
                    printf("%d", a--);
                }
            }
            else
            {
                printf(" ");                
                if(j==4)
                    a--;
            }
        }
        printf("\n");
    }
}