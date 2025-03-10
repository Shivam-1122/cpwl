#include<stdio.h>
void main(){
	int c=0;
	float n,s=0,avg;
	char choice;
	do{
		printf("enter a number:");
		scanf("%f",&n);
		s+=n;
		c++;
		printf("do you want to enter another number(y/n):");
		scanf(" %c",&choice);
	}while(choice=='y' || choice=='Y');
	if(c>0){
		avg=s/c;
		printf("average of entered numbers: %.2f\n",avg);
	}
	else{
		printf("no numbers entered\n");
	}
}
