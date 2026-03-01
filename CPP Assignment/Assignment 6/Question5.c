#include<stdio.h>

void printRange()
{
    int start,end;

    printf("Enter start and end: ");
    scanf("%d%d",&start,&end);

    for(int i=start;i<=end;i++)
    {
        printf("%d ",i);
    }
}

int main()
{
    printRange();
    return 0;
}