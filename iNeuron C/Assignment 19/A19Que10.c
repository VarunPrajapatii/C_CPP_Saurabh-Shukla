// Que10. Create an authentication system. It should be menu driven

#include <stdio.h>
#include <string.h>

#define MAX_USERS 100
#define MAX_LENGTH 20

char usernames[MAX_USERS][MAX_LENGTH];
char passwords[MAX_USERS][MAX_LENGTH];
int userCount = 0;
void registerUser();
void loginUser();
void resetPassword();
void displayMenu();

int main() {
    int choice;

    while (1) {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser();
                break;
            case 2:
                loginUser();
                break;
            case 3:
                resetPassword();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void displayMenu() {
    printf("\n==== Authentication System ====\n");
    printf("1. Register\n");
    printf("2. Login\n");
    printf("3. Reset Password\n");
    printf("4. Exit\n");
    printf("================================\n");
}

void registerUser() {
    if (userCount >= MAX_USERS) {
        printf("Error: Maximum user limit reached.\n");
        return;
    }
    char username[MAX_LENGTH];
    char password[MAX_LENGTH];
    printf("Enter a username: ");
    scanf("%s", username);

    // Check if username already exists
    for (int i = 0; i < userCount; i++) {
        if (strcmp(usernames[i], username) == 0) {
            printf("Error: Username already exists.\n");
            return;
        }
    }
    printf("Enter a password: ");
    scanf("%s", password);
    // Store the new user
    strcpy(usernames[userCount], username);
    strcpy(passwords[userCount], password);
    userCount++;

    printf("Registration successful!\n");
}

void loginUser() {
    char username[MAX_LENGTH];
    char password[MAX_LENGTH];

    printf("Enter your username: ");
    scanf("%s", username);
    printf("Enter your password: ");
    scanf("%s", password);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(usernames[i], username) == 0 && strcmp(passwords[i], password) == 0) {
            printf("Login successful! Welcome, %s.\n", username);
            return;
        }
    }
    printf("Error: Invalid username or password.\n");
}

void resetPassword() {
    char username[MAX_LENGTH];
    char newPassword[MAX_LENGTH];

    printf("Enter your username: ");
    scanf("%s", username);

    for (int i = 0; i < userCount; i++) {
        if (strcmp(usernames[i], username) == 0) {
            printf("Enter your new password: ");
            scanf("%s", newPassword);
            strcpy(passwords[i], newPassword);
            printf("Password reset successful!\n");
            return;
        }
    }

    printf("Error: Username not found.\n");
}
