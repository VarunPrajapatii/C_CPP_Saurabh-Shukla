// Que2
// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

#include<stdio.h>
#include<string.h>

void swapstr(char* , char*);

int main()
{
    char a[20]="Varun Prajapati", b[20]="Aditya Raghuvanshi";
    swapstr(a,b);
    printf("%s and", a);
    printf(" %s", b);

}

void swapstr(char* p, char* q)
{
    char temp[20];
    strcpy(temp,p);
    strcpy(p,q);
    strcpy(q,temp);
}