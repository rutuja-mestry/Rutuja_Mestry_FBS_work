#include<stdio.h>
int main ()
{
	int num,i,count=0;
	printf("enter a number\n");
	scanf("%d",&num);
	for(int i=2;i<num;i++)
	if(num % i==0)
	count++;
	if(num>1 && count==0){
		printf("number is prime\n");
	}else{
		printf("not prime\n");
	}
}