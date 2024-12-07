// Que9
// 9. Program to Convert even number into its upper nearest odd number Switch Statement.

#include<stdio.h>

int main() {
    int n;
    printf("Enter a even number: ");
    scanf("%d", &n);

    switch (n%2)
    {
    case 0:
        printf("Odd number: %d", n+1);
        break;
    
    case 1:
        printf("Its already an odd number");
    
    default:
        break;
    }
}