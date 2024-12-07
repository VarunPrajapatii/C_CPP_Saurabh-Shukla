// Que10
// 10. Write a program to print a string in reverse using a pointer

#include<stdio.h>

int main() {
    char a[50], *ptr;
    int last = 0, i;

    printf("Enter a string: ");
    fgets(a, 50, stdin);

    ptr = a;
    while (*(ptr + last) != '\n' && *(ptr + last) != '\0') {
        last++;
    }
    last--;
    printf("Reversed string: ");
    for (i = last; i >= 0; i--) {
        printf("%c", *(ptr + i));
    }
    printf("\n");

    return 0;
}
