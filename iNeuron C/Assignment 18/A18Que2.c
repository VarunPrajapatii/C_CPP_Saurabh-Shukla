// Que2
// 2. Write a function to reverse a string.

#include<stdio.h>
#include<string.h>

void strreverse(char [50]);

int main()
{
    char c[50];
    printf("This program reverse a string.\n");
    printf("Enter String: ");
    fgets(c, 50, stdin);
    c[strcspn(c, "\n")] = '\0';
    strreverse(c);
    return 0;
}

void strreverse(char a[50])
{
    int start=0, end;
    end=strlen(a)-1;
    while(start < end) {
        char temp = a[start];
        a[start] = a[end];
        a[end] = temp;
        start++;
        end--;
    }
    printf("Reverse of string is %s.", a);
}