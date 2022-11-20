#include<stdio.h>
void add();
void sub();
void multi();
void div();
int main(){
	int n;
	
	
	printf("(1) addtion\n");
	printf("(2) subtraction\n");
	printf("(3) multiplication\n");
	printf("(4) division\n");
	printf("(5) exit\n");
	printf("enter your choice");
	scanf("%d",&n);
	
	switch(n){
		case 1:
			add(n);
			break;
		case 2:
			sub(n);
			break;
		case 3:
			multi(n);
			break;
		case 4:
			div(n);
			break;
		default:
			printf("invalid choice");
			
	}
	
}
void add(int n){
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("ans=%d",a+b);
}
void sub(int n){
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("ans=%d",a-b);
}
void multi(int n){
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("ans=%d",a*b);
}
void div(int n){
	int a,b;
	printf("enter first number");
	scanf("%d",&a);
	printf("enter second number");
	scanf("%d",&b);
	printf("ans=%d",a/b);
}

