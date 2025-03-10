#include<stdio.h>
int main(){
	int i,n,sum=0;
	printf("enter number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
			sum+=2*i;
	}
	printf("Sum of %d even numbers is: %d",n,sum);
	return 0;
}


