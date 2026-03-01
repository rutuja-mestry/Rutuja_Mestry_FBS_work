#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i;

    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
            printf("%d is Even\n",a[i]);
        else
            printf("%d is Odd\n",a[i]);
    }

    return 0;
}