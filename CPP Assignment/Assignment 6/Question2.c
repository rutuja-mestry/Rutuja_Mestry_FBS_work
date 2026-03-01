#include<stdio.h>

void strong(int num)   // With parameter, No return
{
    int temp=num,sum=0;

    while(num>0)
    {
        int digit=num%10;
        int fact=1;

        for(int i=1;i<=digit;i++)
            fact=fact*i;

        sum=sum+fact;
        num=num/10;
    }

    if(sum==temp)
        printf("Strong Number");
    else
        printf("Not Strong Number");
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    strong(n);
    return 0;
}