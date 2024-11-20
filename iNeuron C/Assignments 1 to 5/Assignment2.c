// Que1
// 1. Write a program to print unit digit of a given number

/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The unit digit is %d", n%10);
    return 0;
}
*/





// Que2
// 2. Write a program to print a given number without its last digit.

/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number without last digit is %d", n/10);
    return 0;
}
*/







// Que3
// 3. Write a program to swap values of two int variables

/*
#include<stdio.h>
int main()
{
    int a,b, temp;
    printf("Enter two numbers:");
    scanf("%d %d", &a, &b);
    temp=a;
    a=b;
    b=temp;
    printf("Numbers after swapping are %d and %d", a,b);
    return 0;
}
*/







// Que4
// 4. Write a program to swap values of two int variables without using a third variable.

/*
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Those two numbers after swap are %d and %d", a, b);
    return 0;
}
*/






// Que5
// 5. Write a program to input a three-digit number and display the sum of the digits.

/*
#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    sum=sum+n%10;
    n=n/10;
    sum+=n%10;
    n=n/10;
    sum+=n%10;
    printf("Sum of those three digits is %d.", sum);
    return 0;
}
*/







// Que6
// 6. Write a program which takes a character as an input and displays its ASCII code.

/*
#include<stdio.h>
int main()
{
    char n;
    printf("Enter a character: ");
    scanf("%c", &n);
    printf("AASCI value of %c is %d", n, n);
    return 0;
}
*/










// Que7
// 7. Write a program to find the position of first 1 in LSB.


// #include<stdio.h>
// int main()
// {
//     int x=6, count=1;
//     if(x&1==1)
//         printf("%d", count);
//     count++;
//     x=x>>1;
//     if(x&1==1)
//         printf("%d", count);
//     return 0;
// }









// Que8
// 8. Write a program to check whether the given number is even or odd using a bitwise operator.

/*
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n&1==1)
    {
        printf("Number is odd.");
    }
    else{
        printf("Number is even.");
    }
    return 0;
}
*/







// Que9
// 9. Write a program to print size of an int, a float, a char and a double type variable

/*
#include<stdio.h>
int main()
{
    int a,i, f, c, d;
    float b;
    char ch;
    double du;
    i=sizeof(a);
    f=sizeof(b);
    c=sizeof(ch);
    d=sizeof(du);
    printf("Size of int, float, char, double type variables are %d, %d, %d and %d respectively.", i,f,c,d);
    return 0;
}
*/







// Que10
// 10. Write a program to make the last digit of a number stored in a variable as zero. (Example - if x=2345 then make it x=2340)

/*
#include<stdio.h>
int main()
{
    int n,x;
    printf("Enter a number: ");
    scanf("%d", &n);
    x=n/10;
    x=x*10;
    printf("The number after changes is %d.", x);
    return 0;
}
*/







// Que11
// 11. Write a program to input a number from the user and also input a digit. 
// Append a digit in the number and print the resulting number. (Example - number=234 and digit=9 then the resulting number is 2349)

/*
#include<stdio.h>
int main()
{
    int n, a;
    printf("Enter a number: \n");
    scanf("%d", &n);
    printf("Now enter the digit you want to append: ");
    scanf("%d", &a);
    n*=10;
    n+=a;
    printf("The number after changes is %d.", n);
    
    
    return 0;
}
*/







// Que 12
// 12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and convert it into USD.

/*
#include<stdio.h>
int main()
{
    
    double d, amount;
    printf("Enter amount in INR: ");
    scanf("%lf", &amount);
    d=amount/76.23;
    printf("The amount in USD is %lf", d);
    return 0;

}
*/





// Que13
// 13. Write a program to take a three-digit number from the user and rotate its digits by one position towards the right.

/*
#include<stdio.h>
int main()
{
    int n, a;
    printf("Enter a three digit number: ");
    scanf("%d", &n);
    a=n;
    a=n%10;
    n=n/10;
    a=a*100;
    n=n+a;
    printf("The number after rotation is %d.", n);

    return 0;
}
*/