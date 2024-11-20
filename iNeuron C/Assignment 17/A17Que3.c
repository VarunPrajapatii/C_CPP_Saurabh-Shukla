// Que3
// 3. Write a program to count vowels in a given string

#include<stdio.h>

int main()
{
    char c[20];
    int i, count=0;
    printf("Enter string: ");
    fgets(c, 20, stdin);
    for(i=0; c[i]; i++)
    {
        if(c[i]=='a' || c[i]== 'e' || c[i]=='i' || c[i]=='o' || c[i]=='u' || c[i]=='A' || c[i]== 'E' || c[i]=='I' || c[i]=='O' || c[i]== 'U')
            count++;
    }
    printf("There are %d vowels in the string.", count);
}