#include<stdio.h>
int main()
{
    int a[5]={1,2,3,4,5};
    int i,num=3,flag=0;

    for(i=0;i<5;i++)
    {
        if(a[i]==num)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("Number Found");
    else
        printf("Number Not Found");

    return 0;
}