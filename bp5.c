#include<stdio.h>
int main(){
	int h,w,p;
	printf("Enter height and width:");
	scanf("%d %d",&h,&w);
	p=2*(h+w);
	printf("Perimeter of rectangle is: %d",p);
	return 0;
}
