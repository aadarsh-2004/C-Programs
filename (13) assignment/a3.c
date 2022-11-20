#include<stdio.h>
int main(){
	int n,a;
	
	
	printf("(1) Burger\n");
	printf("(2) French Fries\n");
	printf("(3) Pizza\n");
	printf("(4) Sandwiches\n");
	printf("\nenter your choice");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			printf("\nBurger\n");
			printf("enter Quantity ");
			scanf("%d",&a);
			printf("total charges 200*%d qty = %dRs",a,a*200);
			break;
		case 2:
			printf("French Fries");
			printf("enter Quantity ");
			scanf("%d",&a);
			printf("total charges 50*%d qty = %dRs",a,a*50);
			break;
		case 3:
			printf("pizza");
			printf("enter Quantity ");
			scanf("%d",&a);
			printf("total charges 500*%d qty = %dRs",a,a*500);
			break;
		case 4:
			printf("Sandwiches");
			printf("enter Quantity ");
			scanf("%d",&a);
			printf("total charges 150*%d qty = %dRs",a,a*150);
			break;

		default:
			printf("enter some valid choice");
			
	}
	
}


