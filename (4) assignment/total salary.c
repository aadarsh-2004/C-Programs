#include<stdio.h>
int main(){
	int a,b;
	printf("Basic Salary is ");
	scanf("%d",&a);
	b=a*0.4;
	printf("\nDearness allowance is %d",b);
	printf("\nGross Salary is %d",a+b);
}
