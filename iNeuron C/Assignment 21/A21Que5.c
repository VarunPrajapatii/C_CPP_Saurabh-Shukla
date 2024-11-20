// Que5
// 5. Write a function to sort employees according to their salaries [ refer structure from question 1]

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
void sort (struct Employee [], int);

int main()
{
    printf("This program sort employees according to their salaries.\n");
    struct Employee e[5];
    int i;
    for(i=0; i<5; i++)
    {
        e[i]=input();
    }
    sort(e,5);
    
    printf("Sorted list according to salaries is:\n");
    
    for(i=0; i<5 ; i++)
    {
        display(e[i]);
        printf("\n");
    }

    
    return 0;
}

void sort(struct Employee e[], int size)
{
    int i,j;
    struct Employee temp;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1-i ; j++)
        {
            if(e[j].salary>e[j+1].salary)
            {
                temp=e[j];
                e[j]=e[j+1];
                e[j+1]=temp;
            }
        }
    }
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

void display(struct Employee e)
{
    printf("%d %s %f", e.id, e.name, e.salary);
}
