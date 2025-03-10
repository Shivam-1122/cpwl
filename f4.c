#include<stdio.h>
int s(int n){
	return n*n;
}
int main(){
	int n;
	printf("enter number:");
	scanf("%d",&n);
	printf("square of %d is: %d",n,s(n));
	return 0;
}
