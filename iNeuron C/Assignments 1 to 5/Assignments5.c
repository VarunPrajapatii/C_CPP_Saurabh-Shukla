//                  Assignment - 5 A Job Ready Bootcamp in C++, DSA and IOT MySirG      
                                // More on Iterative Control Statements


// Que1
// 1. Write a program to print MySirG N times on the screen

// #include<stdio.h>
// int main()
// {
//     int x=1, n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while(x<=n)
//     {
//         printf("MySIrG\n");
//         x++;
//     }
//     return 0;
// }





// Que2
// 2. Write a program to print the first N natural numbers.

// #include<stdio.h>
// int main()
// {
//     int x=1,n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (x<=n)
//     {
//         printf("%d ", x);
//         x++;
//     }
//     return 0;
// }







// Que3
// 3. Write a program to print the first N natural numbers in reverse order

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n>0)
//     {
//         printf("%d ",n);
//         n--;
//     }
//     return 0;
// }







// Que4
// 4. Write a program to print the first N odd natural numbers

// #include<stdio.h>
// int main()
// {
//     int n, x=1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (x<=n)
//     {
//         printf("%d ",x);
//         x=x+2;
//     }
//     return 0;
// }








// Que5
// 5. Write a program to print the first N odd natural numbers in reverse order.

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n>=0)
//     {
//         if(n%2==0)
//             n=n-1;
//         printf("%d ",n);
//         n=n-2;
//     }
//     return 0;
// }








// Que6
// 6. Write a program to print the first N even natural numbers

// #include<stdio.h>
// int main()
// {
//     int n,x=0;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (x<=n)
//     {
//         printf("%d ",x);
//         x=x+2;
//     }
//     return 0;
// }






// Que7
// 7. Write a program to print the first N even natural numbers in reverse order

// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (n>=0)
//     {
//         if(n%2!=0)
//             n=n-1;
//         printf("%d ",n);
//         n=n-2;
//     }
//     return 0;
// }







// Que8
// 8. Write a program to print squares of the first N natural numbers

// #include<stdio.h>
// int main()
// {
//     int n, x=1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (x<=n)
//     {
//         printf("%d ",x*x);
//         x++;
//     }
//     return 0;
// }






// Que9
// 9. Write a program to print cubes of the first N natural numbers

// #include<stdio.h>
// int main()
// {
//     int n, x=1;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     while (x<=n)
//     {
//         printf("%d ",x*x*x);
//         x++;
//     }
//     return 0;
// }





// Que10
// 10. Write a program to print a table of N.

// #include<stdio.h>
// int main()
// {
//     int n,i=1;
//     printf("Enter a number to print table: ");
//     scanf("%d", &n);
//     while(i<=10)
//     {
//         printf("%dx%d = %d\n",n, i,i*n);
//         i++;
//     }
//     return 0;
// }