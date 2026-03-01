#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("enter three sides of traingle:-");
	scanf("%d %d %d",&a,&b,&c);
	if(a==b && b==c)
	{
		printf("equilateral");
		
	}else if(a==b || b==c || a==c ){
		printf("Isosceles");
	}else {
		printf("scalene");
	}
}