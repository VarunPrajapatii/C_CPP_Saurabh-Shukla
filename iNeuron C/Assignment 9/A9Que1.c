// Que1
// 1. Write a program which takes the month number as an input and display number of days in that month.


#include<stdio.h>
int main()
{
    int n, x;
    printf("Enter the month number: ");
    scanf("%d", &n);
    if(n==1||n==3||n==5||n==7||n==8||n==10||n==12)
    {
        x=1;
    }
    if(n==2)
    {
        x=2;
    }
    if(n==4||n==6||n==9||n==11)
    {
        x=3;
    }
    if(n>12)
    {
        x=4;
    }
    switch (x)
    {
    case 1:
        printf("There are 31 days in this month.");
        break;
    case 2:
        printf("There are 28 or 29 days in this month depending its a leap year or not.");
        break;
    case 3:
        printf("There are 30 days in this month.");
        break;
    default:
        printf("Please enter a valid month number.");
        break;
    }
}