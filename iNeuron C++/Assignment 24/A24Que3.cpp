// Que3
// 3. Define a function to calculate x raised to the power y.

#include<iostream>
using namespace std;

int main()
{
    int x,y, ans=1;
    cout<<"This program calculates x raised to the power y."<<endl;
    cout<<"Enter base value: ";
    cin>>x;
    cout<<"Enter power: ";
    cin>>y;
    while(y!=0)
    {
        ans=ans*x;
        y--;
    }
    cout<<"Answer is: "<<ans;

}