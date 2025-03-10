
#include<stdio.h>
int main(){
	int a,b,c,d;
	printf("enter angles:");
	scanf("%d %d %d",&a,&b,&c);
	d=a+b+c;
	if(d==180){
		printf("triangle can be formed");
	}
	else{
		printf("triangle cannot be formed");
	}
	return 0;
}

