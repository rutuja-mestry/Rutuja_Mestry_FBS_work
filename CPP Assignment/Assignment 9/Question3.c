#include<stdio.h>

void primeArray(int a[], int n)
{
    int i,j,flag;

    for(i=0;i<n;i++)
    {
        flag=0;

        for(j=2;j<a[i];j++)
        {
            if(a[i]%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0 && a[i]>1)
            printf("%d ",a[i]);
    }
}

int main()
{
    int arr[5]={2,4,5,7,8};
    primeArray(arr,5);
    return 0;
}