#include<stdio.h>

void mystrcpy(char dest[], char src[])
{
    int i=0;
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char str1[]="Rutuja";
    char dest[20];

    mystrcpy(dest,str1);
    printf("Copied string: %s",dest);

    return 0;
}