#include<stdio.h>

void fact(int *n)
{
    int i, f = 1;
    for(i=1; i<=*n; i++)
        f = f * i;

    printf("Factorial = %d", f);
}

int main()
{
    int num = 4;
    fact(&num);
    return 0;
}