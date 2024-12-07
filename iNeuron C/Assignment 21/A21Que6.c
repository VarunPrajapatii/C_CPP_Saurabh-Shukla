// Que6
// 6. Write a function to sort employees according to their names [refer structure from question 1]

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
void sortByName (struct Employee [], int);

int main()
{
    printf("This program sort employees according to their names.\n");
    struct Employee e[5];
    int i;
    for(i=0; i<5; i++)
    {
        e[i]=input();
    }
    sortByName(e,5);
    
    printf("Sorted list according to names is:\n");
    
    for(i=0; i<5 ; i++)
    {
        display(e[i]);
        printf("\n");
    }

    
    return 0;
}

void sortByName(struct Employee e[], int size)
{
    struct Employee temp;
    int i,j;
    for(i=0; i<size-1; i++)
    {
        for(j=0; j<size-1-i; j++)
        {
            if(strcmp(e[j].name, e[j+1].name)>0)
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
