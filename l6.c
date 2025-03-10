#include<stdio.h>
int main(){
	int nm[100],c=0,n,i,d;
	printf("Enter numbers:\n");
	while(1){
		scanf("%d",&n);
		d=0;
		for(i=0;i<c;i++){
			if(nm[i]==n){
				d=1;
				break;
			}
		}
		if(d==1){
			printf("duplicate number detected");
			break;
		}
		nm[c++]=n;
	}
	return 0;
}
