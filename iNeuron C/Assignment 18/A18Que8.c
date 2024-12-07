// Que8
// 8. Write a function to count words in a given string

#include<stdio.h>
#include<string.h>

int countword(char [500]);

int main()
{
    char c[500];
    int ans;
    printf("This program countr words in a string.\n");
    printf("Enter string: ");
    fgets(c, 500, stdin);
    c[strcspn(c, "\n")] = '\0';
    ans=countword(c);
    printf("There are %d words in the string.", ans);
    return 0;
}

int countword(char a[500])
{
    int count=0, i=0;
    while (a[i] == ' ') {
        i++;
    }
    for(; a[i]; i++) {
        if (a[i] != ' ' && (a[i + 1] == ' ' || a[i + 1] == '\0'))
            count++;
    }
    return count;
}