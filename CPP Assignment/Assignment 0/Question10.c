#include <stdio.h>

int main() {
    int s1 = 70, s2 = 75, s3 = 80, s4 = 65, s5 = 90;
    int total = s1 + s2 + s3 + s4 + s5;
    float percentage = total / 5.0;

    printf("Total Marks = %d\n", total);
    printf("Percentage = %.2f%%", percentage);
    return 0;
}
