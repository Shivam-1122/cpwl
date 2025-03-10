#include<stdio.h>
int main(){
	int c;
	float f;
	printf("Enter temperature in degree centigrade:");
	scanf("%d",&c);
	f=(c*1.8)+32;
	printf("temperature in degree fahrenheit: %f",f);
	return 0;
}
