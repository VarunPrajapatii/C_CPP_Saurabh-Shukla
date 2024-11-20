// Que1
// 1. Write a program to check whether a given number is positive or non-positive.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n<0)
    
//         printf("Number is negative.");
    
//     else
    
//             printf("Number is non negative.");
//     return 0;
// }







// Que2
// 2. Write a program to check whether a given number is divisible by 5 or not

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n%5==0)
//         printf("Number is divisible by 5.");
//     else
//         printf("Number not divisible by 5");
//     return 0;
    
// }






// Que3
// 3. Write a program to check whether a given number is an even number or an odd number.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n%2==0)
//         printf("Number is Even");
//     else
//         printf("Number is Odd");
//     return 0;
    
// }







// Que4
// 4. Write a program to check whether a given number is an even number or an odd number without using % operator.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n&1)
//         printf("Number is Odd");
//     else
//         printf("Number is Even");
//     return 0;
// }







// Que5
// 5. Write a program to check whether a given number is a three-digit number or not.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     n=n/10;
//     n=n/10;
//     n=n/10;
//     if(n==0)
//         printf("Number is a three digit number.");
//     else
//         printf("Number is not a three digit number.");
//     return 0;
    
// }


//                  OR



// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n>99&&n<1000)
//         printf("Number is a three digit number.");
//     else
//         printf("Number is not a three digit number.");
//     return 0;
// }








// Que6
// 6. Write a program to print greater between two numbers. Print one number of both are the same.

// #include<stdio.h>
// int main()
// {
//     int a,b;
//     printf("Enter two numbers: ");
//     scanf("%d %d", &a, &b);
//     if(a>b)
//     {
//         printf("%d is greater.", a);
//     }
//     else
//     {
//         if(b>a)
//             printf("%d is greater.", b);
//         else
//             printf("Both the numbers %d are same.", a);
//     }
//     return 0;
// }







// Que7
// 7. Write a program to check whether roots of a given quadratic equation are real & distinct, real & equal or imaginary roots

// #include<stdio.h>
// int main()
// {
//     int a,b,c,d;
//     printf("Enter all three cofficients in order: ");
//     scanf("%d %d %d", &a, &b, &c);
//     d=(b*b)-(4*a*c);
//     if(d>0)
//         printf("Roots are real and distinct.");
//     else
//     {
//         if(d<0)
//             printf("Roots are imaginary.");
//         else
//             printf("Roots are real and equal.");
//     }
//     return 0;
// }







// Que8
// 8. Write a program to check whether a given year is a leap year or not.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a year: ");
//     scanf("%d", &n);
//     if(n%4==0)
//         printf("Its a leap year.");
//     else
//         printf("Its not a leap year.");
//         return 0;
// }







// Que9
// 9. Write a program to find the greatest among three given numbers. Print number once if the greatest number appears two or three times.

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);
//     if(a>b)
//     {
//         (a>c)?printf("%d", a):printf("%d", c);
//     }
//     else
//     {   
//         (b>c)?printf("%d", b):printf("%d", c);

//     }
//     return 0;
// }








// Que10
// 10. Write a program which takes the cost price and selling price of a product from the user. Now calculate and print profit or loss percentage.

// #include<stdio.h>
// int main()
// {
//     int cp, sp ;
//     float pr;
//     printf("Enter cost price: ");
//     scanf("%d", &cp);
//     printf("Enter seling price: ");
//     scanf("%d", &sp);
//     pr=(sp-cp);
//     pr=pr/cp;
//     if(pr>0)
//         printf("its Profit of %f%%", pr*100);
//     else
//         printf("Its loss of %f%%", pr*100);
//     return 0;
// }








// Que11
// 11. Write a program to take marks of 5 subjects from the user. 
// Assume marks are given out of 100 and passing marks is 33. Now display whether the candidate passed the examination or failed.

// #include<stdio.h>
// int main()
// {
//     int a,b,c,d,e;
//     float mar;
//     printf("Enter all 5 subjects marks our of 100: ");
//     scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//     mar=a+b+c+d+e;
//     mar/=500;
//     if(mar>=0.33)
//         printf("Your Passed.");
//     else
//         printf("Your failed.");
//     return 0;
// }








// Que12
// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

// #include<stdio.h>
// int main()
// {
//     char c;
//     int a;
//     printf("Enter a alphabet: ");
//     scanf("%d", &c);
//     a=(int)(c);
//     if(c>64&&c<91)
//     {
//         printf("Its a capital letter alphabet.");
//     }
//     else{
//         if(c>96&&c<122)
//         {
//             printf("Its a small letter alphabet.");
//         }
//         else
//         {
//             printf("Its not an alphabet.");
//         }
//     }
//     return 0;    
// }








// Que13
// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n%2==0&&n%3==0)
//     {
//         printf("THe number is divisible both 2 and 3.");
//     }
//     else
//         printf("THe number is not divisible by 2 and 3 both.");
//     return 0;
    
// }








// Que14
// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n%7==0||n%3==0)
//     {
//         printf("The number is divisible by 3 or 7.");
//     }
//     else
//         printf("THe number is not divisible by 3 or 7.");
//     return 0;
// }







// Que15
// 15. Write a program to check whether a given number is positive, negative or zero.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if(n>0)
//     {
//         printf("The number is positive.");
//     }
//     else
//     {
//         if (n<0)
//         {
//             printf("The number is negative.");
//         }
//         else
//             printf("The number is zero.");
        
//     }
//     return 0;
// }







// Que16
// 16. Write a program to check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character.

// #include<stdio.h>
// int main()
// {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c", &c);
//     if(c>=0 && c<=47)
//     {
//         printf("Its a character.");
//     }
//     else
//     {
//         if(c>=48 && c<=57)
//         {
//             printf("Its a digit.");
//         }
//         if(c>=58 && c<=64)
//         {
//             printf("Its a symbol.");
//         }
//         if(c>=65 && c<=90)
//         {
//             printf("Its a Capital letter.");
//         }
//         if(c>=91 && c<=96)
//         {
//             printf("Its a symbol.");
//         }
//         if(c>=97 && c<=122)
//         {
//             printf("Its a Small letter.");
//         }
//     }
// }




// Que17
// 17. Write a program which takes the length of the sides of a triangle as an input. 
// Display whether the triangle is valid or not.

// #include<stdio.h>
// int main()
// {
//     int a,b,c;
//     printf("Enter sides of triangle: ");
//     scanf("%d %d %d", &a,&b,&c);
//     if(a+b>c || b+c>a || c+a>b)
//         printf("Triangle is valid.");
//     else
//         printf("Triangle is invalid.");
//     return 0;   
// }







//  Que18
// 18. Write a program which takes the month number as an input and display number of days in that month

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter month number: ");
//     scanf("%d", &n);
//     if (n==1||n==3||n==5||n==7||n==8||n==10||n==12)
//     {
//         printf("There are 31 days in the month.");
//     }
//     else
//     {
//         if(n==2)
//             printf("There are 28/29 days in this month.");
//         else
//             if(n>12)
//             {
//                 printf("tere baap ne bhi dekhe hai 12 mahine se zyada kabhi ek saal mein.");
//             }
//             else
//             {
//                 printf("There are 30 days in this month.");

//             }
//     }
//     return 0;
// }