// Que2
// 2. Write a program to count the occurrence of a given character in a given string.

#include<stdio.h>

int main()
{
    int count=0, i;
    char c[20],ch;
    printf("Enter the string: ");
    fgets(c, 20, stdin);
    printf("Enter the character: ");
    scanf("%c", &ch);
    for(i=0; c[i]!='\0'; i++)
    {
        if(c[i]==ch)
        {
            count=count+1;
        }
    }
    printf("%c occures %d times.", ch, count);
    return 0;
}