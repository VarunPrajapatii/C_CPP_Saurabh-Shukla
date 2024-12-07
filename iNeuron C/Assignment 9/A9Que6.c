// Que6
// 6. Program to check whether a year is a leap year or not. Using switch statement

#include<stdio.h>
int main()
{
    int n, x;
    printf("Enter an year: ");
    scanf("%d", &n);
    


    switch (n%100==0)
    {
        case 1: 
            switch(n%400==0)
            {
                case 1:
                    printf("%d is a leap year.", n);
                    break;
                case 0:
                    printf("%d is a non leap year.", n);
                    break;
            }
            break;
        case 0:
            switch(n%4==0)
            {
                case 1:
                    printf("%d is a leap year.", n);
                    break;
                case 0:
                    printf("%d is not a leap year.", n);
            }
    }
}
