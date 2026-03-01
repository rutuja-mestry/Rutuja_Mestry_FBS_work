#include<stdio.h>

int mystrncasecmp(char a[], char b[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        char c1=a[i], c2=b[i];

        if(c1>='A'&&c1<='Z') c1+=32;
        if(c2>='A'&&c2<='Z') c2+=32;

        if(c1!=c2)
            return c1-c2;

        if(a[i]=='\0')
            break;
    }
    return 0;
}

int main()
{
    char s1[]="ABCDEF";
    char s2[]="abcdef";

    if(mystrncasecmp(s1,s2,4)==0)
        printf("First 4 equal");
    else
        printf("Not equal");

    return 0;
}