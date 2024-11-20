// Que2
/*
2. Define a class Time to represent a time with instance variables h,m and s to store
hour, minute and second. Also define following member functions
    a. void setTime(int,int,int)
    b. void showTime()
    c. void normalize()
    d. Time add(Time)
*/

#include<iostream>
using namespace std;

class Time
{
    int h, m, s;
    public:
        void setTime(int a, int b, int c)
        {
            h=a;
            m=b;
            s=c;
        }
        void showTime()
        {
            cout<<h<<" hr "<<m<<" min "<<s<<" sec"<<endl;
        }
        void normalize()
        {

        }
        Time add(Time t)
        {
            Time temp;
            temp.h=h+t.h;
            temp.m=m+t.m;
            temp.s=s+t.s;
            return temp;
        }
};

int main()
{
    Time t1, t2;
    t1.setTime(5,31,28);
    t2.setTime(1,50,12);
    t1.showTime();
    t2.showTime();
    (t1.add(t2)).showTime();
    return 0;
}