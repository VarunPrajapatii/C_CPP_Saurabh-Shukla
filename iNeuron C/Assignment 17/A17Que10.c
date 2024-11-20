// Que10
// 10. Write a program in C to Find the Frequency of Characters.

#include<stdio.h>
#include<string.h>
int main()
{
    char c[50];
    printf("This program Find the Frequency of Characters in given string.\n");
    printf("Enter string: \n");
    fgets(c,50,stdin);
    int i, j, l, temp=1;
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
    temp=1;
    for(i=0; i<l-1; i++)
    {
        if(c[i]==c[i+1])
        {
            temp++;
        }
        else
        {
            printf("Frequency of %c is %d.\n", c[i], temp);
            temp=1;
        }
    }
}



/*what you can do is make an array of 226 and put 0 at every place. and traverse the string once and just increment every the block of that array whose index is the ascii code 
of the character coming. then print the characters with index containig value greater than 0...*/