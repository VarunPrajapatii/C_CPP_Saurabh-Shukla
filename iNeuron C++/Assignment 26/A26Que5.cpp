// Que5
// 5. Define a class Date and write a program to Display Date and initialise date object using Constructors.

#include<iostream>
#include<cstring>
using namespace std;

class Date
{
    char month[20];
    int date, year;
    public:
        Date(int d, char *m, int y)
        {
            date=d;
            strcpy(month, m);
            year=y;

        }
        void Display()
        {
            cout<<date<<" "<<month<<" "<<year<<endl;
        }
};

int main()
{
    Date d1(6, "May", 2000);
    d1.Display();
    return 0;
}