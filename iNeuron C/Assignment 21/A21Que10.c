// Que10
// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a structure named Marks having 
// elements roll no., name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.


#include<stdio.h>
#include<string.h>

struct Marks
{
    int rollno, chem_marks, math_marks, phy_marks;
    char name[30];
};

void input(struct Marks [], int);
float calculatePer(struct Marks);

int main()
{
    printf("This program lets you enters marks of 5 students and calculates percentage.\n");
    struct Marks s1[5];
    int i;
    float per;
    input(s1, 5);
    for(i=0; i<5; i++)
    {
        printf("Percentage of %s is %f.\n", s1[i].name, calculatePer(s1[i]));
    }
}

void input(struct Marks s[], int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("Enter Roll number, Name, Marks of chemistry, Maths and Physics, out of 100, respecively, separated by enter key:\n");
        scanf("%d", &s[i].rollno);
        fflush(stdin);
        fgets(s[i].name, 30, stdin);
        s[i].name[strlen(s[i].name)-1]='\0';
        scanf("%d %d %d", &s[i].chem_marks, &s[i].math_marks, &s[i].phy_marks);
    }
}

float calculatePer(struct Marks s)
{
    float sum=0, per;
    sum=s.chem_marks + s.math_marks + s.phy_marks;
    per=(sum/300)*100;
    return per;
}