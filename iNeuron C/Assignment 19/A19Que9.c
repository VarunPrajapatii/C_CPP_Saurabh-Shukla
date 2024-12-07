// Que9. Write a program that asks the user to enter a username. If the username entered is one of the names in the 
// list then the user is allowed to calculate the factorial of a number. Otherwise, an error message is displayed

#include <stdio.h>
#include <string.h>

#define MAX_USERS 5
#define MAX_LENGTH 20

int factorial(int n) {
    if (n < 0) {
        return -1;
    }
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    char usernames[MAX_USERS][MAX_LENGTH] = {
        "tdprajapati",
        "varunprajapati",
        "swechhagupta",
        "shreyaghoshal",
        "princeraghuvanshi"
    };

    char enteredUsername[MAX_LENGTH];
    int isValid = 0;

    printf("Enter your username: ");
    scanf("%s", enteredUsername);
    for(int i=0; i<MAX_USERS; i++) {
        if(!strcmp(usernames[i], enteredUsername)) {
            isValid = 1;
            break;
        }
    }

    if(isValid) {
        printf("You can calculate the factorial!!\nEnter the number: ");
        int n;
        scanf("%d", &n);
        printf("The factorial of %d is %d.", n, factorial(n));
    } else {
        printf("Error: Username not Present!");
    }

    return 0;
}
