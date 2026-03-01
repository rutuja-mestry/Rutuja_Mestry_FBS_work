#include<stdio.h>

void mystrcat(char s1[], char s2[])
{
    int i=0,j=0;

    while(s1[i] != '\0')
        i++;

    while(s2[j] != '\0')
    {
        s1[i]=s2[j];
        i++; j++;
    }
    s1[i]='\0';
}

int main()
{
    char str1[20]="jai ";
    char str2[]="hanuman";

    mystrcat(str1,str2);
    printf("Concatenated: %s",str1);

    return 0;
}