#include<stdio.h>
int main(){
	int r,p,c,cm,t;
	char n[20];
	float per;
	printf("enter name:");
	scanf("%s",&n);
	printf("enter roll number:");
        scanf("%d",&r);
        printf("enter marks in physics,chemistry,computer application:");
        scanf("%d%d%d",&p,&c,&cm);
	printf("Roll No:%d\n",r);
	printf("Name of student:%s\n",n);
	printf("Marks in Physics:%d\n",p);
	printf("Marks in Chemistry:%d\n",c);
	printf("Marks in Computer Application:%d\n",cm);
        t=p+c+cm;
	printf("Total Marks=%d\n",t);
        per=t*0.34;
	printf("Percentage:%.2f\n",per);
        if(per>75 && per<=100){
	printf("Division=First");
	}
        else if(per>60 && per<=75){
	printf("Division=Second");
	}
        else{
	printf("Division=Third");
	}
        return 0;
}	
