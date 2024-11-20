// Que10
// 10. Define a class StaticCount and create a static variable. Increment this variable in a
// function and call this 3 times and display the result.

#include<iostream>
using namespace std;

class StaticCount
{
    static int k;
    public:
        int incr()
        {
            k++;
            return k;
        }
};

int StaticCount::k;

int main()
{
    int result;
    StaticCount s1;
    result=s1.incr();
    result=s1.incr();
    result=s1.incr();
    cout<<"The result is "<<result;
}