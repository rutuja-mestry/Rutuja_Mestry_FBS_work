#include<stdio.h>
int main()
{
    int a[5]={10,25,5,40,15};
    int i,min,max;

    min=max=a[0];

    for(i=1;i<5;i++)
    {
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }

    printf("Minimum = %d\n",min);
    printf("Maximum = %d",max);

    return 0;
}