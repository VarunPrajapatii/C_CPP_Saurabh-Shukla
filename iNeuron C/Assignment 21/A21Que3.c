// Que3
// 3. Write a function to display employee data. [ Refer structure from question 1 ]

#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[20];
    float salary;
};

struct Employee input();
void display(struct Employee);


int main()
{
    struct Employee e1;
    e1=(input());
    display(e1);
    return 0;
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


void display(struct Employee e)
{
    printf("%d %s %f", e.id, e.name, e.salary);
}