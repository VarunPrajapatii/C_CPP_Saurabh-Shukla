#include<iostream>
using namespace std;

class Factorial
{
    private:
       int n;
    public:
       void set_value(int x)
       {
          n=x;
       }
       void cal_fact()
       {
           int i;
           long long f=1;
           for(i=n;i!=0;i--)
           {
               f=f*i;
           }
           cout<<"factorial of "<<n<<" is "<<f<<endl;
       }   
};
int main()
{
    Factorial f1;
    f1.set_value(5);
    f1.cal_fact();
    return 0;
}