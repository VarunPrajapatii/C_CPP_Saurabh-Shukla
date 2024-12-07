// Que4
// 4. Write a function to transform string into uppercase

#include<stdio.h>

void strupr(char []);

int main()
{
    char c[50];
    printf("This program transform string into uppercase.\n");
    printf("Enter string: ");
    fgets(c, 50, stdin);
    c[strcspn(c, "\n")] = '\0';
    strupr(c);
    return 0;
}

void strupr(char a[50])
{
    int i;
    for(i=0; a[i]; i++)
    {
        if(a[i]>=97 && a[i]<=122)
        {
            a[i]=a[i]-32;
        }
    }
    printf("%s", a);
}