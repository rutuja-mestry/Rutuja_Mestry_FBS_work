#include<stdio.h>

int mystrcmp(char s1[], char s2[])
{
    int i=0;
    while(s1[i]==s2[i] && s1[i]!='\0')
        i++;
    return s1[i]-s2[i];
}

int main()
{
    char a[]="abc";
    char b[]="abc";

    if(mystrcmp(a,b)==0)
        printf("Strings are equal");
    else
        printf("Strings are not equal");

    return 0;
}