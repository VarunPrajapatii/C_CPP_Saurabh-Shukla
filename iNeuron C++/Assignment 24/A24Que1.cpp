// Que1
// 1. Define a function to check whether a given number is a Prime number or not.

#include<iostream>
using namespace std;

int checkPrime(int n)
{
    int i, flag=0;
    for(i=2; i<=n/2; i++)
    {
        flag=0;
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    return flag;
}


int main()
{
    int n,i, flag=0;
    cout<<"Enter a number to check whether its a prime number or not: ";
    cin>>n;
    flag=checkPrime(n);
    if(flag==1)
    {
        cout<<"Its not a prime number.";
    }
    else
    {
        cout<<"Its a prime number";
    }
}