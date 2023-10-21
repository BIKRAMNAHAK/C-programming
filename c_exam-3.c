#include<stdio.h>
main(){
	int celsius;
	float fahrenheit;
	
	printf("enter celsius= ");
	scanf("%d",&celsius);
	
	fahrenheit= (celsius*9/5)+32;
	printf("fahrenheit value = %.2f",fahrenheit);
	
}