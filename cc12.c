#include<stdio.h>
int main(){
	int i,c=0,n=0;
	char u[10],v[10]="shivam2211",p[8],s[8]="password";
	printf("enter username:");
	scanf("%s",u);
	for(i=0;i<10;i++){
		if(u[i]==v[i]){
			if(u[10]=='\0'){
			         c=1;
			}
		}
		else{
			c=0;
			printf("wrong username\n");
			return 0;
		}
	}
	if(c==1){
		printf("enter password:");
		scanf("%s",p);
		for(i=0;i<8;i++){
			if(p[i]==s[i]){
				if(p[8]=='\0'){
				        n=1;
				}
			}
			else{
				n=0;
				printf("incorrect password\n");
				return 0;
			}
		}
		if(n==1){
			printf("authentication successful\n");
		}
	}


	return 0;
}

	
