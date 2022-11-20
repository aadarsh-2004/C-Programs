#include<stdio.h>
int main(){
	int num,a,b;
	printf("enter number ");
	scanf("%d",&num);
	while(num>0){
		printf("\nenter first number");
		scanf("%d",&a);
		printf("enter second number");
		scanf("%d",&b);
		printf("%d and %d sum is %d",a,b,a+b);
		printf("\n----------------------------------");
		num=num-1;
	}
}
