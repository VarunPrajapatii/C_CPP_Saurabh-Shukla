// Assignment - 10
// Functions in C Language

// 1. Write a function to calculate the area of a circle. (TSRS)

#include<stdio.h>

float areacir(float);

int main()
{
    float r, ar;
    printf("Enter Radius of circle: ");
    scanf("%f", &r);
    ar=areacir(r);
    printf("Area is %f", ar);
    return 0;
}


float areacir(float x)
{
    float a;
    a=(3.14*x*x);
    return a;
}