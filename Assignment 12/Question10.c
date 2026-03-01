#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i,len,flag=0;

    printf("Enter string: ");
    fgets(str,100,stdin);

    len=strlen(str)-1;

    for(i=0;i<len/2;i++)
    {
        if(str[i]!=str[len-1-i])
        {
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}