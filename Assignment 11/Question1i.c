#include<stdio.h>

int mystrstr(char str[], char sub[])
{
    int i,j;

    for(i=0;str[i]!='\0';i++)
    {
        for(j=0;sub[j]!='\0';j++)
        {
            if(str[i+j]!=sub[j])
                break;
        }
        if(sub[j]=='\0')
            return 1;
    }
    return 0;
}

int main()
{
    char str[]="jai hanuman";
    char sub[]="han";

    if(mystrstr(str,sub))
        printf("Substring found");
    else
        printf("Substring not found");

    return 0;
}