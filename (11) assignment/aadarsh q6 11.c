#include<stdio.h>
int main(){
	int n,i,a=1;
	printf("enter number ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i--){
		a=a*i;
		a=a-1;
		printf("%d",a);
		
		
		
	}
}
