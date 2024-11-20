// Que4
// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle or not
// d. Exit

#include<stdio.h>
int main()
{
    int n, a, b, c;
    
    printf("1. Check whether a given set of three numbers are lenghts of an isosceles triangle or not.\n");
    printf("2. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not.\n");
    printf("3. Check whether a given set of three numbers are equilateral triangle or not.\n");
    printf("Choose an option: ");
    scanf("%d", &n);
    printf("Enter sides of triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    switch (n)
    {
    case 1:

        if(a==b || b==c || a==c)
                printf("Yes its a isosceles triangle.");
        else
            printf("No its not an isosceles triangle.");
        break;
    case 2:
        if((a*a)+(b*b)==(c*c) || (a*a)+(c*c)==(b*b) || (b*b)+(c*c)==(a*a))
            printf("Yes its an right angled triangle.");
        else
            printf("Its not an right angled triangle.");
        break;


    case 3:
        if(a==b && a==c)
            printf("Yes its an equilateral triangle.");
        else
            printf("No its not an equileteral triangle.");
        break;
        
    default:
        printf("Invalid Option.");
        break;
    }

}