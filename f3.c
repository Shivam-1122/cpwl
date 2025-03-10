#include<stdio.h>
void eo(int n){
	if(n%2==0){
		printf("%d is even",n);
	}
	else{
		printf("%d is odd",n);
	}
}
	int main(){
		int n;
		printf("enter number:");
		scanf("%d",&n);
		eo(n);
		return 0;
	}
