#include<stdio.h>
int main ()
{
	float basic,da,ta,hra,total;
	printf("enter basic salary \n");
	scanf("%f",&basic);
	if(basic<=5000)
	{
		da= 0.10 * basic;
		ta= 0.20 * basic;
		hra= 0.25 * basic;
		
	}	else{
		da= 0.15 * basic;
		ta= 0.25 * basic;
		hra= 0.30 * basic;
	}
		total=basic + da + ta + hra;
		printf("\n basic salary :%.2f",basic);
		printf("\n DA :%.2f",da);
		printf("\n TA :%.2f",ta);
		printf("\n HRA :%.2f",hra);
		printf("\n Total Salary :%.2f",total);
		
		
	}