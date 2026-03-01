#include<stdio.h>

void mystrncpy(char dest[], char src[], int n)
{
    int i;
    for(i=0;i<n && src[i]!='\0';i++)
        dest[i]=src[i];
    dest[i]='\0';
}

int main()
{
    char src[]="Rutuja";
    char dest[20];

    mystrncpy(dest,src,4);
    printf("Copied: %s",dest);

    return 0;
}