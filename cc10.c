#include<stdio.h>
int main(){
	int a,b,c,d,e;
	printf("enter 5 numbers:");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a>b){
		if(a>c){
			if(a>d){
				if(a>e){
					printf("%d is greatest",a);
				}
			}
		}
	}
	if(b>a){
		if(b>c){
			if(b>d){
				if(b>e){
					printf("%d is greatest",b);
				}
			}
		}
	}
	if(c>a){
		if(c>b){
			if(c>d){
				if(c>e){
					printf("%d is greatest",c);
				}
			}
		}
	}
	if(d>a){
		if(d>b){
			if(d>c){
				if(d>e){
					printf("%d is greatest",d);
				}
			}
		}
	}
	if(e>a){
		if(e>b){
			if(e>c){
				if(e>d){
					printf("%d is greatest",e);
					}
			}
		}
	}
	return 0;
}
