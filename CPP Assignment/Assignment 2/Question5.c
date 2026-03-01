#include<stdio.h>
int main ()
{
	char student;
	float price,discount=0,final_price;
	printf("enter the price ");
	scanf("%f",&price);
	
	printf("are you a student? (y/n):");
		scanf(" %c" , &student);
		if(student=='y'|| student=='Y')
		{
			if(price > 500)
			{
				discount= 0.20;
		
			}else{
			   discount= 0.10;
			}
		
			
			} 	else {
			if(price > 600){
				discount= 0.15;	
			}else{
			
				discount= 0.0;
			}
}
			final_price = price - (price*discount);
			printf("dicount %.2f \n",discount);
			printf("final price = %.2f\n",final_price);
}
	 