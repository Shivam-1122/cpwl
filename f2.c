#include<stdio.h>
#include<math.h>
int arm(int n){
	int s=0,t=n,d=0;
	while(t){
		d++;t/=10;
	}
	for(t=n;t;t/=10){
		s+=pow(t%10,d);
		return s==n;
	}
}
int per(int n){
	if(n<2){
		return 0;
	}
	int s=1;
	for(int i=2;i*i<=n;i++){
		if(n%i==0){
			s+=i;
			if(i!=n/i){
				s+=n/i;
			}
		}
	}
	return s==n;
}
		int main(){
			int n;
			printf("enter number:");
			scanf("%d",&n);
			printf("%d is %s\n",n,arm(n)?"armstrong":"not armstrong");
			printf("%d is %s\n",n,per(n)?"perfect":"not perfect");
			return 0;
		}
