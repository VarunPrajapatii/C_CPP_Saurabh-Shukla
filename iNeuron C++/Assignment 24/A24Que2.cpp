// Que2
// 2. Define a function to find the highest value digit in a given number.

#include<iostream>
using namespace std;

int HVD(int a)
{
    int dig=0,x;
    while(a!=0)
    {
        x=a%10;
        a=a/10;
        if(x>dig)
        {
            dig=x;
        }
    }
    return dig;
}

int main()
{
    int n, dig=0;
    cout<<"This program finds the highest value digit in a given number"<<endl;
    cout<<"Enter a number: ";
    cin>>n;
    dig=HVD(n);
    
    cout<<"The highest value digit is "<<dig<<".";
}