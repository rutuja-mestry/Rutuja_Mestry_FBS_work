#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int n,i,len;

    printf("Enter string: ");
    fgets(str,100,stdin);

    printf("Enter index: ");
    scanf("%d",&n);

    len=strlen(str);

    for(i=n;i<len;i++)
        str[i]=str[i+1];

    printf("Result: %s",str);
    return 0;
}