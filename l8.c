#include<stdio.h>
#include<math.h>
void main(){
	double p,r,t,a,ci;
	char c;
	do{
		printf("Enter principle amount:");
		scanf("%lf",&p);
		printf("enter annual interest rate:");
		scanf("%lf",&r);
		printf("enter time in years:");
		scanf("%lf",&t);
		a=p*pow((1+r*0.01),t);
		ci=a-p;
		printf("Compound interest: %.2lf\n",a);
		printf("want to calculate again?(y/n):");
		scanf(" %c",&c);
	}
	while(c=='y' || c=='Y');
}
