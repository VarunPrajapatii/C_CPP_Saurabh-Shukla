// Que10
// 10. Write functions using function overloading to add two numbers having different data types.


#include<iostream>
using namespace std;

int add(int,int);
float add(float, float);

int add(int a, int b)
{
    return a+b;
}

float add(float a, float b)
{
    return a+b;
}


int main()
{
    float a,b;
    cout<<"This program add two numbers having different data types"<<endl;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b);
    return 0;
}