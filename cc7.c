#include<stdio.h>
int main(){
	int t;
	printf("enter temperature in degree centigrade:");
	scanf("%d",&t);
	if(t<0){
		printf("freezing weather");
		return 0;
	}
	else if(t>=0 && t<10){
		printf("very cold weather");
		return 0;
	}
	else if(t>=10 && t<20){
		printf("cold weather");
		return 0;
	}
	else if(t>=20 && t<30){
		printf("normal weather");
		return 0;
	}
	else if(t>=30 && t<40){
		printf("its hot");
		return 0;
	}
	else{
		printf("its very hot");
	}
	return 0;
}

