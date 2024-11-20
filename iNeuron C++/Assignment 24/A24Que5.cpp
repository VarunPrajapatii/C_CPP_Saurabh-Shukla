// Que5
// 5. Define a function to check whether a given number is a term in a Fibonacci series or not.

#include<iostream>
using namespace std;

int checkfib(int);
int fib(int);


int fib(int n)
{
    if(n==1 || n==2)
    {
        return 1;
    }
    return (fib(n-1)+fib(n-2));
}

int checkfib(int n)
{
    int i;
    for(i=1; i<n; i++)
    {
        if(n==fib(i))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int n;
    cout<<"This program check whether a given number is a term in a Fibonacci series or not."<<endl;
    cout<<"Enter number: ";
    cin>>n;
    int result;
    result=checkfib(n);
    if(result==1)
        cout<<"Number is in the Fibonacci Series.";
    else
        cout<<"Number is not in the Fibonacci Series";

}