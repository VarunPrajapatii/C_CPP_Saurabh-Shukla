// Que2
// 2. Write a function to take input employee data from the user. [ Refer structure from question 1 ]

#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};


struct Employee input();


int main()
{
    struct Employee e1;
    e1=input();
    printf("%d %s %f", e1.id, e1.name, e1.salary);
}

struct Employee input()
{
    struct Employee e;
    printf("Enter Emplyee ID, Employee name, Emplyee Salary separated with enter keys: ");
    scanf("%d", &e.id);
    fflush(stdin);
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f", &e.salary);
    return e;
}