#include<stdio.h>

void addArray(int a[], int b[], int c[], int n)
{
    int i;

    for(i=0;i<n;i++)
        c[i]=a[i]+b[i];

    for(i=0;i<n;i++)
        printf("%d ",c[i]);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int brr[5]={10,20,30,40,50};
    int crr[5];

    addArray(arr,brr,crr,5);
    return 0;
}