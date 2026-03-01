#include<stdio.h>
#include<string.h>

int main()
{
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];
    char *ptr;

    printf("Length: %lu\n", strlen(str1));

    strcpy(str3, str1);
    printf("Copy: %s\n", str3);

    strncpy(str3, str2, 3);
    str3[3] = '\0';
    printf("Copy n chars: %s\n", str3);

    strcat(str1, str2);
    printf("Concatenate: %s\n", str1);

    strncat(str1, "!!!", 3);
    printf("Concatenate n: %s\n", str1);

    printf("Compare: %d\n", strcmp("abc","abd"));

    printf("Compare n: %d\n", strncmp("abc","abd",2));

    ptr = strchr(str1,'W');
    if(ptr!=NULL)
        printf("First occurrence: %s\n",ptr);

    ptr = strrchr(str1,'l');
    if(ptr!=NULL)
        printf("Last occurrence: %s\n",ptr);

    ptr = strstr(str1,"World");
    if(ptr!=NULL)
        printf("Substring: %s\n",ptr);

    printf("Span: %lu\n", strspn("abcde123","abcde"));

    printf("CSpan: %lu\n", strcspn("abcde123","123"));

    char temp[50]="one,two,three";
    ptr=strtok(temp,",");
    while(ptr!=NULL)
    {
        printf("Token: %s\n",ptr);
        ptr=strtok(NULL,",");
    }

    printf("Error: %s\n", strerror(2));

    printf("Memcmp: %d\n", memcmp("abc","abd",3));

    char arr[20];
    memset(arr,'*',5);
    arr[5]='\0';
    printf("Memset: %s\n",arr);

    memcpy(arr,"Hello",5);
    arr[5]='\0';
    printf("Memcpy: %s\n",arr);

    memmove(arr+2,arr,5);
    arr[7]='\0';
    printf("Memmove: %s\n",arr);

    return 0;
}