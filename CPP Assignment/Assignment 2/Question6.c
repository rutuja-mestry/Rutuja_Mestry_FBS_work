#include<stdio.h>

int main ()
{
	int num;
	
	printf("enter a number\n");
	scanf("%d",&num);
	
	if(num%3==0 && num%5==0){
		
		printf("divisible by both \n");
		
	}	else if(num%3==0){
		
		printf("divisible by 3 but not 5\n");
	
}
	else if(num %5==0){
		
		printf("divisible by 5 but not 3\n");
		
	}else{
		
		printf("divisible by none\n");
	}
	}
