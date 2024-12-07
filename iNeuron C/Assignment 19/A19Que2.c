// Que2
// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>

int main()
{
    char c[10][20], a[10][20], min, temp[20];
    int i, j, flag[10], k=0, index;
    printf("This program sort 10 city names taken from user.\n");
    printf("Enter 10 city names in small letters separated by enter key:\n");
    for(i=0; i<10; i++)
    {
        fgets(c[i], 20, stdin);
        c[i][strcspn(c[i], "\n")] = '\0';
    }

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 9 - i; j++)
        {
            if(strcmp(c[j], c[j+1]) > 0)
            {
                strcpy(temp, c[j]);
                strcpy(c[j], c[j+1]);
                strcpy(c[j+1], temp);
            }
        }
    }
    printf("Sorted list of cities are:\n");
    for(i=0; i<10; i++)
    {
        printf("%s\n", c[i]);
    }


}


/*
strcpr() se kar sakte hai. string comparision ka function hai ye jo return karta hai 0 agar string same hai toh ya toh -1 agar pehli string choti hai dictionary
order ke hisaab se aur +1 agar pehli string badi hai dictionary order ke hisaab se... toh loop lagao aur swap karo taaki cities order mein sort ho jaey. Input ke
liye gets istemaal karna na ki fgets kyuki ho sakta hai problem ho jaey fgets mein kyuki last mein aata hai \n string ke...
*/