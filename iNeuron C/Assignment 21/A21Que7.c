// Que7
// 7. Write a program to calculate the difference between two time periods.


#include <stdio.h>

struct time {
    int hour;
    int min;
    int sec;
};

int main() {
    struct time t1, t2, diff;
    printf("This program calculates the difference between two time periods.\n");
    printf("Enter Time 1 (hour minute second): ");
    scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
    printf("Enter Time 2 (hour minute second): ");
    scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);

    // Normalize seconds and borrow from minutes if needed
    if (t1.sec < t2.sec) {
        t1.sec += 60;
        t1.min -= 1;
    }
    diff.sec = t1.sec - t2.sec;

    // Normalize minutes and borrow from hours if needed
    if (t1.min < t2.min) {
        t1.min += 60;
        t1.hour -= 1;
    }
    diff.min = t1.min - t2.min;

    // Calculate the hour difference
    diff.hour = t1.hour - t2.hour;

    // Display the difference
    printf("Time Difference: %d hour(s), %d minute(s), %d second(s)\n", 
           diff.hour, diff.min, diff.sec);

    return 0;
}
