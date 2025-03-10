#include<stdio.h>
void main(){
	int num,sum=0;
	printf("enter numbers(0 to stop entering numbers):");
	do{
		scanf("%d",&num);
		if(num>0){
			sum+=num;
		}
	}
	while(num!=0);
	printf("sum is: %d",sum);
}
