#include<stdio.h>

void mystrrev(char str[])
{
    int i=0,len=0;
    char temp;

    while(str[len])
        len++;

    for(i=0;i<len/2;i++)
    {
        temp=str[i];
        str[i]=str[len-1-i];
        str[len-1-i]=temp;
    }
}

int main()
{
    char str[]="jai";

    mystrrev(str);
    printf("Reversed: %s",str);

    return 0;
}