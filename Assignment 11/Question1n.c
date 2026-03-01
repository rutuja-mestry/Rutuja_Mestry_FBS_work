#include<stdio.h>

int mystrnstr(char str[], char sub[], int n)
{
    int i,j;

    for(i=0;i<n && str[i];i++)
    {
        for(j=0;sub[j] && i+j<n;j++)
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

    if(mystrnstr(str,sub,8))
        printf("Found within limit");
    else
        printf("Not found");

    return 0;
}