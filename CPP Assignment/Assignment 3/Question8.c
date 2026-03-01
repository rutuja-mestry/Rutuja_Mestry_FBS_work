#include<stdio.h>
int main()
{
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num > 0)
    {
        int digit = num % 10;
        int fact = 1;

        for(int i = 1; i <= digit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;
        num = num / 10;
    }
    if(sum == temp)
    {
        printf("Strong number\n");
    }
    else
    {
        printf("Not a strong number\n");
    }
    return 0;
}