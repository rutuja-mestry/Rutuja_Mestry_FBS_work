#include<stdio.h>

int main()
{
    char str1[100], str2[100];
    int i,len1=0,len2=0;

    printf("Enter first string: ");
    fgets(str1,100,stdin);

    printf("Enter second string: ");
    fgets(str2,100,stdin);

    for(i=0; str1[i]!='\0'; i++)
        len1++;

    for(i=0; str2[i]!='\0'; i++)
        len2++;

    if(len1>len2)
        printf("Larger: %s",str1);
    else
        printf("Larger: %s",str2);

    return 0;
}