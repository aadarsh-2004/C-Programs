#include<stdio.h>
int main(){
	int e,m,h,c,s,total,per,avg;

	
	
	printf("Marksheet\n\n");
	printf("Enter English Marks");
	scanf("%d",&e);
	printf("Enter Math Marks");
	scanf("%d",&m);
	printf("Enter Hindi Marks");
	scanf("%d",&h);
	printf("Enter Computer Marks");
	scanf("%d",&c);
	printf("Enter Science Marks");
	scanf("%d",&s);
	printf("Total Marks obtained = %d",e+m+h+c+s);
	printf("\nPercent obtained = %d",(e+m+h+c+s)/5);
	printf("\nAverage Marks obtained = %d",(e+m+h+c+s)/2);
}
