#include<stdio.h>
int main(){
	int a;
	check(a);
}
int check(int a){
	printf("enter number");
	scanf("%d",&a);
	if(a%2==0){
		printf("the number is even");
		return 1;}
	else{
		printf("0");
		return 0;
	
	
	}
	
}
