#include<stdio.h>
int main(){
	int i,n;
	float sum=0,a;
	printf("enter number of terms:");
	scanf("%d",&n);
	printf("series=1+");
	for(i=2;i<n;i++){
		printf("1/%d+",i);
	}
	printf("1/%d",n);
	printf("\n");
	for(i=1;i<=n;i++){
		a=1.0/i;
		sum+=a;
	}
	printf("Sum is: %f",sum);
	return 0;
}



