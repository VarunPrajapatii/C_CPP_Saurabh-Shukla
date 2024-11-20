#include<iostream>
using namespace std;
class person
{
    int age;
    int rank;

public:
    int getAge()
    {
        return age;
    }
    int getRank()
    {
        return rank;
    }
    person(int a , int r)
    {
        cout<<"Parameter constructor called"<<endl;
        age = a;
        rank = r;
    }
    person(const person &p)
    {
        cout<<"Copy constructor called"<<endl;
        age = p.age;
        rank = p.rank;
    }
    person()
    {
        cout<<"Default constructor called"<<endl;

    }
   person operator+(person p)
    {
    cout<<"Operator + called"<<endl;

      person temp;
      temp.age = age + p.age;
      temp.rank = rank + p.rank;
      return temp;
    }

  person operator++() //Pre Increment
    {
       person temp;
       temp.rank = ++rank;
       temp.age = ++age;
       return temp;
    }
   person operator++(int useless) //Post Increment
    {
       person temp;
       temp.rank = rank++;
       temp.age = age++;
       return temp;
    }
    void display()
    {
     cout<<"Person age "<<age<<" and Rank "<<rank<<endl;
    }
   friend ostream& operator<<(ostream &os, person p);
};
ostream& operator<<(ostream &os , person p)
{
 os<<"Operator called"<<endl;
 os<<"Person age "<<p.age<<" and Rank "<<p.rank<<endl;
 return os;
}

int main()
{
    person p1(20,23);
    person p2 = p1;
    person p3 = p1+ p2;

    (++p3).display();
    (p3++).display();
     p3.display();

    cout<<p3<<p1;


    cout<<"Prateek age "<<p1.getAge()<<" and Rank "<<p1.getRank()<<endl;
    cout<<"Jatin age "<<p2.getAge()<<endl;
    cout<<"Utkarsh age "<<p3.getAge()<<" and Rank "<<p3.getRank()<<endl;


}

