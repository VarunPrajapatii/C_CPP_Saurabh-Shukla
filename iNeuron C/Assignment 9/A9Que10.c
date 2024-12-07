// Que10
// 10. C program to find all roots of a quadratic equation using switch case


#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, discriminant, root1, root2, realPart, imagPart;

    printf("Enter coefficients a, b, and c of the quadratic equation (ax^2 + bx + c = 0):\n");
    scanf("%f %f %f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    switch (discriminant > 0) {
        case 1:
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and different.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;

        case 0:
            switch (discriminant == 0) {
                case 1:
                    root1 = -b / (2 * a);
                    printf("The root is real and repeated.\n");
                    printf("Root = %.2f\n", root1);
                    break;

                default:
                    realPart = -b / (2 * a);
                    imagPart = sqrt(-discriminant) / (2 * a);
                    printf("The roots are complex and different.\n");
                    printf("Root 1 = %.2f + %.2fi\n", realPart, imagPart);
                    printf("Root 2 = %.2f - %.2fi\n", realPart, imagPart);
                    break;
            }
            break;
    }

    return 0;
}
