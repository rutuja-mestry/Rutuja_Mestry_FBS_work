#include<stdio.h>
#include<string.h>

int main()
{
    char str[100], ch;
    int i, flag=0;

    printf("Enter string: ");
    fgets(str,100,stdin);

    printf("Enter character: ");
    scanf("%c",&ch);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]==ch)
        {
            flag=1;
            break;
        }
    }

    if(flag==1)
        printf("Character found");
    else
        printf("Character not found");

    return 0;
}