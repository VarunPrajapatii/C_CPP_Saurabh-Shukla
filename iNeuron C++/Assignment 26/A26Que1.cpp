// Que1
/*
1. Define a class Complex to represent a complex number with instance variables a and
    b to store real and imaginary parts. Also define following member functions
    a. void setData(int,int)
    b. void showData()
    c. Complex add(Complex)
*/


#include<iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
        void setData(int x, int y)
        {
            a=x;
            b=y;
        }
        void showData()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
        Complex add(Complex c)
        {
            Complex temp;
            temp.a=a+c.a;
            temp.b=b+c.b;
            return temp;
        }

};

int main()
{
    Complex c1, c2;
    c1.setData(5,9);
    c2.setData(2,5);
    c1.showData();
    c2.showData();
    return 0;
}