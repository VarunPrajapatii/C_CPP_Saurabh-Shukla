// Que9
// 9. Write a C++ program to find the maximum of two numbers.


#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    if(a>b)
    {
        cout<<"Greater number is "<<a;
    }
    else if (a<b)
    {
        cout<<"Greater number is "<<b;
    }
    else
    {
        cout<<"Numbers are equal.";
    }
    
}