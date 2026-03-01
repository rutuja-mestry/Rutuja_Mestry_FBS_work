#include<stdio.h>

int mystrncmp(char a[], char b[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
            return a[i]-b[i];
        if(a[i]=='\0')
            break;
    }
    return 0;
}

int main()
{
    char s1[]="abcdef";
    char s2[]="abcxyz";

    if(mystrncmp(s1,s2,3)==0)
        printf("First 3 equal");
    else
        printf("Not equal");

    return 0;
}