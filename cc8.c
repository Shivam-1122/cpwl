#include<stdio.h>
int main(){
	int c,u;
	float b;
	char n[50];
	printf("enter customer id:");
	scanf("%d",&c);
	printf("enter name:");
	scanf("%s",n);
	printf("enter unit consumed:");
	scanf("%d",&u);
	printf("name: %s\n",n);
	printf("customer id: %d\nunit consumed: %d",c,u);
	if(u<=100){
		printf("Total bill: 100");
		return 0;
	}
	if(u>100 && u<=199){
		b=u*1.20;
		printf("Total bill: %f",b);
		return 0;
	}
	else if(u>=200 && u<400){
		b=u*1.50;
		printf("Total bill: %f",b);
		return 0;
	}
	else if(u>=400 && u<600){
		b=(u*1.80)+(u*0.15);
		printf("Total bill including surcharge: %f",b);
		return 0;
	}
	else{
		b=(u*2.00)+(u*0.15);
		printf("Total bill including surcharge: %f",b);
	}
	return 0;
}
