// Que3
// 3. Write a program which takes the day number of a week and displays a unique greeting message for the day.

#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter day number of a week: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("\"There's no motivation that makes you consistent, your boring routine makes you consistent.\"");
        break;
    case 2:
        printf("\"A successful man is one who can lay a firm foundation with the bricks others have thrown at him.\"");
        break;
    case 3:
        printf("\"A wise man never seeks out war, but must always be ready for it.\"");
        break;
    case 4:
        printf("\"Good is not a thing you are, it is a thing you do.\"");
        break;
    case 5:
        printf("\"You are 'DOWN' but not 'OUT' my friend.\"");
        break;
    case 6:
        printf("\"There is no same in being weak. Shame is in staying weak.\"");
        break;
    case 7:
        printf("\"A goal without plan is just a wish.\"");
        break;
    default:
        printf("Actually you must work on your common sense. There are 7 days in a week.");
        break;
    }
    getch();
}