// Que4
// 4. Write a function to find the highest salary employee from a given array of 10 employees. [ Refer structure from question 1]

#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[20];
    float salary;
};


struct Employee input();
void display(struct Employee);

int main() {
    struct Employee e1;
    e1 = input();
    display(e1);
    return 0;
}

struct Employee input() {
    struct Employee e;

    printf("Enter Employee ID: ");
    scanf("%d", &e.id);

    while (getchar() != '\n');

    printf("Enter Employee Name: ");
    fgets(e.name, 20, stdin);

    e.name[strcspn(e.name, "\n")] = '\0';

    printf("Enter Employee Salary: ");
    scanf("%f", &e.salary);

    return e;
}

void display(struct Employee e) {
    printf("\n--- Employee Details ---\n");
    printf("ID: %d\n", e.id);
    printf("Name: %s\n", e.name);
    printf("Salary: %.2f\n", e.salary);
}
