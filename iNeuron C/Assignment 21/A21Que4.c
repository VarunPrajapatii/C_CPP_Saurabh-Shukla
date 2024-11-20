// Que4
// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

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
int highestsalary(struct Employee []);

int main()
{
    printf("This program find the highest salary employee from a given array of 10 employees.\n");
    struct Employee e[10];
    int i, index;
    for(i=0; i<10; i++)
    {
        e[i]=input();
    }
    index=highestsalary(e);
    printf("The highest salaried employee is: ");
    display(e[index]);
    return 0;
}

struct Employee input()
{
    struct Employee e;
    printf("Enter Id, Name and salary of the Employee separated with enter keys: ");
    scanf("%d", &e.id);
    fflush(stdin);
    fgets(e.name, 20, stdin);
    e.name[strlen(e.name)-1]='\0';
    scanf("%f", &e.salary);
    return e;
}

int highestsalary(struct Employee e[])
{
    int i, index=0, salary=e[0].salary;
    for(i=0; i<10; i++)
    {
        if(salary<e[i].salary)
        {
            salary=e[i].salary;
            index=i;
        }
    }
    return index;
}

void display(struct Employee e)
{
    printf("%d %s %f", e.id, e.name, e.salary);
}
