// Que2
// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

#include<stdio.h>
#include<stdlib.h>

int main() {
    int x, a, b, result;
    while(1) {
        printf("\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &x);

        switch(x) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = a + b;
                printf("Sum is %d.\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = a - b;
                printf("Difference is %d.\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                result = a * b;
                printf("Product is %d.\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d %d", &a, &b);
                if(b == 0) {
                    printf("Error! Division by zero is not allowed.\n");
                } else {
                    result = a / b;
                    printf("Quotient is %d.\n", result);
                }
                break;
            case 5:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please select a valid option.\n");
        }
    }
    return 0;
}
