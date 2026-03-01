#include<stdio.h>
int main ()
{
	int age;
	printf("enter a age\n");
	scanf("%d",&age);
	if(age<=12){
		printf("child\n");
		
	}else if (age<=19){
		printf("teenager\n");
		
	}else if(age<=59){
		printf("adult\n");
		
	}else {
		printf("senior\n");
	}
}