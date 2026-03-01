#include<stdio.h>

void reverse(int a[], int n)
{
    int i;

    for(i=n-1;i>=0;i--)
        printf("%d ",a[i]);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    reverse(arr,5);
    return 0;
}