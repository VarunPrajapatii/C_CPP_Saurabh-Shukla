// Que8
// 8. Define a class Bank and define member functions to read principal , rate of interest and year. Another member functions 
// to calculate simple interest and display it. Initialise all details using constructor.

#include<iostream>
using namespace std;

class Bank
{
    static float roi;
    int principal, year;
    float si=0;
    public:
        Bank(int p, int y)
        {
            principal=p;
            year=y;
        }
        void CalculateSI()
        {
            si=(principal*year*roi)/100;
            cout<<"Simple interest is "<<si;
        }

};

float Bank::roi=6;

int main()
{
    Bank c1(10000,5);
    c1.CalculateSI();
    return 0;

}