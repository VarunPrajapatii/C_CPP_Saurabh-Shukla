// Que2
// 2. Write a function to calculate simple interest. (TSRS)

#include<stdio.h>

float si(float, float, float);

int main()
{
    float principal, year, rate, ans;
    printf("Enter amount in rupee, time in year and rate percentage: ");
    scanf("%f %f %f", &principal, &year, &rate);
    ans=si(principal, year, rate);
    printf("The Simple interest is %f", ans);
    return 0;
}

float si(float p, float y, float r)
{
    float amount;
    amount = p+((p*y*r)/100);
    return amount;
}