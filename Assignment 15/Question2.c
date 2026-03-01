#include<stdio.h>

struct Time {
    int hrs, min, sec;
};

void main() {
    struct Time t1, t2, sum;

    printf("Enter Time1 (hrs min sec): ");
    scanf("%d%d%d", &t1.hrs, &t1.min, &t1.sec);

    printf("Enter Time2 (hrs min sec): ");
    scanf("%d%d%d", &t2.hrs, &t2.min, &t2.sec);

    sum.sec = t1.sec + t2.sec;
    sum.min = t1.min + t2.min;
    sum.hrs = t1.hrs + t2.hrs;

    if(sum.sec >= 60) {
        sum.min++;
        sum.sec -= 60;
    }

    if(sum.min >= 60) {
        sum.hrs++;
        sum.min -= 60;
    }

    printf("Added Time = %d:%d:%d\n",
           sum.hrs, sum.min, sum.sec);

    int totalSec = (t1.hrs*3600) + (t1.min*60) + t1.sec;
    printf("Time1 in Seconds = %d", totalSec);
}