#include<stdio.h>

int main()
{
    int choice, num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("\n1.Even or Odd");
    printf("\n2.Prime or Not");
    printf("\n3.Palindrome or Not");
    printf("\n4.Positive, Negative or Zero");
    printf("\n5.Reverse a Number");
    printf("\n6.Sum of Digits");
    printf("\nEnter your choice: ");
    scanf("%d",&choice);

    if(choice==1)
    {
        if(num%2==0)
            printf("Even");
        else
            printf("Odd");
    }
    else if(choice==2)
    {
        int count=0;
        for(int i=1;i<=num;i++)
        {
            if(num%i==0)
                count++;
        }
        if(count==2)
            printf("Prime");
        else
            printf("Not Prime");
    }
    else if(choice==3)
    {
        int temp=num, rev=0;
        while(num>0)
        {
            rev=rev*10+(num%10);
            num=num/10;
        }
        if(rev==temp)
            printf("Palindrome");
        else
            printf("Not Palindrome");
    }
    else if(choice==4)
    {
        if(num>0)
            printf("Positive");
        else if(num<0)
            printf("Negative");
        else
            printf("Zero");
    }
    else if(choice==5)
    {
        int rev=0;
        while(num>0)
        {
            rev=rev*10+(num%10);
            num=num/10;
        }
        printf("%d",rev);
    }
    else if(choice==6)
    {
        int sum=0;
        while(num>0)
        {
            sum=sum+(num%10);
            num=num/10;
        }
        printf("%d",sum);
    }
    else
    {
        printf("Invalid Choice");
    }

    return 0;
}
