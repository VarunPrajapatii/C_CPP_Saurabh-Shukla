#include<stdio.h>
int main()
{
    int a, b, i, j;
    for(a=0; a<3; a++)
    {
        for(b=0; b<19; b++)
        {
            if((b>=(2-a) && b<=(6+a))  ||  (b>=(12-a) && b<=(16+a)))
                printf("*");            
            
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    // printf("*******VARUN*******\n");    //Lets try to print this line in loop...


    for(i=0; i<10; i++)
    {
        for(j=0; j<19; j++)
        {
            if(i==0 && j==7)
                printf("VARUN");
            if(i==0 && j>6 && j<=11)
                continue;
            if(j>=i && j<=(18-i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}