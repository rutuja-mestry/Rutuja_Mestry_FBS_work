#include<stdio.h>
int main (){
	int marks;
	printf("enter marks\n");
	scanf("%d",&marks);
	if(marks>=75){
		printf("Distinction\n");
		
	}else if(marks>=65){
		printf("first class\n");
		
	}else if(marks>=55){
		printf("second class\n");
		
	}else if(marks>40){
		printf("pass\n");
		
	}else{
		printf("fail\n");
	}
}