#include<stdio.h>
int main(){
	int t1=0,t2=1,nt,c=0;
	printf("Fibonacci series:");
	while(c<10){
		printf("%d ",t1);
		nt=t1+t2;
		t1=t2;
		t2=nt;
		c++;
	}
	printf("\n");
	return 0;
}
	
