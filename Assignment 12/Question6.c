#include<stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')
            str[i]='#';
    }

    printf("Result: %s",str);
    return 0;
}