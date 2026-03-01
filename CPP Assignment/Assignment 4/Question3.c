#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    for(int num=1; num<=n; num++)
    {
        int sum=0;

        for(int i=1;i<num;i++)
        {
            if(num%i==0)
                sum=sum+i;
        }

        if(sum==num)
            printf("%d ",num);
    }
    return 0;
}
