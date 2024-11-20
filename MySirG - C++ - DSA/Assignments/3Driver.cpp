#include<iostream>
#include "2ExtendedArray.cpp"
using namespace std;

int main()
{
    ExtendedArray obj(20);
    obj.Append(10);
    obj.Append(20);
    obj.Append(10);
    obj.Append(13);
    obj.Append(10);
    obj.Append(20);
    obj.Append(13);
    obj.Append(40);
    obj.Append(16);
    obj.Append(13);
    obj.Append(10);
    // obj.RemoveDuplicate();
    // obj.PrintArray();
    cout<<"  "<<obj.SecondLargest();
}