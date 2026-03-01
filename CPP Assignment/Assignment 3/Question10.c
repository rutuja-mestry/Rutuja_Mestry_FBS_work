#include<stdio.h>
int main ()
{
	int num=12345, first,last,sum;
	int temp=num;
	last=temp%10;
	while(temp>=10){
		temp=temp/10;
		
	}
	first=temp;
	sum=first+last;
	printf("sum of and last digit= %d\n",sum);
	
}