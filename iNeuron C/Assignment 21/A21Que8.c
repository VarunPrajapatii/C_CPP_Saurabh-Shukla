// Que8
// 8. Write a program to store information of 10 students and display them using structure.

#include<stdio.h>
#include<string.h>

struct student
{
    int rollno;
    char name[30];
};

void input(struct student [], int);
void display(struct student [], int);


int main()
{
    struct student s[10];
    input(s,10);
    display(s, 10);
    return 0;

}

void input(struct student s1[], int size)
{
    int i;
    printf("Enter roll number and name of student separate with enter key:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &s1[i].rollno);
        fflush(stdin);
        fgets(s1[i].name, 30, stdin);
        s1[i].name[strlen(s1[i].name)-1]='\0';
    }
}

void display(struct student s1[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d %s\n", s1[i].rollno, s1[i].name);
    }
}