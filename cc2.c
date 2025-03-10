#include<stdio.h>
int main(){
	int a,b;
	printf("enter a number:");
	scanf("%d",&a);
	b=a%2;
	if(b==0){
		printf("even number");
	}
	return 0;
}
