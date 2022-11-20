#include<stdio.h>
int main(){
	int r;
	circle(r);
}
int circle(int r){
	int area;
	float pi=3.14;
	printf("Enter radius of circle");
	scanf("%d",&r);
	area=pi*r*r;
	printf("area of circle is %d",area);
}
