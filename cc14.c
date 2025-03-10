#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter serial number of your choice:\n");
	printf("1.Area of circle\n2.Area of square\n3.Area of rectangle\n4.Break\n");
	scanf("%d",&c);
	switch (c){
		case 1:
			printf("enter radius:");
			scanf("%d",&a);
			printf("area of circle: %f",2*3.14*a*a);
			break;
		case 2:
			printf("enter side:");
			scanf("%d",&a);
			printf("area of square: %d",a*a);
			break;
		case 3:
			printf("enter length and breadth:");
			scanf("%d%d",&a,&b);
			printf("area of rectangle is: %d",a*b);
			break;
		case 4:
			break;
		default:
			printf("wrong choice");
			break;
	}
	return 0;
}


