// Que2
// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x, a, b, c;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n\n");
    printf("Choose an option: \n");
    scanf("%d", &x);

    switch (x)
    {
    case 1:
        printf("Enter two numbers: \n");
        scanf("%d %d", &a, &b);
        c=a+b;
        printf("Sum is %d.", c);
        break;
    case 2:
        printf("Enter two numbers: \n");
        scanf("%d %d", &a, &b);
        c=a-b;
        printf("Difference is %d.", c);
        break;
    case 3:
        printf("Enter two numbers: \n");
        scanf("%d %d", &a, &b);
        c=a*b;
        printf("Multiplication is %d.", c);
        break;
    case 4:
        printf("Enter two numbers: \n");
        scanf("%d %d", &a, &b);
        c=a/b;
        printf("Division is %d.", c);
        break;
    case 5:
        exit(0);

    default:
        printf("Invalid Choice.");
        exit(0);

    }
}