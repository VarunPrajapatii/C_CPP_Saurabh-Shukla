// Que3
// 3. Define a class Cube and calculate Volume of Cube and initialise it using constructor.

#include<iostream>
using namespace std;


class Cube
{
    int side;
    public:
        Cube(int s)
        {
            side=s;
        }
        int volume()
        {
            return side*side*side;
        }

};

int main()
{
    Cube c1(5);
    cout<<"Volume is: "<<c1.volume();
    return 0;
}