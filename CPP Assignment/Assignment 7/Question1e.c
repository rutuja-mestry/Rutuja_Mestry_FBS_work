#include<stdio.h>

void sum(int *a, int *b)
{
    printf("Sum = %d", *a + *b);
}

int main()
{
    int x = 3, y = 4;
    sum(&x, &y);
    return 0;
}