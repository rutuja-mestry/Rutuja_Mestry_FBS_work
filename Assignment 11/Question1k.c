#include<stdio.h>

char* mystrchr(char str[], char ch)
{
    int i=0;
    while(str[i])
    {
        if(str[i]==ch)
            return &str[i];
        i++;
    }
    return NULL;
}

int main()
{
    char str[]="jai hanuman";
    char *ptr=mystrchr(str,'h');

    if(ptr)
        printf("Found: %s",ptr);
    else
        printf("Not found");

    return 0;
}