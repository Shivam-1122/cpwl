#include<stdio.h>
int main(){
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	b=a%2;
	if(a>0){
		printf("Number is positive\n");
		if(b==0){
			printf("Even number");
		}
		else{
			printf("Odd number");
		}
		return 0;
	}
	else if(a<0){
		printf("Numnber is negative");
		return 0;
	}
	else{
		printf("zero");
	}
	return 0;
}




