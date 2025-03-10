#include<stdio.h>
int main(){
	int h,m,c,n;
	printf("enter hours and minutes:");
	scanf("%d %d",&h,&m);
	c=h*60;
	n=c+m;
	printf("Total minutes: %d",n);
	return 0;
}
