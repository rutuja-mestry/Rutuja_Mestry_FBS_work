#include<stdio.h>

void prime(int *n)
{
    int i, a= 0;

    for(i=2; i<*n; i++)
    {
        if(*n % i == 0)
        {
            a= 1;
            break;
        }
    }

    if(a== 0)
        printf("Prime");
    else
        printf("Not Prime");
}

int main()
{
    int num = 7;
    prime(&num);
    return 0;
}