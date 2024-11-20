// Que8
// 8. Define overloaded functions to calculate area of circle, area of rectangle and area of triangle


#include<iostream>
#include<math.h>
using namespace std;

float area(int);
int area(int, int);
float area(int, int, int);

float area(int r)
{
    return (3.14*r*r);
}

int area(int l, int b)
{
    return l*b;
}

float area(int a, int b, int c)
{
    float area;
    int s;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));

    return area;
}




int main()
{
    int r, l, b, x, y, z;
    cout<<"This program calculate area of citcle, area of rectangle and area of triangle."<<endl;
    cout<<"Enter radius of circle: ";
    cin>>r;
    cout<<"The area of circle is: "<<area(r)<<endl;
    cout<<"Enter length and breath of rectangle: ";
    cin>>l>>b;
    cout<<"The area of rectangle is: "<<area(l,b)<<endl;
    cout<<"Enter sides of triangle: ";
    cin>>x>>y>>z;
    cout<<"Area of the triangle is: "<<area(x,y,z)<<endl;
    return 0;
}