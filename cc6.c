#include<stdio.h>
int main(){
	int y,a;
	printf("enter year:");
	scanf("%d",&y);
	a=y%4;
	if(a==0){
		printf("leap year");
	}
	else{
		printf("not a leap year");
	}
	return 0;
}
