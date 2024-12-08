// Que9
/*
9. Define a class Bill and define its member function get() to take detail of customer ,
calculateBill() function to calculate electricity bill using below tariff :
    Upto 100 unit RS. 1.20 per unit
    From 100 to 200 unit RS. 2 per unit
    Above 200 units RS. 3 per unit.
*/

#include<iostream>
#include<cstring>
using namespace std;

class Bill
{
    char name[20];
    int units;
    public:
        void get(const char *n, int u)
        {
            units=u;
            strcpy(name, n);
        }
        float calculateBill()
        {
            float result;
            if(units<=100)
            {
                result=1.20*units;
                return result;
            }
            else if(units>100 && units<=200)
            {
                result = 120+((units-100)*2);
                return result;
            }
            else
            {
                result=120+200+((units-200)*3);
                return result;
            }
        }
};

int main()
{
    Bill b1;
    b1.get("Varun", 358);
    cout<<"Bill is "<<b1.calculateBill()<<endl;
    return 0;
}