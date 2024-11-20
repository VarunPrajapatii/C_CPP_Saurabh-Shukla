// Que8
// 8. Write a C++ program to swap values of two int variables without using third variable

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers to swap them: ";
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Swapped numbers are: "<<a<<" and "<<b<<".";
}