
#include <stdio.h>
int main() {
    int num, temp, digit, result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (num != 0) {
        digit = num % 10;
        result = result+ digit * digit * digit;
        num=num / 10;
    }

    if (result == temp)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}