// Que7
// 7. Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition. 
// Using the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.

#include<stdio.h>
int main()
{
    float units, bill;
    printf("Enter electricity units: ");
    scanf("%f", &units);

    switch(1)
    {
        case 1:
            if(units<=50)
            {
                bill=(units*0.5);
                bill=1.20*bill;
                printf("Electricity bill is %.2f.", bill);
                break;
            }
        case 2:
            if(units<=150)
            {
                bill=((units-50)*0.75)+25;
                bill=1.20*bill;
                printf("Electricity bill is %.2f.", bill);
                break;
            }
        case 3:
            if(units<=250)
            {
                bill=((units-150)*1.20)+100;
                bill=1.20*bill;
                printf("Electricity bill is %.2f.", bill);
                break;
            }
        case 4:
            if(units>250)
            {
                bill=((units-250)*1.50)+220;
                bill=1.20*bill;
                printf("Electricity bill is %.2f.", bill);
                break;
            }
    }


}