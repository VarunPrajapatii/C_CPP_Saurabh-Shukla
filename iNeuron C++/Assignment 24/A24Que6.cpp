// Que6
// 6. Define a function to swap data of two int variables using call by reference

#include<iostream>
using namespace std;

void swap(int &, int &);

void swap(int &x, int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main()
{
    int a,b;
    cout<<"This program swap data of two variables,"<<endl;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    swap(a,b);
    cout<<"Numbers are "<<a<<" and "<<b;
}