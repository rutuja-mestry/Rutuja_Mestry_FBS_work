#include<stdio.h>
int main ()
{
	int sum=0,num;
	printf("enter a number\n");
	scanf("%d",&num);
	for(int i=1;i<num;i++)
	if(num %i==0 )
	sum=sum+i;

	if(sum==num)
	{
		printf("perfect\n");
		
	}else{
		printf("not perfect\n");
	}
}