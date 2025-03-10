#include<stdio.h>
int main(){
	int n,nn=0,a,c;
	printf("enter number:");
	scanf("%d",&n);
	c=n;
	while(n!=0){
	      a=n%10;
	      nn=nn*10+a;
	      n/=10;
	}
	if(n=nn){
		printf("Palindrome number");
	}
	else{
		printf("not a palindrome number");
	}
	return 0;
}


