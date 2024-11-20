// Que4
// 4. Define a class Counter and Write a program to Show Counter using Constructor.

#include<iostream>
using namespace std;

int count;

class Counter
{
    public:
        Counter()
        {
            count++;
        }
};

int main()
{
    cout<<"Count value before function call - "<<count<<endl;
    Counter c1;
    cout<<"Count value after function call - "<<count<<endl;
    return 0;
}