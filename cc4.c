#include<stdio.h>
int main(){
	int m,n;
	printf("enter value of m:");
	scanf("%d",&m);
	if(m>0){
		n=1;
		printf("n=%d",n);
		return 0;
	}
	if(m==0){
		n=0;
		printf("n=%d",n);
		return 0;
	}
	else{
		n=-1;
		printf("n=%d",n);
		
	}
	return 0;
}
