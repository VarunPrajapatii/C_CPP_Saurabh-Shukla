// Que8
// 8. Write a function to print PASCAL Triangle. (TSRN)

#include<stdio.h>

void pascaltriangle(int);
int nCr(int, int);
int fact(int);

int main()
{
    int rows;
    printf("Enter number of rows of pascal triangle you want to get printed: ");
    scanf("%d", &rows);
    pascaltriangle(rows);
    

}

int nCr(int n, int r)
{
    int a;
    a=fact(n)/(fact(n-r)*fact(r));
    return a;
}


int fact(int n)
{
    int i, f=1;
    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
    return f;
}

void pascaltriangle(int rows)
{
    int i, j, x=0;
    for(i=1; i<=rows; i++)
    {
        x=0;
        for(j=1; j<=2*rows-1; j++)
        {
            if(j>=rows+1-i && j<=rows+1+i)
            {
                if(j<=rows)
                {

                    if(i%2==0 && j%2!=0)
                    {
                        printf("%d", nCr(i-1, x));
                        x++;
                    }
                    else
                    {
                        if(i%2!=0 && j%2==0)
                        {
                            printf("%d", nCr(i-1, x));
                            x++;
                        }
                        else
                            printf(" ");
                    }
                }
                else
                {
                    if(j==rows)
                        x--;
                    if(i%2==0 && j%2!=0)
                    {
                        printf("%d", nCr(i-1, x));
                        x++;
                    }
                    else
                    {
                        if(i%2!=0 && j%2==0)
                            printf("%d", nCr(i-1, x));
                        else
                            printf(" ");
                    }
                }
            }
            else
                printf(" ");
        }
        printf("\n");
    }
}