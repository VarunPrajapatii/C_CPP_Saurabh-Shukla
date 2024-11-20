// Que7
// 7. Define a class Box and write a program to enter length, breadth and height and
// initialise objects using constructor also define member functions to calculate volume of the box.

#include<iostream>
using namespace std;

class Box
{
    int length, breadth, height;
    public:
        Box(int l, int b, int h)
        {
            length=l;
            breadth=b;
            height=h;
        }
        int Volume()
        {
            return length*breadth*height;
        }
};

int main()
{
    Box b1(2,5,8);
    int ans;
    ans=b1.Volume();
    cout<<"Volume is "<<ans<<endl;
}