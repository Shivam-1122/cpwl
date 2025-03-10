#include<stdio.h>
        int main(){
		int a,b,c;
		float d,e;
		printf("Calculations for 2 values\n");
		printf("Enter the serial number of your choice:\n");
		printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Mod\n6.Break\n");
		scanf("%d",&c);
		switch (c){
		       	case 1:
				printf("enter 2 numbers:");
				scanf("%d%d",&a,&b);
				printf("addition is: %d",a+b);
				break;
			case 2: 
				printf("enter 2 numbers:");
				scanf("%d%d",&a,&b);
				printf("subtraction is: %d",a-b);
				break;
			case 3:
				printf("enter 2 numbers:");
				scanf("%d%d",&a,&b);
				printf("multiplication is: %d",a*b);
				break;
			case 4: 
				printf("enter 2 numbers:");
				scanf("%f%f",&d,&e);
				printf("division is: %f",d/e);
				break;
			case 5:
				printf("enter 2 numbers:");
				scanf("%d%d",&a,&b);
				printf("mod is: %d",a%b);
				break;
			case 6:
				break;
			default:
				
				break;
		}
		return 0;
	}





