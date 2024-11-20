// Que9
// 9. Write a function to reverse a string word wise. 
// (For example if the given string is “Mysirg Education Services” then the resulting string should be “Services Education Mysirg” )

#include<stdio.h>
#include<string.h>

void reversewordwise(char []);

int main()
{
    char c[500];
    printf("This program reverse a string word wise.\n");
    printf("Enter string: ");
    fgets(c, 500, stdin);
    reversewordwise(c);
    return 0;
}

void reversewordwise(char a[500])
{
    char b[500];
    int len, i, j, k=0;
    len=strlen(a);
    len--;
    for(i=len; i>=-1; i--)
    {
        if(a[i]==32 || i==-1)
        {
            for(j=i+1; a[j] && a[j]!='\n'; j++, k++)
            {
                b[k]=a[j];
                a[j-1]='\0';
            }
            b[k]=' ';
            k++;
        }
    }
    for(i=0; b[i]; i++)
    {
        printf("%c", b[i]);
    }
}

/*
array ke words ko separate karo, swap karke ek function banao which reverse the word, then poore string to start to last reverse karo...
*/