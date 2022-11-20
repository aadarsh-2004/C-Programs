#include<stdio.h>
int main(){
	int pr;
	intrest_calculator(pr);
}
int intrest_calculator(int pr){
	int rt,t,interest;
printf("enter principal amount");
scanf("%d",&pr);
printf("enter rate of intrest");
scanf("%d",&rt);
printf("enter time period");
scanf("%d",&t);
interest = pr*rt*t;
printf("The Simple interest is %d", interest);
}
