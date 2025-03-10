#include<stdio.h>
int main(){
	char f[20],s[20];
	int y;
	printf("Enter your forename:");
	scanf("%s",f);
	printf("Enter your surname:");
	scanf("%s",s);
	printf("Enter birth year:");
	scanf("%d",&y);
	printf("Forename: %s\nSurname: %s\nYear of birth: %d\n",f,s,y);
	return 0;
}

