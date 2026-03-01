#include <stdio.h>

int main() {
    int minutes = 130;
    int hours = minutes / 60;
    int rem = minutes % 60;

    printf("Hours = %d\nRemaining Minutes = %d", hours, rem);
    return 0;
}
