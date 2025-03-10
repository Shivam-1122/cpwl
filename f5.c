#include<stdio.h>
long fc(int n){
	long f=1;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	return f;
}
double ss(){
	double s=0.0;
	for(int i=1;i<=5;i++){
		s+=(double)fc(i)/i;
	}
	return s;
}
int main(){
	printf("Sum of the series: %.2lf\n",ss());
	return 0;
}
