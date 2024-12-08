// Que6
// 6. Define a class student and write a program to enter student details using constructor and define member function to display all the details.

#include<iostream>
#include<cstring>
using namespace std;

class student
{
    int rollno;
    char name[20];
    public:
        student(int r, const char *n)
        {
            rollno=r;
            strcpy(name, n);
        }
        void Display()
        {
            cout<<"Roll Number -  "<<rollno<<" and Name -  "<<name<<endl;
        }
};

int main()
{
    student s1(100, "Varun Prajapati");
    s1.Display();
    return 0;
}