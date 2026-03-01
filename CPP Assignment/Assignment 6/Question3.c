#include<stdio.h>

int sum()   // No parameter, With return
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);

    return a+b;
}

int main()
{
    int result = sum();
    printf("Sum = %d",result);
    return 0;
}