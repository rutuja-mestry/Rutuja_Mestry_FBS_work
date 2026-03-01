#include<stdio.h>

int main()
{
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str,100,stdin);

    for(i=0; str[i]!='\0'; i+=2)
        printf("%c",str[i]);

    return 0;
}