// Que9
// 9. Write a C program to sort a string array in ascending order.

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    printf("This program sort a string array in ascending order.\n");
    printf("Enter string: \n");
    fgets(c,50,stdin);
    int i, j, l, temp;
    l=strlen(c);
    for(i=0; i<l-1; i++)
    {
        for(j=0; j<l-2-i; j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j+1]=temp;
            }
        }
    }
    printf("Sorted string looks like %s", c);
}