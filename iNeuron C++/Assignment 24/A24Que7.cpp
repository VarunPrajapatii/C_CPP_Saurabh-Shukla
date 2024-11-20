// Que7
// 7. Write a function using the default argument that is able to add 2 or 3 numbers.

#include<iostream>
using namespace std;

int add(int,int,int=0);

int add(int x, int y, int z)
{
    return(x+y+z);
}


int main()
{
    int a,b,c,d,e;
    cout<<"This program add 2 or 3 numbers using default argument."<<endl;
    cout<<"Enter 2 numbers: ";
    cin>>a>>b;
    cout<<"Sum is "<<add(a,b)<<endl;
    cout<<"Enter 3 numbers: ";
    cin>>c>>d>>e;
    cout<<"Sum is "<<add(c,d,e);
    return 0;
}