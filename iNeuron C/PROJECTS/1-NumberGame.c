#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a[15]={0};
    int i=0,j, num=0, flag, rando;
    // for(i=0; i<4; i++)
    // {
    //     for(j=0; j<4; j++)
    //     {
    //         a[i][j]=num+1;
    //         num=num+1;
    //     }
    // }
    while(i<15)
    {
        flag=0;
        rando=rand();
        num=(rando%15)+1;
        // printf("%d  ", num);
        for(j=0; j<i; j++)
        {
            if(a[i]==num)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            continue;
        }
        else
        {
            a[i]=num;
            i++;
        }
    }

    for(i=0; i<15; i++)
    {
        printf("%d ", a[i]);
    }

}