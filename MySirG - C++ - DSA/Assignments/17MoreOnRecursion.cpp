/*
DSA through C++

Assignment-17: More on Recursion

1. Write a recursive function to calculate sum of first N natural numbers

2. Write a recursive function to calculate sum of first N odd natural numbers

3. Write a recursive function to calculate sum of first N even natural numbers

4. Write a recursive function to calculate sum of squares of first N natural numbers

5. Write a recursive function to calculate factorial of a number

6. Write a recursive function to calculate sum of the digits of a given number

7. Write a recursive function to print binary of a given decimal number

8. Write a recursive function to find nth term of the Fibonacci series

9. Write a recursive function to calculate HCF of two numbers

10. Write a recursive function to calculate x power y.
*/

#include<iostream>
using namespace std;

double XpowY(double x, double y)     //Que10
{
    if(y==0)
        return 1;
    if(y>0)
        return XpowY(x, y-1)*x;
    else
        return XpowY(x,y+1)*(1/x);
}

int HCF(int a, int b)   //Que9
{
    if(a==0)
        return b;
    if(b==0)
        return a;
    if(a>=b)
        return (HCF(a%b, b));
    if(a<b)
        return (HCF(b%a, a));
}


int NthFibb(int n)      //Que8
{
    if(n==0 || n==1)
        return n;
    return NthFibb(n-1)+NthFibb(n-2);
}


void PrintBinary(int n)     //Que7
{
    if(n==1)
        cout<<"1";
    else if(n==0)
    {
        cout<<"0";
    }
    else
    {
        PrintBinary(n/2);
        cout<<n%2;                  //vaise agar chaho toh right shift << ka use bhi kar sakte ho...
    }
}


int SumDigits(int n)    //Que6
{
    if(n/10==0)
        return n;
    return (n%10)+SumDigits(n/10);
}


int fact(int n)     //Que5
{
    if(n==1)
        return 1;
    return n*fact(n-1);
}


int SumNSqr(int n)      //Que4
{
    if(n==1)
        return 1;
    return (n*n)+SumNSqr(n-1);
}


int SumNEven(int n)     //Que3
{
    if(n==1)
        return 2;
    return 2*n+SumNEven(n-1);
}


int SumNOdd(int n)      //Que2
{
    if(n==1)
        return 1;
    return (2*n-1)+SumNOdd(n-1);
}


int SumN(int n)     //Que1
{
    if(n==1)
        return 1;
    else
    {
        return n+SumN(n-1);
    }
}


int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    // cout<<SumN(n);
    // cout<<endl<<SumNOdd(n);
    // cout<<endl<<SumNEven(n);
    // cout<<endl<<SumNSqr(n);
    // cout<<endl<<fact(n);
    // cout<<endl<<SumDigits(n);
    // PrintBinary(n);
    // cout<<endl<<NthFibb(n);
    // cout<<endl<<HCF(50,6);
    // cout<<endl<<XpowY(2,10);
   
}