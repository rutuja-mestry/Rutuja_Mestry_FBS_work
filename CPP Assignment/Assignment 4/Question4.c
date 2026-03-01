#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int num=1; num<=n; num++)
    {
        int temp=num, sum=0;

        while(temp>0)
        {
            int digit=temp%10;
            int fact=1;

            for(int i=1;i<=digit;i++)
                fact=fact*i;

            sum=sum+fact;
            temp=temp/10;
        }

        if(sum==num)
            printf("%d ",num);
    }
    return 0;
}
