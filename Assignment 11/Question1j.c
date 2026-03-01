#include<stdio.h>

int mystrcasecmp(char a[], char b[])
{
    int i=0;
    while(a[i] && b[i])
    {
        char c1=a[i], c2=b[i];

        if(c1>='A'&&c1<='Z') c1+=32;
        if(c2>='A'&&c2<='Z') c2+=32;

        if(c1!=c2)
            return c1-c2;
        i++;
    }
    return a[i]-b[i];
}

int main()
{
    char s1[]="ABC";
    char s2[]="abc";

    if(mystrcasecmp(s1,s2)==0)
        printf("Equal");
    else
        printf("Not Equal");

    return 0;
}