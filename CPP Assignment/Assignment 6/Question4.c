#include<stdio.h>

int factorial(int n)   // With parameter, With return
{
    int fact=1;
    for(int i=1;i<=n;i++)
        fact=fact*i;

    return fact;
}

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    int result = factorial(num);
    printf("Factorial = %d",result);

    return 0;
}