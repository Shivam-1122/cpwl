#include<stdio.h>
int main(){
	int i,c,n;
	printf("enter number:");
	scanf("%d",&n);
	printf("Number\t Cube\n");
	for(i=1;i<=n;i++){
		c=i*i*i;
	printf("%d\t %d\n",i,c);
	}
	return 0;
}
