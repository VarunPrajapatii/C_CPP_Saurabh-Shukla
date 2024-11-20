// Que6.cpp
// 6. Write a C++ program to calculate an average of 3 numbers.

#include<iostream>
using namespace std;
int main()
{
    int n1,n2,n3,sum=0;
    cout<<"Enter 3 numbers to find the average: ";
    cin>>n1>>n2>>n3;
    sum=n1+n2+n3;
    cout<<"Average is "<<sum/3<<".";
}