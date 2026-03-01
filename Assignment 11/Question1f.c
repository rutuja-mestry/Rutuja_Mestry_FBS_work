#include<stdio.h>

void mystrupper(char str[])
{
    int i=0;
    while(str[i])
    {
        if(str[i]>='a' && str[i]<='z')
            str[i]=str[i]-32;
        i++;
    }
}

int main()
{
    char str[]="jai hanuman";

    mystrupper(str);
    printf("Uppercase: %s",str);

    return 0;
}