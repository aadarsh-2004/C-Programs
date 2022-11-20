#include<stdio.h>
int main(){
	int num,a,b;
	printf("enter number ");
	scanf("%d",&num);
	b=num-num%10;
	printf("the number is %d",b);
}
