#include<stdio.h>

void evenOdd()   // No parameter, No return
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    if(num%2==0)
        printf("Even");
    else
        printf("Odd");
}

int main()
{
    evenOdd();
    return 0;
}