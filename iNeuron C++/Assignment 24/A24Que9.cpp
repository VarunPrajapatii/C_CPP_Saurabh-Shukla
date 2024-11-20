// Que9
// 9. Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.

#include<iostream>
using namespace std;

int compare(int,int);
float compare(float, float);


int compare(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    return b;
}

float compare(float c,float d)
{
    if(c>d)
    {
        return c;
    }
    return d;
}


int main()
{
    float c,d;
    cout<<"This program find maximum of two numbers and both the numbers can be integer or real."<<endl;
    cout<<"Enter two integers: ";
    cin>>c>>d;
    cout<<"The maximum is "<<compare(c,d)<<endl;

    return 0;
}