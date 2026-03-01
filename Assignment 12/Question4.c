#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], temp;
    int len;

    printf("Enter string: ");
    fgets(str,100,stdin);

    len=strlen(str)-1;

    temp=str[0];
    str[0]=str[len-1];
    str[len-1]=temp;

    printf("Result: %s",str);
    return 0;
}