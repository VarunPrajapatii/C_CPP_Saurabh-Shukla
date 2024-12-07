// Que7
// 7. Write a function to check whether a given string is palindrome or not.

#include<stdio.h>
#include<string.h>

int checkPalindrome(char [50]);

int main()
{
    char c[50], ans;
    printf("This program checks whether given string is palindrome or not.\n");
    printf("Enter string: ");
    fgets(c, 50, stdin);
    c[strcspn(c, "\n")] = '\0';
    ans=checkPalindrome(c);
    if(ans==0)
        printf("Its not a palindrome string.");
    else
        printf("Its a palindrome string.");
}

int checkPalindrome(char a[50])
{
    int start=0, end;
    end=strlen(a)-1;
    while(start<end) {
        if(a[start] == a[end]) {
            start++;
            end--;
        } else return 0;
    }
    return 1;
}




/*
loop lagao jisme starting mein i word ke pehle char ko point karra hai, j char ke last elemet ko point karra hai (point karra matlab i ke andar vo wala 
index hai, pointer ki baat nahi karra.) aur i++ au j-- karke dono ko equal kar ke check karrey jab tak i<=j hai. agar kahin equal na ho toh matlab palindrome 
nahi hai toh break karke baahar aajao... 
*/