// Que10
// 10. Write a function to find the repeated character in a given string.

#include<stdio.h>

void findrep(char []);

int main()
{
    char c[50];
    printf("This program find the repeated character in a given string.\n");
    printf("Enter string: ");
    fgets(c, 50, stdin);
    findrep(c);
}


void findrep(char a[])
{
    char b[50];
    int i, j, flag=0, k=0;
    for(i=0; a[i]; i++)
    {
        flag=0;
        for(j=i+1; a[j]; j++)
        {
            if(a[j]==a[i])
            {
                flag++;
                a[j]=32;
            }
        }
        if(flag>0)
        {
            b[k]=a[i];
            k++;
        }
        
    }
    b[k]='\0';
    printf("These charaters are repeated in string: ");
    for(i=0; b[i]; i++)
    {
        if(b[i]==32)
            continue;
        printf("%c ", b[i]);
    }


}