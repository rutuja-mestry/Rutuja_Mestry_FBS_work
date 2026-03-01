#include<stdio.h>

char* mystrrchr(char str[], char ch)
{
    int i,last=-1;

    for(i=0;str[i];i++)
        if(str[i]==ch)
            last=i;

    if(last!=-1)
        return &str[last];
    else
        return NULL;
}

int main()
{
    char str[]="banana";
    char *ptr=mystrrchr(str,'a');

    if(ptr)
        printf("Last occurrence: %s",ptr);
    else
        printf("Not found");

    return 0;
}