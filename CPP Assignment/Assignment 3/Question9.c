#include<stdio.h>
int main ()
{
	int num=121,temp=num,rev=0,digit;
while(num>0){

	int digit=num%10;
	rev=rev * 10 +digit;
	num=num/10;
}
	if(rev==temp)
		printf("palindrome\n");
	else
	 	printf("not palindrome\n");
}