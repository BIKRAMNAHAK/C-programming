#include<stdio.h>
main(){
	int a,b,swipe;
	
	printf("enter value of a = ");
	scanf("%d",&a);
	printf("enter value of b = ");
	scanf("%d",&b);
	
	swipe = a;
	a=b;
	b=swipe;
	printf("after value=a %d",a);
	printf("\nafter value=b %d",b);
}