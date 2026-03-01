#include<stdio.h>

void sum(int a[], int n)
{
    int i,total=0;

    for(i=0;i<n;i++)
        total+=a[i];

    printf("Sum = %d\n",total);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    sum(arr,5);
    return 0;
}