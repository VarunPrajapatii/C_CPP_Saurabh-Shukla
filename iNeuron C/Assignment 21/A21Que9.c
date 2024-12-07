// Que9
// 9. Write a program to store information of n students and display them using structure.

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
    printf("Enter number of students: ");
    int n;
    scanf("%d", &n);
    struct student s[n];
    input(s,n);
    display(s, n);
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
        s1[i].name[strcspn(s1[i].name, "\n")]='\0';
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