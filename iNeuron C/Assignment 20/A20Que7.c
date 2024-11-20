// Que7
// 7. Write a program to count the number of vowels and consonants in a string using a pointer.


#include<stdio.h>

int main()
{
    int count=0;
    printf("Enter a string containing alphabets only: ");
    char c[20], *ptr, *startp;
    fgets(c,20,stdin);
    startp=c;
    ptr=c;
    while(*ptr!='\n')
    {
        if(*ptr=='a' || *ptr=='e' || *ptr=='i' || *ptr=='o' || *ptr=='u' || *ptr=='A' || *ptr=='E' || *ptr=='I' || *ptr=='O' || *ptr=='U')
        {
            count++;
        }
        ptr++;
    }
    printf("There are %d vowels and %d constonants including spaces.", count, (ptr-startp)-count);

}
