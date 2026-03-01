#include<stdio.h>

void mystrncat(char s1[], char s2[], int n)
{
    int i=0,j=0;

    while(s1[i])
        i++;

    while(j<n && s2[j])
    {
        s1[i]=s2[j];
        i++; j++;
    }
    s1[i]='\0';
}

int main()
{
    char s1[20]="jai ";
    char s2[]="hanuman";

    mystrncat(s1,s2,3);
    printf("Result: %s",s1);

    return 0;
}